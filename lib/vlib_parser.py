import sys

def make_function(wr):
    buf = []
    inp = []
    oup = []
    wire = []
    already = False
    while (1):
        line = f.readline()
        #line.split(str="", num=string.count(str))
        if line[0:6] == "module":
            buf += "vector<char> "
            buf += line.split()[1]
            buf += "("
            
        elif line[2:7] == "input":
            buf += "char "
            buf += line.split()[1][:len(line.split()[1])-1]
            inp.append(line.split()[1][:len(line.split()[1])-1])
            buf += ","
            
        elif line[2:8] == "output":
            if(not already):
                for i in range(len(buf)-1):
                    #print(buf[i],end = "")
                    wr.write(buf[i])
                #print("){")
                wr.write("){\n")
                already = True
            buf.clear()
            wr.write("    // output \n")
            buf += "    char"
            buf += line[8:len(line)]
            for i in range(len(buf)):
                #print(buf[i],end="")
                wr.write(buf[i])
            oup.append(line.split()[1][:len(line.split()[1])-1])
        elif line[2:6] == "wire":
            #print("   ","char",line[7:],end="")
            wr.write("    // wire \n")
            wr.write("    char ")
            wr.write(line[7:])
            wr.write("\n")
        elif line[2:5] == "reg":
            wr.write("    // reg \n")
            wr.write("    char ")
            wr.write(line[6:])
            wr.write("\n")
        elif line[2:9] == "supply1":
            #print("   ","char",line[7:],end="")
            wr.write("    // supply1 \n")
            wr.write("    char ")
            wr.write(line[10:len(line)-2])
            wr.write(" = '1';")
            wr.write("\n")
        elif (line[2:9]=="specify"):
            ln = f.readline()
            while ln[2:12] != "endspecify":
                ln = f.readline()
        elif (line[2:10]=="udp_mux2"):
            buf.clear()
            buf += "    "
            buf += line.split()[2][1:len(line.split()[2])-1]
            buf += " = "
            buf += line.split()[0]
            buf += "("
            for i in range(len(line.split())-3):
                buf += line.split()[3+i]
            for i in range(len(buf)):
                #print(buf[i],end="")
                wr.write(buf[i])
            wr.write('\n')
        elif (line[2:10]=="udp_tlat"):
            buf.clear()
            buf += "    "
            buf += line.split()[2][1:len(line.split()[2])-1]
            buf += " = "
            buf += line.split()[0]
            buf += "("
            for i in range(len(line.split())-3):
                buf += line.split()[3+i]
            for i in range(len(buf)):
                #print(buf[i],end="")
                wr.write(buf[i])
            wr.write('\n')
        elif (line[2:9]=="udp_dff"):
            buf.clear()
            buf += "    "
            buf += line.split()[2][1:len(line.split()[2])-1]
            buf += " = "
            buf += line.split()[0]
            buf += "("
            for i in range(len(line.split())-3):
                buf += line.split()[3+i]
            for i in range(len(buf)):
                #print(buf[i],end="")
                wr.write(buf[i])
            wr.write('\n')
        elif (line[2:10]=="udp_xbuf"):
            buf.clear()
            buf += "    "
            buf += line.split()[2][1:len(line.split()[2])-1]
            buf += " = "
            buf += line.split()[0]
            buf += "("
            for i in range(len(line.split())-3):
                buf += line.split()[3+i]
            for i in range(len(buf)):
                #print(buf[i],end="")
                wr.write(buf[i])
            wr.write('\n')
        elif line[0:9] == "endmodule":
            #print()
            #print("    vector<char> ans;")
            wr.write("\n    vector<char> ans;\n")
            for i in oup:
                #print("    ans.push_back(",i,");")
                wr.write("    ans.push_back({});\n".format(i))
            #print("    return ans;")
            wr.write("    return ans;\n}\n")
            #print("}")
            break
        else :
            buf.clear()
            buf += "    "
            buf += line.split()[1][1:len(line.split()[1])-1]
            buf += " = "
            buf += line.split()[0]
            buf += chr(len(line.split())+46)
            buf += "("
            for i in range(len(line.split())-2):
                buf += line.split()[2+i]
            
            for i in range(len(buf)):
                #print(buf[i],end="")
                wr.write(buf[i])
            wr.write('\n')
            #print()
#def make_primitive(wr):


f = open(sys.argv[1])
for i in range(70): 
        line = f.readline()
with open(sys.argv[2],'w') as wr:
    wr.write("#include <iostream>\n")
    wr.write("#include <stdlib.h>\n")
    wr.write("#include <string.h>\n")
    wr.write("#include <vector>\n")
    wr.write("using namespace std;\n")
    ##223 for all sequential
    for i in range(int(sys.argv[3])):
        make_function(wr)