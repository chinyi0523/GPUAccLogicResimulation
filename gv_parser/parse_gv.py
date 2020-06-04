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
ipt = {}
wire_connect = {}
que = queue.Queue()
for rawline in lines[1:-1]:
	line = rawline.strip(' ')
	if line.startswith('input'):
		x = line.strip('input')
		x = x.replace(' ', '')
		x = x.split(',')
		for element in x:
			xx = element
			if element.startswith('['):
				t, s = element.split(']')[0].split(':')
				xx = element.split(']')[1]
				for i in range(int(s), int(t[1:])+1):
					ipt[(xx+'['+str(i)+']')] = 'primary_input '+(xx+'['+str(i)+']')
					pipt.append(xx+'['+str(i)+']')
			else:
				ipt[xx] = 'primary_input '+xx
				pipt.append(xx)
	elif line.startswith('output'):
		x = line.strip('output')
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
		x = line.strip('assign')
		x = x.replace(' ', '')
		x = x.split('=')
		x[1] = x[1].split("'b")[1]
		assign.append(x)
		ipt[x[0]] = 'assign '+x[1]
	else:
		module, inout = line.split('(', 1)
		module = module[:-1].split(' ')
		cur = {}
		cur['motype'] = module[0]
		inout = inout[:-1]
		inout = inout.replace(' ', '')
		inout = inout.split(',')
		cnt = 0
		in_sp, out_sp = [], []
		for x in inout:
			tmp = x[1:-1]
			tmp = tmp.split('(')
			cur[tmp[1]] = tmp[0]
			if jsobj[module[0]][tmp[0]] == 'input':
				if tmp[1] in wire_connect.keys():
					wire_connect[tmp[1]].append(module[1])
				else:
					wire_connect[tmp[1]] = [module[1]]
				if "'b" not in tmp[1] and tmp[1] not in ipt.keys():
					cnt += 1
				in_sp.append(tmp[1])
			elif jsobj[module[0]][tmp[0]] == 'output':
				if jsobj[module[0]]['seq'] == 1:
					ipt[tmp[1]] = 'pseudo_primary_input '+tmp[1]
				else:
					ipt[tmp[1]] = module[1]+' '+tmp[0]
				out_sp.append(tmp[1])
			else:
				print('err')
		cur['in_order'] = cnt
		cur['input'] = in_sp
		cur['output'] = out_sp
		if cnt == 0:
			que.put(module[1])
		submodule[module[1]] = cur


f.close()
f = open(sys.argv[3], 'w')
for line in pipt:
	f.write(line+'\n')

f.write("*****************\n")

for line in popt:
	f.write(line+'\n')

f.write("*****************\n")

for line in assign:
	res = " ".join(line)
	f.write(res+'\n')

f.write("*****************\n")

while not que.empty():
	cur_mod = que.get()
	res = cur_mod + " " + submodule[cur_mod]['motype'] + " [ "
	inp = submodule[cur_mod]['input']
	for i in inp:
		res += submodule[cur_mod][i]
		if i in ipt.keys():
			res += "("+ipt[i]+") "
		else:
			res += "("+i+") "
	res += "] [ "
	out = submodule[cur_mod]['output']
	for o in out:
		res +=  (submodule[cur_mod][o]+"("+o+") ")
		if o in popt:
			continue
		if o not in wire_connect.keys():
			continue
		for m in wire_connect[o]:
			submodule[m]['in_order'] -= 1
			if submodule[m]['in_order'] == 0:
				que.put(m)
	res += "]\n"
	f.write(res)
f.close()
	