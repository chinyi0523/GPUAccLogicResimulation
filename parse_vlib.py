import sys
import json

f = open(sys.argv[1], 'r')
lines = f.readlines()

module_dic, tmp, seq = {}, {}, 0

for rawline in lines:
	line = rawline.strip(' ')
	line = line.strip('\n')
	if line.startswith('module'):
		module_name = line.split(' ')[1]
	elif line.startswith('endmodule'):
		if seq == 1:
			tmp['seq'] = 1
			seq = 0
		else:
			tmp['seq'] = 0
		if module_name == "GEN_CLKGATE_D1" or module_name == "GEN_SYNC3C_STRICT_D1":
			tmp['seq'] = 1
		module_dic[module_name] = tmp
		tmp = {}
	elif line.startswith('input'):
		tmp[line.split(' ')[-1][:-1]] = 'input'
		if line.split(' ')[-1][:-1] == 'clk':
			seq = 1
	elif line.startswith('output'):
		tmp[line.split(' ')[-1][:-1]] = 'output'


f.close()

jsobj = json.dump(module_dic, open(sys.argv[2], 'w'))
