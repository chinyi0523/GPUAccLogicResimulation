#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
#include "waveform.h"

using namespace std;
// int NEG_INF = -2147483648l;
// int POS_INF = 2147483647;

//general function
vector<string> split(const string& s, char delimiter)
{
   std::vector<std::string> tokens;
   std::string token;
   std::istringstream tokenStream(s);
   while (std::getline(tokenStream, token, delimiter))
   {
      tokens.push_back(token);
   }
   return tokens;
}

vector<string> maxMin(vector<string> endStart)
{
    string tmp;
    if(stoi(endStart[0]) < stoi(endStart[1])){
        tmp = endStart[0];
        endStart[0] = endStart[1];
        endStart[1] = tmp;
    }
    return endStart;
}

// WaveformElem class function
void
waveformElem::add(const unsigned long long int& time, const string& value)
{
    _timeStamp.push_back( tuple<unsigned long long int,string>(time, value));
}

//Waveform class function
bool
Waveform::read(const string& vcdFile)
{
	fstream file;
	file.open(vcdFile, fstream::in);
	if(!file.is_open()) return false;
	else
	{
		cout << "Open file successfully" << endl;
        string line;
        //bool flag = 0;
        bool valueChangeFlag = 0;
        int index = 0;
        unsigned long long int timeStamp = 0;
        unsigned long long int cnt = 0;
        //unsigned long long int tmp_cnt = 0;

		while(getline(file, line))
		{
			//if(cnt % 10000 == 0) cout << "processed " << cnt << endl;
            cnt++;
            vector<string> tokens = split(line, ' ');
            
            //vcd define variables section
            if(tokens[0] == "$var"){
                int width = stoi(tokens[2]);
                string id = tokens[3];
                string name = tokens[4];
                int bit;
                vector<string> endStart;
                if(tokens.size() == 7) {
                    endStart = maxMin(split(tokens[5].substr(1, tokens[5].size() - 2), ':'));
                        
                    for(int j = stoi(endStart[1]); j <= stoi(endStart[0]); j++){
                        bit = j;
                        waveformElem signal(bit, id, name);
                        _waveforms.push_back(signal);
                        _idToIndex[id][bit] = index;
                        _nameToIndex[name][bit] = index;
                        index ++;
                    }
                }else if(tokens.size() == 6) {
                    endStart.push_back("0"); endStart.push_back("0");
                    bit = 0;
                    waveformElem signal(bit, id, name);
                    _waveforms.push_back(signal);
                    _idToIndex[id][bit] = index;
                    _nameToIndex[name][bit] = index;
                    index ++;
                }else {cout << "Strange tokens size" << endl;}
                _idToWidth[id] = width;
                _idToEndStart[id] = endStart;
                //tmp_cnt += width;
                //cout << "definition "<< id << " " << tmp_cnt << " " << _waveforms.size() << endl;
                //cout << "End definition" << endl;
                continue;
            }
            
            
            string newValue;
            string id;
            int width;
            //vcd initialize variables section
            // if((line == "$dumpvars") || (flag == 1)){
            //     if(line == "$dumpvars") flag=1;
            //     else if(line == "$end") {flag=0; continue;}

            //     if(tokens.size() == 1){
            //         newValue = tokens[0][0];
            //         id = tokens[0].substr(1); 
            //     }else{
            //         newValue = tokens[0];
            //         id = tokens[1]; 
            //     }
            //     int eleIndex = _idToIndex[id];
            //     _waveforms[eleIndex].add(NEG_INF, newValue);
            //     //cout << "End initialization" << endl;
            //     continue;
            // }
            

            //vcd value change section	
            if(line[0] == '#'){
                timeStamp = stoull(line.substr(1));
                valueChangeFlag = 1;
                //cout << "End get time" << endl;
                continue;
            }
            if(valueChangeFlag == 1){
                if(tokens.size() == 1){
                    //cout << "update value single bit" << endl;
                    newValue = tokens[0][0];
                    id = tokens[0].substr(1); 
                    int eleIndex = _idToIndex[id][0];
                    _waveforms[eleIndex].add(timeStamp, newValue);
                }else{
                    //cout << "update value multiple bits" << endl;
                    id = tokens[1]; 
                    width = _idToWidth[id];
                    for(int j = stoi(_idToEndStart[id][1]); j <= stoi(_idToEndStart[id][0]); j++){
                        if(tokens[0] == "b0") newValue = "0";
                        else if(tokens[0] == "bx") newValue = "x";
                        else if(tokens[0] == "bz") newValue = "z";
                        else if(j > tokens[0].length()) newValue = "0";
                        else newValue = tokens[0][1+j];
                        int eleIndex = _idToIndex[id][j];
                        _waveforms[eleIndex].add(timeStamp, newValue);
                    }
                }
                //cout << "End update value" << endl;
            }
		}
	}
	file.close();
	return true;
}

void
Waveform::print(const int& index)
{
    fstream file;
    file.open("output.txt", fstream::out);
    file << "bit: " << _waveforms[index].getBit() << "\tid: " << _waveforms[index].getId() << "\tname: " << _waveforms[index].getName() << endl;

    vector< tuple<unsigned long long int,string>> timeStamp =  _waveforms[index].getTimestamp();
    for(const auto &i : timeStamp) cout << get<0>(i) << "  " << get<1>(i) << endl;

    file.close();
}