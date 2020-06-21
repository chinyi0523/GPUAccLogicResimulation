#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <map>
#include <tuple>
#include "lib.h"
#include "waveform.h"
#include "gate.h"
using namespace std;
vector<string> split_string(const string& s, char delimiter);
void help_message(){
    cout << "Usage: ./sim <input vcd file> <netlist>" << endl;
    cout << "Missing or too many options !"<<endl;
}
int main(int argc, char* argv[]){
    if(argc!=3){
        help_message();
        exit(1);
    }
    char* vcdFile = argv[1];
 	char* netlistFile = argv[2];
    /*
    Waveform waveform;
    if (waveform.read(vcdFile)){
        cout << "File \"" << vcdFile << "\" was read in successfully." << endl;
    }
    else {
        cerr << "Failed to read in file \"" << vcdFile << "\"!" << endl;
        exit(1); // vcdFile does not exist.
    }
    */
    fstream fin;
	fin.open(netlistFile, fstream::in);
    if(!fin.is_open()){
        cerr<<"Failed to open "<<netlistFile<<endl;
        exit(1);
    }
    map <string,Gate*> Netlist;
    string line;
    while(getline(fin, line)){
        if(line=="*****************"){
            cout<<"Finish reading inputs\n";
            break;
        }
        else{
            Gate* curr_gate_addr = new Gate(line,"primary_input",0,0);
            Netlist[line] = curr_gate_addr;
        }
    }
    while(getline(fin, line)){
        if(line=="*****************"){
            cout<<"Finish reading outputs\n";
            break;
        }
        else{
            Gate* curr_gate_addr = new Gate(line,"primary_output",0,0);
            Netlist[line] = curr_gate_addr;
        }

    }
    while(getline(fin, line)){
        if(line=="*****************"){
            cout<<"Finish reading constants\n";
            break;
        }
    }
    int group = 1;
    int i=0;
    while(getline(fin, line)){
        //cout<<"!!! "<<line<<" !!!"<<endl;
        if(line==""){
            group++;
            if(group%10==0)
                cout<<"Constructing Group "<<group<<"\n";
            /*
            if(group==108){
                exit(1);
            }
            */
        }
        else{
            //cout<<line<<endl;
            vector<string> tokens = split_string(line, ' ');
            
            string name = tokens.at(0);
            string type = tokens.at(1);
            int level = atoi(tokens.at(2).c_str());
            string inputs = tokens.at(3);
            string outputs = tokens.at(4);
            string delay_info = tokens.at(5);
            Gate* curr_gate_addr = new Gate(name,type,level,group);
            //cout<<"Gate Name: "<<curr_gate_addr->getName()<<endl;
            //cout<<"Gate Type: "<<curr_gate_addr->getType()<<endl;
            tokens = split_string(inputs, ',');
            for(int i=0;i<tokens.size();i++){
                //cout<<" "<<tokens[i]<<" inpt: ";
                size_t found = tokens[i].find("(");
                string port_name = tokens[i].substr(0,found);
                string port_input = tokens[i].substr(found+1,tokens[i].length()-found-2);
                vector<string> tokens_inp = split_string(port_input, ':');
                //Primary Input primary_input:input name
                map<string,Gate*>::iterator iter;
                if(tokens_inp.size()<2){
                    if(tokens_inp.at(0)=="1'b0"){
                        //cout<<"constant zero"<<endl;
                        tuple<string,string,Gate*> _inp ("CONST0","",NULL);
                        curr_gate_addr->add_fin(port_name,_inp);
                    }
                    else if(tokens_inp.at(0)=="1'b1"){
                        tuple<string,string,Gate*> _inp ("CONST1","",NULL);
                        curr_gate_addr->add_fin(port_name,_inp);
                    }
                    else{

                    }
                }
                else{
                    if(tokens_inp.at(0)=="primary_input"||tokens_inp.at(0)=="pseudo_primary_input"){
                        string pi_name = tokens_inp.at(1);
                        iter = Netlist.find(pi_name);
                        if(iter==Netlist.end()){
                            cout<<"INPUT of "<<name<<" pi("<<pi_name<<") not yet construct!\n";
                        }
                        else{
                            tuple<string,string,Gate*> _inp ("PI","",iter->second);
                            tuple<string,string,Gate*> _oup (port_name,"PI",curr_gate_addr);
                            (iter->second)->add_fout(name,_oup);
                            curr_gate_addr->add_fin(port_name,_inp);
                            //iter->second->printGateInfo();
                            //cout<<"ADD \""<<pi_name<<"\" to "<<curr_gate_addr->getType()<<"("<<curr_gate_addr->getName()<<")'s "<<port_name<<"\n";
                        }
                    //cout<<pi_name<<endl;
                    }
                    //Other U21607:z
                    else{
                        string pi_name = tokens_inp.at(0);
                        string pi_port = tokens_inp.at(1);
                        //cout<<pi_name<<" !!! "<<pi_port<<endl;
                        iter = Netlist.find(pi_name);
                        if(iter==Netlist.end()){
                            cout<<"INPUT of "<<name<<" pi("<<pi_name<<") not yet construct!\n";
                        }
                        else{
                            tuple<string,string,Gate*> _inp (pi_port,"",iter->second);
                            tuple<string,string,Gate*> _oup (port_name,pi_port,curr_gate_addr);
                            (iter->second)->add_fout(name,_oup);
                            curr_gate_addr->add_fin(port_name,_inp);
                            //iter->second->printGateInfo();
                            //cout<<"ADD \""<<pi_name<<"\" to "<<curr_gate_addr->getType()<<"("<<curr_gate_addr->getName()<<")'s "<<port_name<<"\n";
                        }
                        
                    }

                }
                
                
            }

            //////////////////Deal with delay///////////////////////////
            map<string, map<bool, tuple<float,float>>> delayMap;
            tokens = split_string(delay_info, '[');
            vector<string> io_tokens;
            string io;
            bool flag;
            string delay;
            vector<string> delay_vector; 
            float rising_delay, falling_dealy;
            for(int i=1; i<tokens.size(); i++){ // tokens 前面好像有一個空格
                io_tokens = split_string(tokens[i], ',');
                if(io_tokens.size() == 2){ 
                    // consider posedge/negedge
                    vector<string> tmp_tokens = split_string(io_tokens[0], '"');
                    io = tmp_tokens[0].substr(0, tmp_tokens[0].length()-1);
                    istringstream(tmp_tokens[1]) >> flag;
                    delay = tmp_tokens[2];
                    delay_vector = split_string(delay, '-');
                    rising_delay = stof(delay_vector[0]);
                    falling_dealy = stof(delay_vector[1]);
                    delayMap[io][flag] = tuple<float,float>(rising_delay, falling_dealy); // flag=0

                    tmp_tokens = split_string(io_tokens[1], '"');
                    istringstream(tmp_tokens[1]) >> flag;
                    delay = tmp_tokens[2];
                    delay_vector = split_string(delay, '-');
                    rising_delay = stof(delay_vector[0]);
                    falling_dealy = stof(delay_vector[1]);
                    delayMap[io][flag] = tuple<float,float>(rising_delay, falling_dealy); // flag=1
                }else if(io_tokens.size() == 1){ 
                    // no need to consider posedge/negedge
                    size_t found = io_tokens[0].find(':');
                    io =  io_tokens[0].substr(0,found);
                    delay = io_tokens[0].substr(found+1,io_tokens[0].length()-found-2);
                    delay_vector = split_string(delay, '-');
                    rising_delay = stof(delay_vector[0]);
                    falling_dealy = stof(delay_vector[1]);
                    delayMap[io][false] = tuple<float,float>(rising_delay, falling_dealy);
                    delayMap[io][true] = tuple<float,float>(rising_delay, falling_dealy);
                }else{
                    cout << "Error: io_tokens' size=" << io_tokens.size() << endl;
                }
            }
            curr_gate_addr->set_delayInfo(delayMap);
            /* Delay debug message
            delayMap = curr_gate_addr->getDelayInfo();
            tuple<float,float> printDelay;
            cout<<"Gate Delay: "<<endl;
            for(auto const &ent1 : delayMap) {
                cout << ent1.first << endl;
                for(auto const &ent2 : ent1.second) {
                    printDelay = ent2.second;
                    cout << ent2.first << '\t' << get<0>(printDelay) << '\t' << get<1>(printDelay) << endl;
                }
            }*/

            //if(group==1477)
            //curr_gate_addr->printGateInfo();
            //cout<<outputs<<endl;
            /*
            tokens = split_string(outputs, ',');
            for(int i=0;i<tokens.size();i++){
                size_t f2 = tokens[i].find("(");
                string port_name = outputs.substr(0,f2);
                cout<<port_name<<endl;
                string port_input = tokens[i].substr(f2+1,tokens[i].length()-f2-2);
                cout<<port_input<<endl;
            }
            exit(1);
            */
            Netlist[name] = curr_gate_addr;
        }
    }
}

vector<string> split_string(const string& s, char delimiter)
{
   vector<string> tokens;
   string token;
   istringstream tokenStream(s);
   while (std::getline(tokenStream, token, delimiter))
   {
      tokens.push_back(token);
   }
   return tokens;
}