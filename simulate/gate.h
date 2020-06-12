#include <string>
#include <vector>
#include <unordered_set> 
using namespace std;
class Gate;
typedef vector<pair<string,Gate>> GateList;
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
    void set_fin(GateList fin){ _fin = fin; }
    void set_fout(GateList fout){ _fout = fout; }
    void set_timeStamp(TimeStamp ts){ _timeStamp = ts; }
private:
    string _name;
    string _type;
    unsigned _level;
    unsigned _group;
    GateList _fin;
    GateList _fout;
    TimeStamp _timeStamp;
};