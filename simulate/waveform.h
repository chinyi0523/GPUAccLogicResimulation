#ifndef WAVEFORM_H
#define WAVEFORM_H

#include <vector>
#include <string>
#include <unordered_set>
#include <map>

using namespace std;

class waveformElem
{
public:
   waveformElem() {}
   waveformElem(int bit, const string& id, const string& name): _bit(bit), _id(id), _name(name) {}
   int getBit() {return _bit;}
   string getId() {return _id;}
   string getName() {return _name;}
   vector< tuple<unsigned long long int,string>> getTimestamp() {return _timeStamp;}
   void add(const unsigned long long int&, const string&);

private:
   int _bit;
   string _id; 
   string _name;
   vector< tuple<unsigned long long int,string>> _timeStamp;
};

class Waveform
{
public:
   // define constructor & member functions
   bool read(const string&);
   void print(const int&);
   int getSize() {return _waveforms.size();}
   waveformElem getWaveformElem(int index) {return _waveforms[index];}
private:
   vector<waveformElem>       _waveforms;  // Use it to store waveform elements.  
   map<string, map<int, int>> _idToIndex;  // id: bit: index; 
   map<string, map<int, int>> _nameToIndex;       // name: bit: index; 
   map<string, int>           _idToWidth;   
   map<string, vector<string>> _idToEndStart;                 
};

#endif // WAVEFORM_H