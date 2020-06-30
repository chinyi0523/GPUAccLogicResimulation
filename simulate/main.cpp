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
tuple<float, string> sim(string ,string,string,string,string,string,string,float,string,string,map<string, map<bool, tuple<float,float>>>,bool,
                        string type,    //gate type
                        int output_port_num,
                        std::map<std::string, FnPtr> myMap);
typedef vector<char> (*FnPtr)(char, char, char, char, char, char);
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
    //Usage:
    std::map<std::string, FnPtr> myMap;
    construct_funct_map(myMap);
    //vector<char> res = myMap["GEN_AND2_D1"]('1','1','0','0','0','0');
    //std::cout << res[0]<<endl;
    
    //name_list
    vector<string> order_name_list;

    fstream fin;
	fin.open(netlistFile, fstream::in);
    if(!fin.is_open()){
        cerr<<"Failed to open "<<netlistFile<<endl;
        exit(1);
    }
    map <string,Gate*> Netlist;
    string line;

    //Reading Primary (Pseudo) Inputs
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

    //Reading Outputs
    while(getline(fin, line)){
        if(line=="*****************"){
            cout<<"Finish reading outputs\n";
            break;
        }
        else{
            Gate* curr_gate_addr = new Gate(line,"primary_output",0,0);
            Netlist[line] = curr_gate_addr;
            //order_name_list.push_back(line);
        }

    }

    //Reading Constants
    while(getline(fin, line)){
        if(line=="*****************"){
            cout<<"Finish reading constants\n";
            break;
        }
    }

    //Reading Gates
    int group = 1;
    int i=0;
    int current_level=1;
    order_name_list.push_back("*");
    while(getline(fin, line)){
        //cout<<"!!! "<<line<<" !!!"<<endl;
        if(line==""){
            group++;
            order_name_list.push_back("*");
            //if(group%10==0)
            //    cout<<"Constructing Group "<<group<<"\n";
            //Terminating Function: stop at group ?
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
            if(current_level!=level) {
                order_name_list.push_back("**");
                current_level = level;
            }
            string inputs = tokens.at(3);
            string outputs = tokens.at(4);
            string delay_info = tokens.at(5);
            Gate* curr_gate_addr = new Gate(name,type,level,group);
            tokens = split_string(inputs, ',');
            order_name_list.push_back(name);

            //Fanin Construction
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
            //End of Fanin construction

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
    /*
    int l=0; int g=0;
    for(int i=0;i<order_name_list.size();i++){
        if(order_name_list.at(i)=="**"){
            l++;
            g=0;
            cout<<"Level "<<l<<endl;
        }
        else if(order_name_list.at(i)=="*"){
            g++;
            cout<<endl;
            cout<<"Group "<<g<<endl;
        }
        else
        cout<<order_name_list[i]<<" ";
    }
    */
    /*
    /////////////////////Add primary input waveform///////////////////////////////
    
    cout<<"start loading waveform"<<endl;
    cout<<Netlist.size()<<endl;
    
    Waveform waveform;
    if (waveform.read(vcdFile)){
        cout << "File \"" << vcdFile << "\" was read in successfully." << endl;
    }
    else {
        cerr << "Failed to read in file \"" << vcdFile << "\"!" << endl;
        exit(1); // vcdFile does not exist.
    }
    
    for(int i = 0; i < waveform.getSize(); i++){
        string name = waveform.getWaveformElem(i).getName();
        //dla_reset_rstn
        string bit = to_string(waveform.getWaveformElem(i).getBit());
        
        string gateName = name + '[' + bit + ']';
        if(bit=="0") {  gateName = name;}
        if(Netlist.find(gateName) == Netlist.end()){
            cout << "Error: gateName=" << gateName << endl;
        }else{
            Netlist[gateName]->set_timeStamp(waveform.getWaveformElem(i).getTimestamp() );
        }
    }
    */
    cout<<"Finish loading Input Waveform"<<"\n";
    cout<<order_name_list.size()<<endl;
    cout<<(Netlist["dla_reset_rstn"]->getTimeStamp()).size()<<endl;
    for(i=0;i<order_name_list.size();i++){
        if(order_name_list.at(i)=="*"){
            continue;
        }
        cout<<(order_name_list.at(i))<<endl;
        Netlist[order_name_list.at(i)] -> printGateInfo();
        /*
        GateList _fin = Netlist[order_name_list.at(i)] -> getFin();
        map<string,tuple<string,string,Gate*>>::iterator iter;
        
        vector<tuple<string,TimeStamp,int>> input_timestamps;
        for(iter=_fin.begin();iter!=_fin.end();iter++){
            if(get<0>(iter->second)=="CONST0"||get<0>(iter->second)=="CONST1"){
               cout<<"     ."<<iter->first<<"("<<get<0>(iter->second)<<")\n"; 
            }
            else {
                // iter->first input port
                // get<2>(iter->second) input gate pointer
                // get<0>(iter->second) which output of input gate
                //cout<<"     ."<<iter->first<<"("<<(get<2>(iter->second))->getName()<<": "<<get<0>(iter->second)<<")\n";
                tuple<string,TimeStamp,int> temp (iter->first,get<2>(iter->second) -> getTimeStamp(),0);
                input_timestamps.push_back(temp);
            }
        }*/
        ///This part generates TimeStamps
        vector<tuple<float,string>> TimeStamp0;
        tuple<float,string> temp0_0 (0,"x"); TimeStamp0.push_back(temp0_0);
        tuple<float,string> temp0_1 (1,"0"); TimeStamp0.push_back(temp0_1);
        tuple<float,string> temp0_2 (18001,"1"); TimeStamp0.push_back(temp0_2);
        tuple<string,TimeStamp,int> TS0 ("i0",TimeStamp0,0); //last integer is the number of timestamps currently on
        vector<tuple<float,string>> TimeStamp1;
        tuple<float,string> temp1_0 (0,"x"); TimeStamp1.push_back(temp1_0);
        tuple<float,string> temp1_1 (1,"z"); TimeStamp1.push_back(temp1_1);
        tuple<string,TimeStamp,int> TS1 ("i1",TimeStamp1,0);
        vector<tuple<float,string>> TimeStamp2;
        tuple<float,string> temp2_0 (0,"x"); TimeStamp2.push_back(temp2_0);
        tuple<float,string> temp2_1(1,"0"); TimeStamp2.push_back(temp2_1);
        tuple<string,TimeStamp,int> TS2 ("s",TimeStamp2,0);
        vector<tuple<string,TimeStamp,int>> input_timestamps;
        input_timestamps.push_back(TS0);
        input_timestamps.push_back(TS1);
        input_timestamps.push_back(TS2);
        /////////////////////////
        int input_num = input_timestamps.size();
        float current_timestamp[6] = {-1,-1,-1,-1,-1,-1};
        bool current_timestamp_is_min[6] = {false,false,false,false,false,false};
        string current_timestamp_value[6] = {"@","@","@","@","@","@"};
        bool finish[6] = {false,false,false,false,false,false};
        //Initialize the first value
        for(int j=0;j<input_timestamps.size();j++){
            current_timestamp[j] = get<0>(get<1>(input_timestamps[j])[get<2>(input_timestamps[j])]);
            current_timestamp_value[j] = get<1>(get<1>(input_timestamps[j])[get<2>(input_timestamps[j])]);
        }
        //Print current status
        for (int j=0;j<6;j++){
            cout<<current_timestamp[j] << " ";
        }
        cout<<endl;
        for (int j=0;j<6;j++){
            cout<<current_timestamp_value[j] << " ";
        }
        cout<<endl;
        /////////
        //Sent and get initial output timestamp
        tuple<float, string> initial_timestamp = sim(current_timestamp_value[0],current_timestamp_value[1],current_timestamp_value[2],
                        current_timestamp_value[3],current_timestamp_value[4],current_timestamp_value[5],
                        "NO current value due to time = 0",0.0,"A lot of inport","z",
                        Netlist[order_name_list.at(i)]->getDelayInfo(),   //delay["in_port_name, out_port_name"][0(or1]
                        false,
                        Netlist[order_name_list.at(i)]->getType(),    //gate type
                        0,
                        myMap);
        //Save to output timestamp
        //Function has some bugs
        //////////////////////////
        //Go through all timestamps
        while(1){
            float min = current_timestamp[0];
            //Find min of time
            for(int j=0;j<6;j++){
                if(current_timestamp[j]!=-1&&finish[j]==false){
                    if(current_timestamp[j]<min) 
                    min = current_timestamp[j];
                }
                else break;
            }
            //Update and get new timestamp 
            for(int j=0;j<6;j++){
                if(current_timestamp[j]!=-1){
                    if(current_timestamp[j]==min) {
                        current_timestamp_is_min[j] = true;
                        if(get<2>(input_timestamps[j]) < get<1>(input_timestamps[j]).size()-1){
                            //cout<<"INPUT: "<<j<<" now = "<<get<2>(input_timestamps[j])<<" Max = "<<get<1>(input_timestamps[j]).size()<<endl;
                            get<2>(input_timestamps[j])++;
                            current_timestamp[j] = get<0>(get<1>(input_timestamps[j])[get<2>(input_timestamps[j])]);
                            current_timestamp_value[j] = get<1>(get<1>(input_timestamps[j])[get<2>(input_timestamps[j])]);
                        }   
                        else {
                            cout<< "Input " << j<< " Finishes !"<<endl;
                            finish[j] = true;
                        }
                    }
                }
                else break;
            }
            //Status before another loop
            for (int j=0;j<6;j++){
                cout<<current_timestamp[j] << " ";
            }
            cout<<endl;
            for (int j=0;j<6;j++){
                cout<<current_timestamp_value[j] << " ";
            }
            cout<<endl;
            bool F = true;
            for(int j=0;j<input_num;j++){
                if(!finish[j]) F = false;
            }
            if(F) break;
            //Unfinish part, I'm so tired
            tuple<float, string> initial_timestamp = sim(current_timestamp_value[0],current_timestamp_value[1],current_timestamp_value[2],
                        current_timestamp_value[3],current_timestamp_value[4],current_timestamp_value[5],
                        "NO current value due to time = 0",min,"A lot of inport","z",
                        Netlist[order_name_list.at(i)]->getDelayInfo(),   //delay["in_port_name, out_port_name"][0(or1]
                        false,
                        Netlist[order_name_list.at(i)]->getType(),    //gate type
                        0,
                        myMap);
            //////////////////////////////
            //Save to output timestamp
            //Function has some bugs
            //////////////////////////
        }
        exit(1);//Only do first gate now... QAQ
    }

}
void compare(){
    
}
tuple<float, string> sim(string a_value, 
                        string b_value, 
                        string c_value, 
                        string d_value, 
                        string e_value, 
                        string f_value, 
                        string output_current_value,
                        float time,
                        string in_port_name,
                        string out_port_name,
                        map<string, map<bool, tuple<float,float>>> Delay,   //delay["in_port_name, out_port_name"][0(or1]
                        bool input_rise_or_fall,
                        string type,    //gate type
                        int output_port_num,
                        std::map<std::string, FnPtr> myMap){

    //compute output value
    string output_value;
    char a = a_value[0];
    char b = b_value[0];
    char c = c_value[0];
    char d = d_value[0];
    char e = e_value[0];
    char f = f_value[0];
    vector<char> res = myMap[type](a, b, c, d, e, f);
    output_value = res[output_port_num];
    //comput output time
    string in_out_name = in_port_name + ", " + out_port_name;
    float out_time = time;
    float delay = 0;

    char out_current = output_current_value[0];
    switch(out_current){
        case '0':
            switch(res[output_port_num]){
                case '0':
                    break;
                case '1':
                    //rising
                    delay = get<0>(Delay[in_out_name][input_rise_or_fall]);
                    out_time = time + delay;
                    break;
                case 'x':
                    cout << "0 to x" << endl;
                    break;
                case 'z':
                    cout << "0 to z" << endl;
                    break;
                default:
                    cout << "Error: Computed undesirable output value" << endl;
                    break;
            }
            break;
        case '1':
            switch(res[output_port_num]){
                case '0':
                    //falling
                    out_time = time + get<1>(Delay[in_out_name][input_rise_or_fall]);
                    break;
                case '1':
                    break;
                case 'x':
                    cout << "1 to x" << endl;
                    break;
                case 'z':
                    cout << "1 to z" << endl;
                    break;
                default:
                    cout << "Error: Computed undesirable output value" << endl;
                    break;
            }
            break;
        case 'x':
            cout << "x to ?" << endl;
            break;
        case 'z':
            cout << "z to ?" << endl;
            break;
        default:
            cout << "Error output undesirable value" << endl;
            break;
    }

    return tuple<float, string>(out_time, output_value);
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