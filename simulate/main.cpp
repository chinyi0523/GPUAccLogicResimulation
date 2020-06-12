#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <map>
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
    }
    while(getline(fin, line)){
        if(line=="*****************"){
            cout<<"Finish reading outputs\n";
            break;
        }
    }
    while(getline(fin, line)){
        if(line=="*****************"){
            cout<<"Finish reading constants\n";
            break;
        }
    }
    int group = 0;
    int i=0;
    while(getline(fin, line)){
        if(line==""){
            group++;
            cout<<"Constructing Group "<<group<<"\n";
        }
        else{
            vector<string> tokens = split_string(line, ' ');
            
            string name = tokens.at(0);
            string type = tokens.at(1);
            int level = atoi(tokens.at(2).c_str());
            string inputs = tokens.at(3);
            string outputs = tokens.at(4);
            Gate* curr_gate_addr = new Gate(name,type,level,group);
            cout<<"Gate Type: "<<curr_gate_addr->getType()<<endl;
            cout<<inputs<<endl;
            tokens = split_string(inputs, ',');
            for(int i=0;i<tokens.size();i++){
                cout<<" "<<tokens[i]<<" inpt: ";
                size_t found = tokens[i].find("(");
                string port_name = tokens[i].substr(0,found);
                string port_input = tokens[i].substr(found+1,tokens[i].length()-found-2);
                tokens = split_string(port_input, ':');
                //Primary Input primary_input:input name
                if(tokens.at(0)=="primary_input"){
                    string pi_name = tokens.at(1);
                }
                //Other U21607:z
                else{
                    string pi_name = tokens.at(0);
                    string pi_port = tokens.at(1);
                }
            }
            
            cout<<outputs<<endl;
            exit(1);
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