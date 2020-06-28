import sys

def make_function(wr):
    buf = []
    inp = []
    oup = []
    wire = []
    already = False
    cnt_input=0
    while (1):
        line = f.readline()
        #line.split(str="", num=string.count(str))
        if line[0:6] == "module":
            wr.write("Map[\"{name}\"] = {name};\n".format(name = line.split()[1]))
        elif line[0:9] == "endmodule":
            break
#def make_primitive(wr):


f = open(sys.argv[1])
for i in range(70): 
        line = f.readline()
with open(sys.argv[2],'w') as wr:
    ##223 for all sequential
    for i in range(int(sys.argv[3])):
        make_function(wr)