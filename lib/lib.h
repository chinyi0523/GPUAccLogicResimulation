#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <bitset>
using namespace std;
char not1(char a){
    if(a=='x'||a=='z') return 'x';
    else if(a=='1') return '0';
    else if(a=='0') return '1';
    else {
        cerr<<"ERROR IN NOT1"<<endl;
        return '0';
    }
}
char and2(char a,char b){
    if(a=='0'||b=='0') return '0' ;
    else if(a=='x'||b=='x'||a=='z'||b=='z') return 'x';
    else return '1';
}
char and3(char a,char b,char c){
    if(a=='0'||b=='0'||c=='0') return '0' ;
    else if(a=='x'||b=='x'||c=='x'||a=='z'||b=='z'||c=='z') return 'x';
    else return '1';
}
char and4(char a,char b,char c,char d){
    if(a=='0'||b=='0'||c=='0'||d=='0') return '0' ;
    else if(a=='x'||b=='x'||c=='x'||d=='x'||a=='z'||b=='z'||c=='z'||d=='z') return 'x';
    else return '1';
}
char or2(char a,char b){
    if(a=='1'||b=='1') return '1' ;
    else if(a=='x'||b=='x'||a=='z'||b=='z') return 'x';
    else return '0';
}
char or3(char a,char b,char c){
    if(a=='1'||b=='1'||c=='1') return '1' ;
    else if(a=='x'||b=='x'||c=='x'||a=='z'||b=='z'||c=='z') return 'x';
    else return '0';
}
char or4(char a,char b,char c,char d){
    if(a=='1'||b=='1'||c=='1'||d=='1') return '1' ;
    else if(a=='x'||b=='x'||c=='x'||d=='x'||a=='z'||b=='z'||c=='z'||d=='z') return 'x';
    else return '0';
}
char xor2(char a,char b){
    if(a=='x'||b=='x'||a=='z'||b=='z') return 'x';
    else if (a!=b) return'1';
    else return '0';
}    
char xor3(char a,char b,char c){
    if(a=='x'||b=='x'||c=='x'||a=='z'||b=='z'||c=='z') return 'x';
    else if((int(a)+int(b)+int(c))%2==1) return '1';
    else return '0';
}
char nor2(char a,char b){
    if(a=='1'||b=='1') return '0' ;
    else if(a=='x'||b=='x'||a=='z'||b=='z') return 'x';
    else return '1';
}
char nor3(char a,char b,char c){
    if(a=='1'||b=='1'||c=='1') return '0' ;
    else if(a=='x'||b=='x'||c=='x'||a=='z'||b=='z'||c=='z') return 'x';
    else return '1';
}
char nor4(char a,char b,char c,char d){
    if(a=='1'||b=='1'||c=='1'||d=='1') return '0' ;
    else if(a=='x'||b=='x'||c=='x'||d=='x'||a=='z'||b=='z'||c=='z'||d=='z') return 'x';
    else return '1';
}
char nand2(char a,char b){
    if(a=='0'||b=='0') return '1' ;
    else if(a=='x'||b=='x'||a=='z'||b=='z') return 'x';
    else return '0';
}
char nand3(char a,char b,char c){
    if(a=='0'||b=='0'||c=='0') return '1' ;
    else if(a=='x'||b=='x'||c=='x'||a=='z'||b=='z'||c=='z') return 'x';
    else return '0';
}
char nand4(char a,char b,char c,char d){
    if(a=='0'||b=='0'||c=='0'||d=='0') return '1' ;
    else if(a=='x'||b=='x'||c=='x'||d=='x'||a=='z'||b=='z'||c=='z'||d=='z') return 'x';
    else return '0';
}
char xnor2(char a,char b){
    if(a=='x'||b=='x'||a=='z'||b=='z') return 'x';
    else if(a==b) return '1';
    else return '0';
}
char xnor3(char a,char b,char c){
    if(a=='x'||b=='x'||c=='x'||a=='z'||b=='z'||c=='z') return 'x';
    else if((int(a)+int(b)+int(c))%2==0) return '1';
    else return '0';
}
char buf1(char a){
    return a;
}
char udp_tlat(char d,char e,char cdn,char sdn,char notifier){
    return '0';
}
char udp_dff(char d,char cp,char cdn,char sdn,char notifier){ 
    return '0';
}
char udp_mux2(char a,char b,char sel){
    if(sel=='x'){
        if(a==b) return a;
        else return 'x';
    }
    else if(sel=='0'){
        if(a=='1'||a=='0') return a;
        else return 'x';
    }
    else if(sel=='1'){
        if(b=='1'||b=='0') return b;
        else return 'x';
    }
    else return 'x';
}
char udp_xbuf(char i,char check){
    if(check=='1'){
        if(i=='1'||i=='x') return '1';
        else if(i=='0') return '0';
        else return 'x';
    }
    else return 'x';
}
vector<char> GEN_AND2_D1(char a1,char a2){
    // output 
    char z;
    z = and2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND2_D2(char a1,char a2){
    // output 
    char z;
    z = and2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND2_D4(char a1,char a2){
    // output 
    char z;
    z = and2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND2_D8(char a1,char a2){
    // output 
    char z;
    z = and2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND3_D1(char a1,char a2,char a3){
    // output 
    char z;
    z = and3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND3_D2(char a1,char a2,char a3){
    // output 
    char z;
    z = and3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND3_D4(char a1,char a2,char a3){
    // output 
    char z;
    z = and3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND3_D8(char a1,char a2,char a3){
    // output 
    char z;
    z = and3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND4_D1(char a1,char a2,char a3,char a4){
    // output 
    char z;
    z = and4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND4_D2(char a1,char a2,char a3,char a4){
    // output 
    char z;
    z = and4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND4_D4(char a1,char a2,char a3,char a4){
    // output 
    char z;
    z = and4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND4_D8(char a1,char a2,char a3,char a4){
    // output 
    char z;
    z = and4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO211_D1(char a1,char a2,char b,char c){
    // output 
    char z;
    // wire 
    char net0; 

    net0 = and2(a1,a2);
    z = or3(net0,b,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO211_D2(char a1,char a2,char b,char c){
    // output 
    char z;
    // wire 
    char net0; 

    net0 = and2(a1,a2);
    z = or3(net0,b,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO211_D4(char a1,char a2,char b,char c){
    // output 
    char z;
    // wire 
    char net0; 

    net0 = and2(a1,a2);
    z = or3(net0,b,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO21_D1(char a1,char a2,char b){
    // output 
    char z;
    // wire 
    char net0;

    net0 = and2(a1,a2);
    z = or2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO21_D2(char a1,char a2,char b){
    // output 
    char z;
    // wire 
    char net0;

    net0 = and2(a1,a2);
    z = or2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO21_D4(char a1,char a2,char b){
    // output 
    char z;
    // wire 
    char net0;

    net0 = and2(a1,a2);
    z = or2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO221_D1(char a1,char a2,char b1,char b2,char c){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = and2(a1,a2);
    net1 = and2(b1,b2);
    z = or3(net0,net1,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO221_D2(char a1,char a2,char b1,char b2,char c){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = and2(a1,a2);
    net1 = and2(b1,b2);
    z = or3(net0,net1,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO221_D4(char a1,char a2,char b1,char b2,char c){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = and2(a1,a2);
    net1 = and2(b1,b2);
    z = or3(net0,net1,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO222_D1(char a1,char a2,char b1,char b2,char c1,char c2){
    // output 
    char z;
    // wire 
    char net0, net1, net2; 

    net0 = and2(c1,c2);
    net1 = and2(a1,a2);
    net2 = and2(b1,b2);
    z = or3(net0,net1,net2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO222_D2(char a1,char a2,char b1,char b2,char c1,char c2){
    // output 
    char z;
    // wire 
    char net0, net1, net2; 

    net0 = and2(c1,c2);
    net1 = and2(a1,a2);
    net2 = and2(b1,b2);
    z = or3(net0,net1,net2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO222_D4(char a1,char a2,char b1,char b2,char c1,char c2){
    // output 
    char z;
    // wire 
    char net0, net1, net2; 

    net0 = and2(c1,c2);
    net1 = and2(a1,a2);
    net2 = and2(b1,b2);
    z = or3(net0,net1,net2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO22_D1(char a1,char a2,char b1,char b2){
    // output 
    char z;
    // wire 
    char net0, net1;

    net0 = and2(b1,b2);
    net1 = and2(a1,a2);
    z = or2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO22_D2(char a1,char a2,char b1,char b2){
    // output 
    char z;
    // wire 
    char net0, net1;

    net0 = and2(b1,b2);
    net1 = and2(a1,a2);
    z = or2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO22_D4(char a1,char a2,char b1,char b2){
    // output 
    char z;
    // wire 
    char net0, net1;

    net0 = and2(b1,b2);
    net1 = and2(a1,a2);
    z = or2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO22_D8(char a1,char a2,char b1,char b2){
    // output 
    char z;
    // wire 
    char net0, net1;

    net0 = and2(b1,b2);
    net1 = and2(a1,a2);
    z = or2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO31_D1(char a1,char a2,char a3,char b){
    // output 
    char z;
    // wire 
    char net0; 

    net0 = and3(a1,a2,a3);
    z = or2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO31_D2(char a1,char a2,char a3,char b){
    // output 
    char z;
    // wire 
    char net0; 

    net0 = and3(a1,a2,a3);
    z = or2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO31_D4(char a1,char a2,char a3,char b){
    // output 
    char z;
    // wire 
    char net0; 

    net0 = and3(a1,a2,a3);
    z = or2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO32_D1(char a1,char a2,char a3,char b1,char b2){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = and2(b1,b2);
    net1 = and3(a1,a2,a3);
    z = or2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO32_D2(char a1,char a2,char a3,char b1,char b2){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = and2(b1,b2);
    net1 = and3(a1,a2,a3);
    z = or2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO32_D4(char a1,char a2,char a3,char b1,char b2){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = and2(b1,b2);
    net1 = and3(a1,a2,a3);
    z = or2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO33_D1(char a1,char a2,char a3,char b1,char b2,char b3){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = and3(b1,b2,b3);
    net1 = and3(a1,a2,a3);
    z = or2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO33_D2(char a1,char a2,char a3,char b1,char b2,char b3){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = and3(b1,b2,b3);
    net1 = and3(a1,a2,a3);
    z = or2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO33_D4(char a1,char a2,char a3,char b1,char b2,char b3){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = and3(b1,b2,b3);
    net1 = and3(a1,a2,a3);
    z = or2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AOI211_D1(char a1,char a2,char b,char c){
    // output 
    char zn;
    // wire 
    char net0, net1; 

    net0 = and2(a1,a2);
    net1 = or3(net0,b,c);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI211_D2(char a1,char a2,char b,char c){
    // output 
    char zn;
    // wire 
    char net0, net1; 

    net0 = and2(a1,a2);
    net1 = or3(net0,b,c);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI211_D4(char a1,char a2,char b,char c){
    // output 
    char zn;
    // wire 
    char net0, net1; 

    net0 = and2(a1,a2);
    net1 = or3(net0,b,c);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI21_D1(char a1,char a2,char b){
    // output 
    char zn;
    // wire 
    char net0, net1;

    net0 = and2(a1,a2);
    net1 = or2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI21_D2(char a1,char a2,char b){
    // output 
    char zn;
    // wire 
    char net0, net1;

    net0 = and2(a1,a2);
    net1 = or2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI21_D4(char a1,char a2,char b){
    // output 
    char zn;
    // wire 
    char net0, net1;

    net0 = and2(a1,a2);
    net1 = or2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI221_D1(char a1,char a2,char b1,char b2,char c){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = and2(a1,a2);
    net1 = and2(b1,b2);
    net2 = or3(net0,net1,c);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI221_D2(char a1,char a2,char b1,char b2,char c){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = and2(a1,a2);
    net1 = and2(b1,b2);
    net2 = or3(net0,net1,c);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI221_D4(char a1,char a2,char b1,char b2,char c){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = and2(a1,a2);
    net1 = and2(b1,b2);
    net2 = or3(net0,net1,c);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI222_D1(char a1,char a2,char b1,char b2,char c1,char c2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2, net3; 

    net0 = and2(c1,c2);
    net1 = and2(a1,a2);
    net2 = and2(b1,b2);
    net3 = or3(net0,net1,net2);
    zn = not1(net3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI222_D2(char a1,char a2,char b1,char b2,char c1,char c2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2, net3; 

    net0 = and2(c1,c2);
    net1 = and2(a1,a2);
    net2 = and2(b1,b2);
    net3 = or3(net0,net1,net2);
    zn = not1(net3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI222_D4(char a1,char a2,char b1,char b2,char c1,char c2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2, net3; 

    net0 = and2(c1,c2);
    net1 = and2(a1,a2);
    net2 = and2(b1,b2);
    net3 = or3(net0,net1,net2);
    zn = not1(net3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI22_D1(char a1,char a2,char b1,char b2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = and2(a1,a2);
    net1 = and2(b1,b2);
    net2 = or2(net0,net1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI22_D2(char a1,char a2,char b1,char b2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = and2(a1,a2);
    net1 = and2(b1,b2);
    net2 = or2(net0,net1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI22_D4(char a1,char a2,char b1,char b2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = and2(a1,a2);
    net1 = and2(b1,b2);
    net2 = or2(net0,net1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI31_D1(char a1,char a2,char a3,char b){
    // output 
    char zn;
    // wire 
    char net0, net1;

    net0 = and3(a1,a2,a3);
    net1 = or2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI31_D2(char a1,char a2,char a3,char b){
    // output 
    char zn;
    // wire 
    char net0, net1;

    net0 = and3(a1,a2,a3);
    net1 = or2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI31_D4(char a1,char a2,char a3,char b){
    // output 
    char zn;
    // wire 
    char net0, net1;

    net0 = and3(a1,a2,a3);
    net1 = or2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI32_D1(char a1,char a2,char a3,char b1,char b2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = and3(a1,a2,a3);
    net1 = and2(b1,b2);
    net2 = or2(net0,net1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI32_D2(char a1,char a2,char a3,char b1,char b2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = and3(a1,a2,a3);
    net1 = and2(b1,b2);
    net2 = or2(net0,net1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI32_D4(char a1,char a2,char a3,char b1,char b2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = and3(a1,a2,a3);
    net1 = and2(b1,b2);
    net2 = or2(net0,net1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI33_D1(char a1,char a2,char a3,char b1,char b2,char b3){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = and3(a1,a2,a3);
    net1 = and3(b1,b2,b3);
    net2 = or2(net0,net1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI33_D2(char a1,char a2,char a3,char b1,char b2,char b3){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = and3(a1,a2,a3);
    net1 = and3(b1,b2,b3);
    net2 = or2(net0,net1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI33_D4(char a1,char a2,char a3,char b1,char b2,char b3){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = and3(a1,a2,a3);
    net1 = and3(b1,b2,b3);
    net2 = or2(net0,net1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_BUF_D1(char i){
    // output 
    char z;
    z = buf1(i);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_BUF_D2(char i){
    // output 
    char z;
    z = buf1(i);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_BUF_D4(char i){
    // output 
    char z;
    z = buf1(i);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_BUF_D8(char i){
    // output 
    char z;
    z = buf1(i);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_FA_D1(char a,char b,char ci){
    // output 
    char s;
    // output 
    char co;
    // wire 
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
vector<char> GEN_FA_D2(char a,char b,char ci){
    // output 
    char s;
    // output 
    char co;
    // wire 
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
vector<char> GEN_FA_D4(char a,char b,char ci){
    // output 
    char s;
    // output 
    char co;
    // wire 
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
vector<char> GEN_HA_D1(char a,char b){
    // output 
    char s;
    // output 
    char co;
    s = xor2(a,b);
    co = and2(a,b);

    vector<char> ans;
    ans.push_back(s);
    ans.push_back(co);
    return ans;
}
vector<char> GEN_HA_D2(char a,char b){
    // output 
    char s;
    // output 
    char co;
    s = xor2(a,b);
    co = and2(a,b);

    vector<char> ans;
    ans.push_back(s);
    ans.push_back(co);
    return ans;
}
vector<char> GEN_HA_D4(char a,char b){
    // output 
    char s;
    // output 
    char co;
    s = xor2(a,b);
    co = and2(a,b);

    vector<char> ans;
    ans.push_back(s);
    ans.push_back(co);
    return ans;
}
vector<char> GEN_INV_D1(char i){
    // output 
    char zn;
    zn = not1(i);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_INV_D2(char i){
    // output 
    char zn;
    zn = not1(i);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_INV_D4(char i){
    // output 
    char zn;
    zn = not1(i);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_INV_D8(char i){
    // output 
    char zn;
    zn = not1(i);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MAJORITYAOI222_D1(char a,char b,char c){
    // output 
    char zn;
    // wire 
    char net0, net1, net2, net3; 

    net0 = and2(a,b);
    net1 = and2(b,c);
    net2 = and2(c,a);
    net3 = or3(net0,net1,net2);
    zn = not1(net3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MAJORITYAOI222_D2(char a,char b,char c){
    // output 
    char zn;
    // wire 
    char net0, net1, net2, net3; 

    net0 = and2(a,b);
    net1 = and2(b,c);
    net2 = and2(c,a);
    net3 = or3(net0,net1,net2);
    zn = not1(net3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MAJORITYAOI222_D4(char a,char b,char c){
    // output 
    char zn;
    // wire 
    char net0, net1, net2, net3; 

    net0 = and2(a,b);
    net1 = and2(b,c);
    net2 = and2(c,a);
    net3 = or3(net0,net1,net2);
    zn = not1(net3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MAJORITYAOI22_D1(char a1,char a2,char b1,char b2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = and2(a1,a2);
    net1 = not1(net0);
    net2 = or2(b1,b2);
    zn = and2(net1,net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MAJORITYAOI22_D2(char a1,char a2,char b1,char b2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = and2(a1,a2);
    net1 = not1(net0);
    net2 = or2(b1,b2);
    zn = and2(net1,net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MAJORITYAOI22_D4(char a1,char a2,char b1,char b2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = and2(a1,a2);
    net1 = not1(net0);
    net2 = or2(b1,b2);
    zn = and2(net1,net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MAJORITYOAI22_D1(char a1,char a2,char b1,char b2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = or2(a1,a2);
    net1 = not1(net0);
    net2 = and2(b1,b2);
    zn = or2(net1,net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MAJORITYOAI22_D2(char a1,char a2,char b1,char b2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = or2(a1,a2);
    net1 = not1(net0);
    net2 = and2(b1,b2);
    zn = or2(net1,net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MAJORITYOAI22_D4(char a1,char a2,char b1,char b2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = or2(a1,a2);
    net1 = not1(net0);
    net2 = and2(b1,b2);
    zn = or2(net1,net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_LATCH_D1(char d,char e){
    // output 
    char q;
    // reg 
    char notifier;

    // supply1 
    char cdn = '1';
    // supply1 
    char sdn = '1';
    q = udp_tlat(d,e,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_LATCH_D2(char d,char e){
    // output 
    char q;
    // reg 
    char notifier;

    // supply1 
    char cdn = '1';
    // supply1 
    char sdn = '1';
    q = udp_tlat(d,e,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_LATCH_D4(char d,char e){
    // output 
    char q;
    // reg 
    char notifier;

    // supply1 
    char cdn = '1';
    // supply1 
    char sdn = '1';
    q = udp_tlat(d,e,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_DFCLR_D1(char d,char cp,char cdn){
    // output 
    char q;
    // reg 
    char notifier;

    // supply1 
    char sdn = '1';
    q = udp_dff(d,cp,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_DFCLR_D2(char d,char cp,char cdn){
    // output 
    char q;
    // reg 
    char notifier;

    // supply1 
    char sdn = '1';
    q = udp_dff(d,cp,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_DFCLR_D4(char d,char cp,char cdn){
    // output 
    char q;
    // reg 
    char notifier;

    // supply1 
    char sdn = '1';
    q = udp_dff(d,cp,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_DFCLR_D8(char d,char cp,char cdn){
    // output 
    char q;
    // reg 
    char notifier;

    // supply1 
    char sdn = '1';
    q = udp_dff(d,cp,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_DF_D1(char d,char cp){
    // output 
    char q;
    // reg 
    char notifier;

    // supply1 
    char cdn = '1';
    // supply1 
    char sdn = '1';
    q = udp_dff(d,cp,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_DF_D2(char d,char cp){
    // output 
    char q;
    // reg 
    char notifier;

    // supply1 
    char cdn = '1';
    // supply1 
    char sdn = '1';
    q = udp_dff(d,cp,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_DF_D4(char d,char cp){
    // output 
    char q;
    // reg 
    char notifier;

    // supply1 
    char cdn = '1';
    // supply1 
    char sdn = '1';
    q = udp_dff(d,cp,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_DF_D8(char d,char cp){
    // output 
    char q;
    // reg 
    char notifier;

    // supply1 
    char cdn = '1';
    // supply1 
    char sdn = '1';
    q = udp_dff(d,cp,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_DFSET_D1(char d,char cp,char sdn){
    // output 
    char q;
    // reg 
    char notifier;

    // supply1 
    char cdn = '1';
    q = udp_dff(d,cp,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_MUX2_D2(char i0,char i1,char s){
    // output 
    char z;
    z = udp_mux2(i0,i1,s);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_MUX2_D4(char i0,char i1,char s){
    // output 
    char z;
    z = udp_mux2(i0,i1,s);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_MUX2N_D1(char i0,char i1,char s){
    // output 
    char zn;
    // wire 
    char z; 

    z = udp_mux2(i0,i1,s);
    zn = not1(z);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MUX2N_D2(char i0,char i1,char s){
    // output 
    char zn;
    // wire 
    char z; 

    z = udp_mux2(i0,i1,s);
    zn = not1(z);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MUX2N_D4(char i0,char i1,char s){
    // output 
    char zn;
    // wire 
    char z; 

    z = udp_mux2(i0,i1,s);
    zn = not1(z);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MUX3_D1(char i0,char i1,char i2,char s0,char s1){
    // output 
    char z;
    // wire 
    char net0; 

    net0 = udp_mux2(i0,i1,s0);
    z = udp_mux2(net0,i2,s1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_MUX3_D2(char i0,char i1,char i2,char s0,char s1){
    // output 
    char z;
    // wire 
    char net0; 

    net0 = udp_mux2(i0,i1,s0);
    z = udp_mux2(net0,i2,s1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_MUX3_D4(char i0,char i1,char i2,char s0,char s1){
    // output 
    char z;
    // wire 
    char net0; 

    net0 = udp_mux2(i0,i1,s0);
    z = udp_mux2(net0,i2,s1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_MUX3N_D1(char i0,char i1,char i2,char s0,char s1){
    // output 
    char zn;
    // wire 
    char net0, net1; 

    net0 = udp_mux2(i0,i1,s0);
    net1 = udp_mux2(net0,i2,s1);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MUX3N_D2(char i0,char i1,char i2,char s0,char s1){
    // output 
    char zn;
    // wire 
    char net0, net1; 

    net0 = udp_mux2(i0,i1,s0);
    net1 = udp_mux2(net0,i2,s1);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MUX3N_D4(char i0,char i1,char i2,char s0,char s1){
    // output 
    char zn;
    // wire 
    char net0, net1; 

    net0 = udp_mux2(i0,i1,s0);
    net1 = udp_mux2(net0,i2,s1);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MUX4_D1(char i0,char i1,char i2,char i3,char s0,char s1){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = udp_mux2(i2,i3,s0);
    net1 = udp_mux2(i0,i1,s0);
    z = udp_mux2(net1,net0,s1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_MUX4_D2(char i0,char i1,char i2,char i3,char s0,char s1){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = udp_mux2(i2,i3,s0);
    net1 = udp_mux2(i0,i1,s0);
    z = udp_mux2(net1,net0,s1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_MUX4_D4(char i0,char i1,char i2,char i3,char s0,char s1){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = udp_mux2(i2,i3,s0);
    net1 = udp_mux2(i0,i1,s0);
    z = udp_mux2(net1,net0,s1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_MUX4N_D1(char i0,char i1,char i2,char i3,char s0,char s1){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = udp_mux2(i2,i3,s0);
    net1 = udp_mux2(i0,i1,s0);
    net2 = udp_mux2(net1,net0,s1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MUX4N_D2(char i0,char i1,char i2,char i3,char s0,char s1){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = udp_mux2(i2,i3,s0);
    net1 = udp_mux2(i0,i1,s0);
    net2 = udp_mux2(net1,net0,s1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MUX4N_D4(char i0,char i1,char i2,char i3,char s0,char s1){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = udp_mux2(i2,i3,s0);
    net1 = udp_mux2(i0,i1,s0);
    net2 = udp_mux2(net1,net0,s1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND2_D1(char a1,char a2){
    // output 
    char zn;
    zn = nand2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND2_D2(char a1,char a2){
    // output 
    char zn;
    zn = nand2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND2_D4(char a1,char a2){
    // output 
    char zn;
    zn = nand2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND2_D8(char a1,char a2){
    // output 
    char zn;
    zn = nand2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND3_D1(char a1,char a2,char a3){
    // output 
    char zn;
    zn = nand3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND3_D2(char a1,char a2,char a3){
    // output 
    char zn;
    zn = nand3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND3_D4(char a1,char a2,char a3){
    // output 
    char zn;
    zn = nand3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND3_D8(char a1,char a2,char a3){
    // output 
    char zn;
    zn = nand3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND4_D1(char a1,char a2,char a3,char a4){
    // output 
    char zn;
    zn = nand4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND4_D2(char a1,char a2,char a3,char a4){
    // output 
    char zn;
    zn = nand4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND4_D4(char a1,char a2,char a3,char a4){
    // output 
    char zn;
    zn = nand4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND4_D8(char a1,char a2,char a3,char a4){
    // output 
    char zn;
    zn = nand4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR2_D1(char a1,char a2){
    // output 
    char zn;
    zn = nor2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR2_D2(char a1,char a2){
    // output 
    char zn;
    zn = nor2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR2_D4(char a1,char a2){
    // output 
    char zn;
    zn = nor2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR2_D8(char a1,char a2){
    // output 
    char zn;
    zn = nor2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR3_D1(char a1,char a2,char a3){
    // output 
    char zn;
    zn = nor3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR3_D2(char a1,char a2,char a3){
    // output 
    char zn;
    zn = nor3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR3_D4(char a1,char a2,char a3){
    // output 
    char zn;
    zn = nor3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR3_D8(char a1,char a2,char a3){
    // output 
    char zn;
    zn = nor3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR4_D1(char a1,char a2,char a3,char a4){
    // output 
    char zn;
    zn = nor4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR4_D2(char a1,char a2,char a3,char a4){
    // output 
    char zn;
    zn = nor4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR4_D4(char a1,char a2,char a3,char a4){
    // output 
    char zn;
    zn = nor4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR4_D8(char a1,char a2,char a3,char a4){
    // output 
    char zn;
    zn = nor4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OA211_D1(char a1,char a2,char b,char c){
    // output 
    char z;
    // wire 
    char net0; 

    net0 = or2(a1,a2);
    z = and3(net0,b,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA211_D2(char a1,char a2,char b,char c){
    // output 
    char z;
    // wire 
    char net0; 

    net0 = or2(a1,a2);
    z = and3(net0,b,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA211_D4(char a1,char a2,char b,char c){
    // output 
    char z;
    // wire 
    char net0; 

    net0 = or2(a1,a2);
    z = and3(net0,b,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA21_D1(char a1,char a2,char b){
    // output 
    char z;
    // wire 
    char net0; 

    net0 = or2(a1,a2);
    z = and2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA21_D2(char a1,char a2,char b){
    // output 
    char z;
    // wire 
    char net0; 

    net0 = or2(a1,a2);
    z = and2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA21_D4(char a1,char a2,char b){
    // output 
    char z;
    // wire 
    char net0; 

    net0 = or2(a1,a2);
    z = and2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA221_D1(char a1,char a2,char b1,char b2,char c){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = or2(b1,b2);
    net1 = or2(a1,a2);
    z = and3(net0,net1,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA221_D2(char a1,char a2,char b1,char b2,char c){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = or2(b1,b2);
    net1 = or2(a1,a2);
    z = and3(net0,net1,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA221_D4(char a1,char a2,char b1,char b2,char c){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = or2(b1,b2);
    net1 = or2(a1,a2);
    z = and3(net0,net1,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA222_D1(char a1,char a2,char b1,char b2,char c1,char c2){
    // output 
    char z;
    // wire 
    char net0, net1, net2; 

    net0 = or2(a1,a2);
    net1 = or2(c1,c2);
    net2 = or2(b1,b2);
    z = and3(net0,net1,net2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA222_D2(char a1,char a2,char b1,char b2,char c1,char c2){
    // output 
    char z;
    // wire 
    char net0, net1, net2; 

    net0 = or2(a1,a2);
    net1 = or2(c1,c2);
    net2 = or2(b1,b2);
    z = and3(net0,net1,net2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA222_D4(char a1,char a2,char b1,char b2,char c1,char c2){
    // output 
    char z;
    // wire 
    char net0, net1, net2; 

    net0 = or2(a1,a2);
    net1 = or2(c1,c2);
    net2 = or2(b1,b2);
    z = and3(net0,net1,net2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA22_D1(char a1,char a2,char b1,char b2){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = or2(b1,b2);
    net1 = or2(a1,a2);
    z = and2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA22_D2(char a1,char a2,char b1,char b2){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = or2(b1,b2);
    net1 = or2(a1,a2);
    z = and2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA22_D4(char a1,char a2,char b1,char b2){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = or2(b1,b2);
    net1 = or2(a1,a2);
    z = and2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA31_D1(char a1,char a2,char a3,char b){
    // output 
    char z;
    // wire 
    char net0; 

    net0 = or3(a1,a2,a3);
    z = and2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA31_D2(char a1,char a2,char a3,char b){
    // output 
    char z;
    // wire 
    char net0; 

    net0 = or3(a1,a2,a3);
    z = and2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA31_D4(char a1,char a2,char a3,char b){
    // output 
    char z;
    // wire 
    char net0; 

    net0 = or3(a1,a2,a3);
    z = and2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA32_D1(char a1,char a2,char a3,char b1,char b2){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = or2(b1,b2);
    net1 = or3(a1,a2,a3);
    z = and2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA32_D2(char a1,char a2,char a3,char b1,char b2){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = or2(b1,b2);
    net1 = or3(a1,a2,a3);
    z = and2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA32_D4(char a1,char a2,char a3,char b1,char b2){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = or2(b1,b2);
    net1 = or3(a1,a2,a3);
    z = and2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA33_D1(char a1,char a2,char a3,char b1,char b2,char b3){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = or3(b1,b2,b3);
    net1 = or3(a1,a2,a3);
    z = and2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA33_D2(char a1,char a2,char a3,char b1,char b2,char b3){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = or3(b1,b2,b3);
    net1 = or3(a1,a2,a3);
    z = and2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA33_D4(char a1,char a2,char a3,char b1,char b2,char b3){
    // output 
    char z;
    // wire 
    char net0, net1; 

    net0 = or3(b1,b2,b3);
    net1 = or3(a1,a2,a3);
    z = and2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OAI211_D1(char a1,char a2,char b,char c){
    // output 
    char zn;
    // wire 
    char net0, net1; 

    net0 = or2(a1,a2);
    net1 = and3(net0,b,c);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI211_D2(char a1,char a2,char b,char c){
    // output 
    char zn;
    // wire 
    char net0, net1; 

    net0 = or2(a1,a2);
    net1 = and3(net0,b,c);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI211_D4(char a1,char a2,char b,char c){
    // output 
    char zn;
    // wire 
    char net0, net1; 

    net0 = or2(a1,a2);
    net1 = and3(net0,b,c);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI21_D1(char a1,char a2,char b){
    // output 
    char zn;
    // wire 
    char net0, net1; 

    net0 = or2(a1,a2);
    net1 = and2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI21_D2(char a1,char a2,char b){
    // output 
    char zn;
    // wire 
    char net0, net1; 

    net0 = or2(a1,a2);
    net1 = and2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI21_D4(char a1,char a2,char b){
    // output 
    char zn;
    // wire 
    char net0, net1; 

    net0 = or2(a1,a2);
    net1 = and2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI221_D1(char a1,char a2,char b1,char b2,char c){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = or2(a1,a2);
    net1 = or2(b1,b2);
    net2 = and3(net0,net1,c);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI221_D2(char a1,char a2,char b1,char b2,char c){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = or2(a1,a2);
    net1 = or2(b1,b2);
    net2 = and3(net0,net1,c);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI221_D4(char a1,char a2,char b1,char b2,char c){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = or2(a1,a2);
    net1 = or2(b1,b2);
    net2 = and3(net0,net1,c);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI222_D1(char a1,char a2,char b1,char b2,char c1,char c2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2, net3; 

    net0 = or2(c1,c2);
    net1 = or2(a1,a2);
    net2 = or2(b1,b2);
    net3 = and3(net0,net1,net2);
    zn = not1(net3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI222_D2(char a1,char a2,char b1,char b2,char c1,char c2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2, net3; 

    net0 = or2(c1,c2);
    net1 = or2(a1,a2);
    net2 = or2(b1,b2);
    net3 = and3(net0,net1,net2);
    zn = not1(net3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI222_D4(char a1,char a2,char b1,char b2,char c1,char c2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2, net3; 

    net0 = or2(c1,c2);
    net1 = or2(a1,a2);
    net2 = or2(b1,b2);
    net3 = and3(net0,net1,net2);
    zn = not1(net3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI22_D1(char a1,char a2,char b1,char b2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = or2(a1,a2);
    net1 = or2(b1,b2);
    net2 = and2(net0,net1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI22_D2(char a1,char a2,char b1,char b2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = or2(a1,a2);
    net1 = or2(b1,b2);
    net2 = and2(net0,net1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI22_D4(char a1,char a2,char b1,char b2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = or2(a1,a2);
    net1 = or2(b1,b2);
    net2 = and2(net0,net1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI31_D1(char a1,char a2,char a3,char b){
    // output 
    char zn;
    // wire 
    char net0, net1; 

    net0 = or3(a1,a2,a3);
    net1 = and2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI31_D2(char a1,char a2,char a3,char b){
    // output 
    char zn;
    // wire 
    char net0, net1; 

    net0 = or3(a1,a2,a3);
    net1 = and2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI31_D4(char a1,char a2,char a3,char b){
    // output 
    char zn;
    // wire 
    char net0, net1; 

    net0 = or3(a1,a2,a3);
    net1 = and2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI32_D1(char a1,char a2,char a3,char b1,char b2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = or3(a1,a2,a3);
    net1 = or2(b1,b2);
    net2 = and2(net0,net1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI32_D2(char a1,char a2,char a3,char b1,char b2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = or3(a1,a2,a3);
    net1 = or2(b1,b2);
    net2 = and2(net0,net1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI32_D4(char a1,char a2,char a3,char b1,char b2){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = or3(a1,a2,a3);
    net1 = or2(b1,b2);
    net2 = and2(net0,net1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI33_D1(char a1,char a2,char a3,char b1,char b2,char b3){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = or3(a1,a2,a3);
    net1 = or3(b1,b2,b3);
    net2 = and2(net0,net1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI33_D2(char a1,char a2,char a3,char b1,char b2,char b3){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = or3(a1,a2,a3);
    net1 = or3(b1,b2,b3);
    net2 = and2(net0,net1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI33_D4(char a1,char a2,char a3,char b1,char b2,char b3){
    // output 
    char zn;
    // wire 
    char net0, net1, net2; 

    net0 = or3(a1,a2,a3);
    net1 = or3(b1,b2,b3);
    net2 = and2(net0,net1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OR2_D1(char a1,char a2){
    // output 
    char z;
    z = or2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR2_D2(char a1,char a2){
    // output 
    char z;
    z = or2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR2_D4(char a1,char a2){
    // output 
    char z;
    z = or2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR2_D8(char a1,char a2){
    // output 
    char z;
    z = or2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR3_D1(char a1,char a2,char a3){
    // output 
    char z;
    z = or3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR3_D2(char a1,char a2,char a3){
    // output 
    char z;
    z = or3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR3_D4(char a1,char a2,char a3){
    // output 
    char z;
    z = or3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR3_D8(char a1,char a2,char a3){
    // output 
    char z;
    z = or3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR4_D1(char a1,char a2,char a3,char a4){
    // output 
    char z;
    z = or4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR4_D2(char a1,char a2,char a3,char a4){
    // output 
    char z;
    z = or4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR4_D4(char a1,char a2,char a3,char a4){
    // output 
    char z;
    z = or4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR4_D8(char a1,char a2,char a3,char a4){
    // output 
    char z;
    z = or4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_SCAN_DFCLR_D1(char si,char d,char se,char cp,char cdn){
    // output 
    char q;
    // wire 
    char cdn_i, d_i, q_buf, sd, si_check, d_check, se1, se_check, xsi_check, xd_check, xcdn_i; 

    // reg 
    char notifier;

    cdn_i = buf1(cdn);
    // supply1 
    char sdn = '1';
    d_i = udp_mux2(d,si,se);
    q_buf = udp_dff(d_i,cp,cdn_i,sdn,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    si_check = and2(cdn_i,se);
    d_check = and2(cdn_i,sd);
    se1 = xor2(si,d);
    se_check = and2(se1,cdn_i);
    xsi_check = udp_xbuf(si_check,'1');
    xd_check = udp_xbuf(d_check,'1');
    xcdn_i = udp_xbuf(cdn_i,'1');

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DFCLR_D2(char si,char d,char se,char cp,char cdn){
    // output 
    char q;
    // wire 
    char cdn_i, d_i, q_buf, sd, si_check, d_check, se1, se_check, xsi_check, xd_check, xcdn_i; 

    // reg 
    char notifier;

    cdn_i = buf1(cdn);
    // supply1 
    char sdn = '1';
    d_i = udp_mux2(d,si,se);
    q_buf = udp_dff(d_i,cp,cdn_i,sdn,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    si_check = and2(cdn_i,se);
    d_check = and2(cdn_i,sd);
    se1 = xor2(si,d);
    se_check = and2(se1,cdn_i);
    xsi_check = udp_xbuf(si_check,'1');
    xd_check = udp_xbuf(d_check,'1');
    xcdn_i = udp_xbuf(cdn_i,'1');

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DFCLR_D4(char si,char d,char se,char cp,char cdn){
    // output 
    char q;
    // wire 
    char cdn_i, d_i, q_buf, sd, si_check, d_check, se1, se_check, xsi_check, xd_check, xcdn_i; 

    // reg 
    char notifier;

    cdn_i = buf1(cdn);
    // supply1 
    char sdn = '1';
    d_i = udp_mux2(d,si,se);
    q_buf = udp_dff(d_i,cp,cdn_i,sdn,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    si_check = and2(cdn_i,se);
    d_check = and2(cdn_i,sd);
    se1 = xor2(si,d);
    se_check = and2(se1,cdn_i);
    xsi_check = udp_xbuf(si_check,'1');
    xd_check = udp_xbuf(d_check,'1');
    xcdn_i = udp_xbuf(cdn_i,'1');

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DFCLR_D8(char si,char d,char se,char cp,char cdn){
    // output 
    char q;
    // wire 
    char cdn_i, d_i, q_buf, sd, si_check, d_check, se1, se_check, xsi_check, xd_check, xcdn_i; 

    // reg 
    char notifier;

    cdn_i = buf1(cdn);
    // supply1 
    char sdn = '1';
    d_i = udp_mux2(d,si,se);
    q_buf = udp_dff(d_i,cp,cdn_i,sdn,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    si_check = and2(cdn_i,se);
    d_check = and2(cdn_i,sd);
    se1 = xor2(si,d);
    se_check = and2(se1,cdn_i);
    xsi_check = udp_xbuf(si_check,'1');
    xd_check = udp_xbuf(d_check,'1');
    xcdn_i = udp_xbuf(cdn_i,'1');

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DF_D1(char si,char d,char se,char cp){
    // output 
    char q;
    // wire 
    char d_i, q_buf, sd, xse, xsd; 

    // reg 
    char notifier;

    // supply1 
    char cdn = '1';
    // supply1 
    char sdn = '1';
    d_i = udp_mux2(d,si,se);
    q_buf = udp_dff(d_i,cp,cdn,sdn,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    xse = udp_xbuf(se,'1');
    xsd = udp_xbuf(sd,'1');

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DF_D2(char si,char d,char se,char cp){
    // output 
    char q;
    // wire 
    char d_i, q_buf, sd, xse, xsd; 

    // reg 
    char notifier;

    // supply1 
    char cdn = '1';
    // supply1 
    char sdn = '1';
    d_i = udp_mux2(d,si,se);
    q_buf = udp_dff(d_i,cp,cdn,sdn,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    xse = udp_xbuf(se,'1');
    xsd = udp_xbuf(sd,'1');

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DF_D4(char si,char d,char se,char cp){
    // output 
    char q;
    // wire 
    char d_i, q_buf, sd, xse, xsd; 

    // reg 
    char notifier;

    // supply1 
    char cdn = '1';
    // supply1 
    char sdn = '1';
    d_i = udp_mux2(d,si,se);
    q_buf = udp_dff(d_i,cp,cdn,sdn,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    xse = udp_xbuf(se,'1');
    xsd = udp_xbuf(sd,'1');

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DF_D8(char si,char d,char se,char cp){
    // output 
    char q;
    // wire 
    char d_i, q_buf, sd, xse, xsd; 

    // reg 
    char notifier;

    // supply1 
    char cdn = '1';
    // supply1 
    char sdn = '1';
    d_i = udp_mux2(d,si,se);
    q_buf = udp_dff(d_i,cp,cdn,sdn,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    xse = udp_xbuf(se,'1');
    xsd = udp_xbuf(sd,'1');

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DFSET_D1(char si,char d,char se,char cp,char sdn){
    // output 
    char q;
    // wire 
    char sdn_i, d_i, q_buf, sd, si_check, d_check, xsi_check, xd_check, xsdn_i;

    // reg 
    char notifier;

    sdn_i = buf1(sdn);
    // supply1 
    char cdn = '1';
    d_i = udp_mux2(d,si,se);
    q_buf = udp_dff(d_i,cp,cdn,sdn_i,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    si_check = and2(sdn_i,se);
    d_check = and2(sdn_i,sd);
    xsi_check = udp_xbuf(si_check,'1');
    xd_check = udp_xbuf(d_check,'1');
    xsdn_i = udp_xbuf(sdn_i,'1');

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DFSET_D2(char si,char d,char se,char cp,char sdn){
    // output 
    char q;
    // wire 
    char sdn_i, d_i, q_buf, sd, si_check, d_check, xsi_check, xd_check, xsdn_i;

    // reg 
    char notifier;

    sdn_i = buf1(sdn);
    // supply1 
    char cdn = '1';
    d_i = udp_mux2(d,si,se);
    q_buf = udp_dff(d_i,cp,cdn,sdn_i,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    si_check = and2(sdn_i,se);
    d_check = and2(sdn_i,sd);
    xsi_check = udp_xbuf(si_check,'1');
    xd_check = udp_xbuf(d_check,'1');
    xsdn_i = udp_xbuf(sdn_i,'1');

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DFSET_D4(char si,char d,char se,char cp,char sdn){
    // output 
    char q;
    // wire 
    char sdn_i, d_i, q_buf, sd, si_check, d_check, xsi_check, xd_check, xsdn_i;

    // reg 
    char notifier;

    sdn_i = buf1(sdn);
    // supply1 
    char cdn = '1';
    d_i = udp_mux2(d,si,se);
    q_buf = udp_dff(d_i,cp,cdn,sdn_i,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    si_check = and2(sdn_i,se);
    d_check = and2(sdn_i,sd);
    xsi_check = udp_xbuf(si_check,'1');
    xd_check = udp_xbuf(d_check,'1');
    xsdn_i = udp_xbuf(sdn_i,'1');

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DFSET_D8(char si,char d,char se,char cp,char sdn){
    // output 
    char q;
    // wire 
    char sdn_i, d_i, q_buf, sd, si_check, d_check, xsi_check, xd_check, xsdn_i;

    // reg 
    char notifier;

    sdn_i = buf1(sdn);
    // supply1 
    char cdn = '1';
    d_i = udp_mux2(d,si,se);
    q_buf = udp_dff(d_i,cp,cdn,sdn_i,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    si_check = and2(sdn_i,se);
    d_check = and2(sdn_i,sd);
    xsi_check = udp_xbuf(si_check,'1');
    xd_check = udp_xbuf(d_check,'1');
    xsdn_i = udp_xbuf(sdn_i,'1');

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_XNOR2_D1(char a1,char a2){
    // output 
    char zn;
    zn = xnor2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_XNOR2_D2(char a1,char a2){
    // output 
    char zn;
    zn = xnor2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_XNOR2_D4(char a1,char a2){
    // output 
    char zn;
    zn = xnor2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_XNOR2_D8(char a1,char a2){
    // output 
    char zn;
    zn = xnor2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_XNOR3_D1(char a1,char a2,char a3){
    // output 
    char zn;
    zn = xnor3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_XNOR3_D2(char a1,char a2,char a3){
    // output 
    char zn;
    zn = xnor3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_XNOR3_D4(char a1,char a2,char a3){
    // output 
    char zn;
    zn = xnor3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_XOR2_D1(char a1,char a2){
    // output 
    char z;
    z = xor2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_XOR2_D2(char a1,char a2){
    // output 
    char z;
    z = xor2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_XOR2_D4(char a1,char a2){
    // output 
    char z;
    z = xor2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_XOR2_D8(char a1,char a2){
    // output 
    char z;
    z = xor2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_XOR3_D1(char a1,char a2,char a3){
    // output 
    char z;
    z = xor3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_XOR3_D2(char a1,char a2,char a3){
    // output 
    char z;
    z = xor3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_XOR3_D4(char a1,char a2,char a3){
    // output 
    char z;
    z = xor3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
