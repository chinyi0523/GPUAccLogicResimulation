#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
using namespace std;

    
char udp_xbuf(char i,char c){
    if(c=='1'){
        if(i=='0') return '0';
        else return '1';
    }
    return '0';
}
char and2(char a,char b){
    int out = (int(a)-48)&&(int(b)-48);
    return char(out+48);
}
char or3(char a,char b,char c){
    int out = (int(a)-48)||(int(b)-48)||(int(c)-48);
    return char(out+48);
}
char xor3(char a,char b,char c){
    int out = (int(a)-48)^(int(b)-48)^(int(c)-48);
    return char(out+48);
}
/*
vector<char> GEN_FA_D1(char a,char b,char ci){
    char s;
    char co;
    char net0, net1, net2; 
    s = xor3(a,b,ci);
    net0 = and2(a,b);
    net1 = and2(a,ci);
    net2 = and2(b,ci);
    co = or3(net0,net1,net2);

    vector<char> ans;
    ans.push_back( s );
    ans.push_back( co );
    return ans;
}*/
vector<char> GEN_FA_D1(char a,char b,char ci){
    char s;
    char co;
    char net0, net1, net2; 

    s = xor3(a,b,ci);
    net0 = and2(a,b);
    net1 = and2(a,ci);
    net2 = and2(b,ci);
    co = or3(net0,net1,net2);

    vector<char> ans;
    ans.push_back(s);
    ans.push_back(co);
    return ans;
}



int main(){
    vector<char> ans = GEN_FA_D1('1','1','1');
    cout<<ans[0]<<" "<<ans[1]<<endl;
    ans = GEN_FA_D1('0','0','0');
    cout<<ans[0]<<" "<<ans[1]<<endl;
    ans = GEN_FA_D1('0','1','1');
    cout<<ans[0]<<" "<<ans[1]<<endl;
    ans = GEN_FA_D1('1','0','1');
    cout<<ans[0]<<" "<<ans[1]<<endl;
    ans = GEN_FA_D1('1','1','0');
    cout<<ans[0]<<" "<<ans[1]<<endl;
}