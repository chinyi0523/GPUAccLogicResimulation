#include <string>
#include <vector>
#include <map>
#include <unordered_set> 
using namespace std;
class Gate;
typedef map<string,tuple<string,string,Gate*>> GateList;
typedef vector<tuple<unsigned long long int,string>> TimeStamp;
class Gate{
public:
    Gate();
    Gate(string _n,string _t,unsigned _l,unsigned _g) : _name(_n),_type(_t),_level(_l),_group(_g){};
    string getName() const {return _name;}
    string getType() const {return _type;}
    unsigned getLevel() const {return _level;}
    unsigned getGroup() const {return _group;}
    GateList getFin() const {return _fin;}
    GateList getFout() const {return _fout;}
    TimeStamp getTimeStamp() const {return _timeStamp;}
    void add_fin(string inp_gate,tuple<string,string,Gate*> fin){ _fin[inp_gate] = fin; }
    void add_fout(string oup_gate,tuple<string,string,Gate*> fout){ _fout[oup_gate] = fout; }
    void set_timeStamp(TimeStamp ts){ _timeStamp = ts; }
    void printGateInfo(){
        cout<<"_______________________\n";
        cout<<"** Current Gate Info **\n";
        cout<<"Name : "<<this->_name<<"\n";
        cout<<"Type : "<<this->_type<<"\n";
        cout<<"Level: "<<this->_level<<"\n";
        cout<<"Group: "<<this->_group<<"\n";
        cout<<"F-IN : \n";
        map<string,tuple<string,string,Gate*>>::iterator iter;
        for(iter=_fin.begin();iter!=_fin.end();iter++){
            if(get<0>(iter->second)=="CONST0"||get<0>(iter->second)=="CONST1"){
               cout<<"     ."<<iter->first<<"("<<get<0>(iter->second)<<")\n"; 
            }
            else {
                cout<<"     ."<<iter->first<<"("<<(get<2>(iter->second))->getName()<<": "<<get<0>(iter->second)<<")\n";
            }
        }
        cout<<"F-OUT: \n";
        for(iter=_fout.begin();iter!=_fout.end();iter++){
            cout<<"     ."<<get<1>(iter->second)<<"("<<(get<2>(iter->second))->getName()<<": "<<get<0>(iter->second)<<")\n";
        }
        cout<<"_______________________\n";
    }
private:
    string _name;
    string _type;
    unsigned _level;
    unsigned _group;
    GateList _fin;
    GateList _fout;
    TimeStamp _timeStamp;
};