import sys
import json
import queue

f = open(sys.argv[1], 'r')
lines = f.read()
lines = lines.replace('\n', '')
lines = lines.split(';')
pipt = []
popt = []
assign = []
submodule = {}
jsobj = json.load(open(sys.argv[2]))
sdfobj = json.load(open(sys.argv[3]))
ipt = {}
wire_connect = {}
que = queue.Queue()
inv_que = queue.Queue()
for rawline in lines[1:-1]:
	line = rawline.strip(' ')
	if line.startswith('input'):
		x = line.lstrip('input')
		x = x.replace(' ', '')
		x = x.split(',')
		for element in x:
			xx = element
			if element.startswith('['):
				t, s = element.split(']')[0].split(':')
				xx = element.split(']')[1]
				for i in range(int(s), int(t[1:])+1):
					ipt[(xx+'['+str(i)+']')] = 'primary_input:'+(xx+'['+str(i)+']')
					pipt.append(xx+'['+str(i)+']')
			else:
				ipt[xx] = 'primary_input:'+xx+'[0]'
				pipt.append(xx+'[0]')
	elif line.startswith('output'):
		x = line.lstrip('output')
		x = x.replace(' ', '')
		x = x.split(',')
		for element in x:
			xx = element
			if element.startswith('['):
				t, s = element.split(']')[0].split(':')
				xx = element.split(']')[1]
				for i in range(int(s), int(t[1:])+1):
					popt.append(xx+'['+str(i)+']')
			else:
				popt.append(xx)
	elif line.startswith('wire'):
		continue
	elif line.startswith('assign'):
		x = line.lstrip('assign')
		x = x.replace(' ', '')
		x = x.split('=')
		assign.append(x)
		ipt[x[0]] = 'assign:'+x[1]
	else:
		module, inout = line.split('(', 1)
		module = module[:-1].split(' ')
		if jsobj[module[0]]['seq'] == 0:
			cur = {}
			cur['motype'] = module[0]
			inout = inout[:-1]
			inout = inout.replace(' ', '')
			inout = inout.split(',')
			in_sp, out_sp = [], []
			for x in inout:
				tmp = x[1:-1]
				tmp = tmp.split('(')
				if len(tmp) == 1:
					continue
				if tmp[1].startswith('{'):
					continue
				cur[tmp[1]] = tmp[0]
				if jsobj[module[0]][tmp[0]] == 'input':
					if tmp[1] in wire_connect.keys():
						wire_connect[tmp[1]].append(module[1])
					else:
						wire_connect[tmp[1]] = [module[1]]
					in_sp.append(tmp[1])
				elif jsobj[module[0]][tmp[0]] == 'output':
					ipt[tmp[1]] = module[1]+':'+tmp[0]
					out_sp.append(tmp[1])
				else:
					print('err')
			cur['input'] = in_sp
			cur['output'] = out_sp
			submodule[module[1]] = cur

for x in submodule.keys():
	inp = submodule[x]['input']
	cnt = 0
	for y in inp:
		if "'b" not in y and y not in ipt.keys():
			if y.endswith(']'):
				ipt[y] = 'pseudo_primary_input:'+y
				pipt.append(y)
			else:
				ipt[y] = 'pseudo_primary_input:'+y+'[0]'
				pipt.append(y+'[0]')
		if "'b" not in y and not ipt[y].startswith('primary_input') and not ipt[y].startswith('pseudo_primary_input') and not ipt[y].startswith('assign'):
			cnt += 1
	submodule[x]['in_order'] = cnt
	if cnt == 0:
		submodule[x]['lev'] = 1
		que.put(x)

f.close()
f = open(sys.argv[4], 'w')
# for line in pipt:
# 	f.write(line+'\n')

f.write("*****************\n")

for line in popt:
	f.write(line+'\n')

f.write("*****************\n")

for line in assign:
	res = " ".join(line)
	f.write(res+'\n')

f.write("*****************\n")

cur_lev, split_group = 1, 0

while not que.empty():
	cur_mod = que.get()
	if submodule[cur_mod]['lev'] > cur_lev or split_group == 8:
		cur_lev = submodule[cur_mod]['lev']
		split_group = 0
		f.write('\n')
	res = cur_mod + " " + submodule[cur_mod]['motype'] + " " + str(submodule[cur_mod]['lev']) + " "
	inp = submodule[cur_mod]['input']
	for s, i in enumerate(inp):
		if s > 0:
			res += ","
		res += submodule[cur_mod][i]
		if i in ipt.keys():
			res += "("+ipt[i]+")"
		else:
			res += "("+i+")"
	res += " "
	out = submodule[cur_mod]['output']
	for s, o in enumerate(out):
		if s > 0:
			res += ","
		res +=  (submodule[cur_mod][o]+"("+o)
		if not o.endswith(']'):
			res += '[0]'
		res += ")"
		if o in popt:
			continue
		if o not in wire_connect.keys():
			continue
		for m in wire_connect[o]:
			submodule[m]['in_order'] -= 1
			if submodule[m]['in_order'] == 0:
				submodule[m]['lev'] = submodule[cur_mod]['lev']+1
				que.put(m)
	delay_dict = sdfobj[cur_mod]
	res += ' '
	for pin, delay in delay_dict.items():
		pin_in, pin_out = pin.split(',')
		res += ('['+pin_in+'-'+pin_out+':')
		if type(delay) is list:
			res += (str(delay[0])+'-'+str(delay[1]))
		else:
			res += ('"0"'+str(delay["0"][0])+'-'+str(delay["0"][1])+',"1"'+str(delay["1"][0])+'-'+str(delay["1"][1]))
		res += ']'
	res += "\n"
	if jsobj[submodule[cur_mod]['motype']]['seq'] == 0:
		split_group += 1
		f.write(res)
f.close()
	