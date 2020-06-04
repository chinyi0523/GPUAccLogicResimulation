#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
using namespace std;
vector<char> GEN_AND2_D1(char a1,char a2){
    char z;
    z = and2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND2_D2(char a1,char a2){
    char z;
    z = and2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND2_D4(char a1,char a2){
    char z;
    z = and2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND2_D8(char a1,char a2){
    char z;
    z = and2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND3_D1(char a1,char a2,char a3){
    char z;
    z = and3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND3_D2(char a1,char a2,char a3){
    char z;
    z = and3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND3_D4(char a1,char a2,char a3){
    char z;
    z = and3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND3_D8(char a1,char a2,char a3){
    char z;
    z = and3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND4_D1(char a1,char a2,char a3,char a4){
    char z;
    z = and4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND4_D2(char a1,char a2,char a3,char a4){
    char z;
    z = and4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND4_D4(char a1,char a2,char a3,char a4){
    char z;
    z = and4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AND4_D8(char a1,char a2,char a3,char a4){
    char z;
    z = and4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO211_D1(char a1,char a2,char b,char c){
    char z;
    char net0; 

    net0 = and2(a1,a2);
    z = or3(net0,b,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO211_D2(char a1,char a2,char b,char c){
    char z;
    char net0; 

    net0 = and2(a1,a2);
    z = or3(net0,b,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO211_D4(char a1,char a2,char b,char c){
    char z;
    char net0; 

    net0 = and2(a1,a2);
    z = or3(net0,b,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO21_D1(char a1,char a2,char b){
    char z;
    char net0;

    net0 = and2(a1,a2);
    z = or2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO21_D2(char a1,char a2,char b){
    char z;
    char net0;

    net0 = and2(a1,a2);
    z = or2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO21_D4(char a1,char a2,char b){
    char z;
    char net0;

    net0 = and2(a1,a2);
    z = or2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO221_D1(char a1,char a2,char b1,char b2,char c){
    char z;
    char net0, net1; 

    net0 = and2(a1,a2);
    net1 = and2(b1,b2);
    z = or3(net0,net1,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO221_D2(char a1,char a2,char b1,char b2,char c){
    char z;
    char net0, net1; 

    net0 = and2(a1,a2);
    net1 = and2(b1,b2);
    z = or3(net0,net1,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO221_D4(char a1,char a2,char b1,char b2,char c){
    char z;
    char net0, net1; 

    net0 = and2(a1,a2);
    net1 = and2(b1,b2);
    z = or3(net0,net1,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO222_D1(char a1,char a2,char b1,char b2,char c1,char c2){
    char z;
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
    char z;
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
    char z;
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
    char z;
    char net0, net1;

    net0 = and2(b1,b2);
    net1 = and2(a1,a2);
    z = or2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO22_D2(char a1,char a2,char b1,char b2){
    char z;
    char net0, net1;

    net0 = and2(b1,b2);
    net1 = and2(a1,a2);
    z = or2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO22_D4(char a1,char a2,char b1,char b2){
    char z;
    char net0, net1;

    net0 = and2(b1,b2);
    net1 = and2(a1,a2);
    z = or2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO22_D8(char a1,char a2,char b1,char b2){
    char z;
    char net0, net1;

    net0 = and2(b1,b2);
    net1 = and2(a1,a2);
    z = or2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO31_D1(char a1,char a2,char a3,char b){
    char z;
    char net0; 

    net0 = and3(a1,a2,a3);
    z = or2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO31_D2(char a1,char a2,char a3,char b){
    char z;
    char net0; 

    net0 = and3(a1,a2,a3);
    z = or2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO31_D4(char a1,char a2,char a3,char b){
    char z;
    char net0; 

    net0 = and3(a1,a2,a3);
    z = or2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO32_D1(char a1,char a2,char a3,char b1,char b2){
    char z;
    char net0, net1; 

    net0 = and2(b1,b2);
    net1 = and3(a1,a2,a3);
    z = or2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO32_D2(char a1,char a2,char a3,char b1,char b2){
    char z;
    char net0, net1; 

    net0 = and2(b1,b2);
    net1 = and3(a1,a2,a3);
    z = or2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO32_D4(char a1,char a2,char a3,char b1,char b2){
    char z;
    char net0, net1; 

    net0 = and2(b1,b2);
    net1 = and3(a1,a2,a3);
    z = or2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO33_D1(char a1,char a2,char a3,char b1,char b2,char b3){
    char z;
    char net0, net1; 

    net0 = and3(b1,b2,b3);
    net1 = and3(a1,a2,a3);
    z = or2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO33_D2(char a1,char a2,char a3,char b1,char b2,char b3){
    char z;
    char net0, net1; 

    net0 = and3(b1,b2,b3);
    net1 = and3(a1,a2,a3);
    z = or2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AO33_D4(char a1,char a2,char a3,char b1,char b2,char b3){
    char z;
    char net0, net1; 

    net0 = and3(b1,b2,b3);
    net1 = and3(a1,a2,a3);
    z = or2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_AOI211_D1(char a1,char a2,char b,char c){
    char zn;
    char net0, net1; 

    net0 = and2(a1,a2);
    net1 = or3(net0,b,c);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI211_D2(char a1,char a2,char b,char c){
    char zn;
    char net0, net1; 

    net0 = and2(a1,a2);
    net1 = or3(net0,b,c);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI211_D4(char a1,char a2,char b,char c){
    char zn;
    char net0, net1; 

    net0 = and2(a1,a2);
    net1 = or3(net0,b,c);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI21_D1(char a1,char a2,char b){
    char zn;
    char net0, net1;

    net0 = and2(a1,a2);
    net1 = or2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI21_D2(char a1,char a2,char b){
    char zn;
    char net0, net1;

    net0 = and2(a1,a2);
    net1 = or2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI21_D4(char a1,char a2,char b){
    char zn;
    char net0, net1;

    net0 = and2(a1,a2);
    net1 = or2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI221_D1(char a1,char a2,char b1,char b2,char c){
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
    char net0, net1;

    net0 = and3(a1,a2,a3);
    net1 = or2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI31_D2(char a1,char a2,char a3,char b){
    char zn;
    char net0, net1;

    net0 = and3(a1,a2,a3);
    net1 = or2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI31_D4(char a1,char a2,char a3,char b){
    char zn;
    char net0, net1;

    net0 = and3(a1,a2,a3);
    net1 = or2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_AOI32_D1(char a1,char a2,char a3,char b1,char b2){
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char z;
    z = buf1(i);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_BUF_D2(char i){
    char z;
    z = buf1(i);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_BUF_D4(char i){
    char z;
    z = buf1(i);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_BUF_D8(char i){
    char z;
    z = buf1(i);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
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
vector<char> GEN_FA_D2(char a,char b,char ci){
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
vector<char> GEN_FA_D4(char a,char b,char ci){
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
vector<char> GEN_HA_D1(char a,char b){
    char s;
    char co;
    s = xor2(a,b);
    co = and2(a,b);

    vector<char> ans;
    ans.push_back(s);
    ans.push_back(co);
    return ans;
}
vector<char> GEN_HA_D2(char a,char b){
    char s;
    char co;
    s = xor2(a,b);
    co = and2(a,b);

    vector<char> ans;
    ans.push_back(s);
    ans.push_back(co);
    return ans;
}
vector<char> GEN_HA_D4(char a,char b){
    char s;
    char co;
    s = xor2(a,b);
    co = and2(a,b);

    vector<char> ans;
    ans.push_back(s);
    ans.push_back(co);
    return ans;
}
vector<char> GEN_INV_D1(char i){
    char zn;
    zn = not1(i);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_INV_D2(char i){
    char zn;
    zn = not1(i);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_INV_D4(char i){
    char zn;
    zn = not1(i);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_INV_D8(char i){
    char zn;
    zn = not1(i);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MAJORITYAOI222_D1(char a,char b,char c){
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
    char net0, net1, net2; 

    net0 = or2(a1,a2);
    net1 = not1(net0);
    net2 = and2(b1,b2);
    zn = or2(net1,net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
/*
vector<char> GEN_LATCH_D1(char d,char e){
    char q;
    otifier = reg0(
    dn = supply10(
    dn = supply10(
    dpi = udp_tlat6((q,d,e,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_LATCH_D2(char d,char e){
    char q;
    otifier = reg0(
    dn = supply10(
    dn = supply10(
    dpi = udp_tlat6((q,d,e,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_LATCH_D4(char d,char e){
    char q;
    otifier = reg0(
    dn = supply10(
    dn = supply10(
    dpi = udp_tlat6((q,d,e,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_DFCLR_D1(char d,char cp,char cdn){
    char q;
    otifier = reg0(
    dn = supply10(
    dpi = udp_dff6((q,d,cp,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_DFCLR_D2(char d,char cp,char cdn){
    char q;
    otifier = reg0(
    dn = supply10(
    dpi = udp_dff6((q,d,cp,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_DFCLR_D4(char d,char cp,char cdn){
    char q;
    otifier = reg0(
    dn = supply10(
    dpi = udp_dff6((q,d,cp,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_DFCLR_D8(char d,char cp,char cdn){
    char q;
    otifier = reg0(
    dn = supply10(
    dpi = udp_dff6((q,d,cp,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_DF_D1(char d,char cp){
    char q;
    otifier = reg0(
    dn = supply10(
    dn = supply10(
    dpi = udp_dff6((q,d,cp,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_DF_D2(char d,char cp){
    char q;
    otifier = reg0(
    dn = supply10(
    dn = supply10(
    dpi = udp_dff6((q,d,cp,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_DF_D4(char d,char cp){
    char q;
    otifier = reg0(
    dn = supply10(
    dn = supply10(
    dpi = udp_dff6((q,d,cp,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_DF_D8(char d,char cp){
    char q;
    otifier = reg0(
    dn = supply10(
    dn = supply10(
    dpi = udp_dff6((q,d,cp,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_DFSET_D1(char d,char cp,char sdn){
    char q;
    otifier = reg0(
    dn = supply10(
    dpi = udp_dff6((q,d,cp,cdn,sdn,notifier);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_MUX2_D2(char i0,char i1,char s){
    char z;
    dpi = udp_mux24((z,i0,i1,s);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_MUX2_D4(char i0,char i1,char s){
    char z;
    dpi = udp_mux24((z,i0,i1,s);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_MUX2N_D1(char i0,char i1,char s){
    char zn;
    char z; 

    dpi = udp_mux24((z,i0,i1,s);
    zn = not1(z);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MUX2N_D2(char i0,char i1,char s){
    char zn;
    char z; 

    dpi = udp_mux24((z,i0,i1,s);
    zn = not1(z);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MUX2N_D4(char i0,char i1,char s){
    char zn;
    char z; 

    dpi = udp_mux24((z,i0,i1,s);
    zn = not1(z);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MUX3_D1(char i0,char i1,char i2,char s0,char s1){
    char z;
    char net0; 

    dpi = udp_mux24((net0,i0,i1,s0);
    dpi = udp_mux24((z,net0,i2,s1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_MUX3_D2(char i0,char i1,char i2,char s0,char s1){
    char z;
    char net0; 

    dpi = udp_mux24((net0,i0,i1,s0);
    dpi = udp_mux24((z,net0,i2,s1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_MUX3_D4(char i0,char i1,char i2,char s0,char s1){
    char z;
    char net0; 

    dpi = udp_mux24((net0,i0,i1,s0);
    dpi = udp_mux24((z,net0,i2,s1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_MUX3N_D1(char i0,char i1,char i2,char s0,char s1){
    char zn;
    char net0, net1; 

    dpi = udp_mux24((net0,i0,i1,s0);
    dpi = udp_mux24((net1,net0,i2,s1);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MUX3N_D2(char i0,char i1,char i2,char s0,char s1){
    char zn;
    char net0, net1; 

    dpi = udp_mux24((net0,i0,i1,s0);
    dpi = udp_mux24((net1,net0,i2,s1);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MUX3N_D4(char i0,char i1,char i2,char s0,char s1){
    char zn;
    char net0, net1; 

    dpi = udp_mux24((net0,i0,i1,s0);
    dpi = udp_mux24((net1,net0,i2,s1);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MUX4_D1(char i0,char i1,char i2,char i3,char s0,char s1){
    char z;
    char net0, net1; 

    dpi = udp_mux24((net0,i2,i3,s0);
    dpi = udp_mux24((net1,i0,i1,s0);
    dpi = udp_mux24((z,net1,net0,s1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_MUX4_D2(char i0,char i1,char i2,char i3,char s0,char s1){
    char z;
    char net0, net1; 

    dpi = udp_mux24((net0,i2,i3,s0);
    dpi = udp_mux24((net1,i0,i1,s0);
    dpi = udp_mux24((z,net1,net0,s1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_MUX4_D4(char i0,char i1,char i2,char i3,char s0,char s1){
    char z;
    char net0, net1; 

    dpi = udp_mux24((net0,i2,i3,s0);
    dpi = udp_mux24((net1,i0,i1,s0);
    dpi = udp_mux24((z,net1,net0,s1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_MUX4N_D1(char i0,char i1,char i2,char i3,char s0,char s1){
    char zn;
    char net0, net1, net2; 

    dpi = udp_mux24((net0,i2,i3,s0);
    dpi = udp_mux24((net1,i0,i1,s0);
    dpi = udp_mux24((net2,net1,net0,s1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MUX4N_D2(char i0,char i1,char i2,char i3,char s0,char s1){
    char zn;
    char net0, net1, net2; 

    dpi = udp_mux24((net0,i2,i3,s0);
    dpi = udp_mux24((net1,i0,i1,s0);
    dpi = udp_mux24((net2,net1,net0,s1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_MUX4N_D4(char i0,char i1,char i2,char i3,char s0,char s1){
    char zn;
    char net0, net1, net2; 

    dpi = udp_mux24((net0,i2,i3,s0);
    dpi = udp_mux24((net1,i0,i1,s0);
    dpi = udp_mux24((net2,net1,net0,s1);
    zn = not1(net2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
*/
vector<char> GEN_NAND2_D1(char a1,char a2){
    char zn;
    zn = nand2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND2_D2(char a1,char a2){
    char zn;
    zn = nand2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND2_D4(char a1,char a2){
    char zn;
    zn = nand2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND2_D8(char a1,char a2){
    char zn;
    zn = nand2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND3_D1(char a1,char a2,char a3){
    char zn;
    zn = nand3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND3_D2(char a1,char a2,char a3){
    char zn;
    zn = nand3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND3_D4(char a1,char a2,char a3){
    char zn;
    zn = nand3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND3_D8(char a1,char a2,char a3){
    char zn;
    zn = nand3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND4_D1(char a1,char a2,char a3,char a4){
    char zn;
    zn = nand4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND4_D2(char a1,char a2,char a3,char a4){
    char zn;
    zn = nand4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND4_D4(char a1,char a2,char a3,char a4){
    char zn;
    zn = nand4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NAND4_D8(char a1,char a2,char a3,char a4){
    char zn;
    zn = nand4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR2_D1(char a1,char a2){
    char zn;
    zn = nor2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR2_D2(char a1,char a2){
    char zn;
    zn = nor2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR2_D4(char a1,char a2){
    char zn;
    zn = nor2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR2_D8(char a1,char a2){
    char zn;
    zn = nor2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR3_D1(char a1,char a2,char a3){
    char zn;
    zn = nor3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR3_D2(char a1,char a2,char a3){
    char zn;
    zn = nor3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR3_D4(char a1,char a2,char a3){
    char zn;
    zn = nor3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR3_D8(char a1,char a2,char a3){
    char zn;
    zn = nor3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR4_D1(char a1,char a2,char a3,char a4){
    char zn;
    zn = nor4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR4_D2(char a1,char a2,char a3,char a4){
    char zn;
    zn = nor4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR4_D4(char a1,char a2,char a3,char a4){
    char zn;
    zn = nor4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_NOR4_D8(char a1,char a2,char a3,char a4){
    char zn;
    zn = nor4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OA211_D1(char a1,char a2,char b,char c){
    char z;
    char net0; 

    net0 = or2(a1,a2);
    z = and3(net0,b,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA211_D2(char a1,char a2,char b,char c){
    char z;
    char net0; 

    net0 = or2(a1,a2);
    z = and3(net0,b,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA211_D4(char a1,char a2,char b,char c){
    char z;
    char net0; 

    net0 = or2(a1,a2);
    z = and3(net0,b,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA21_D1(char a1,char a2,char b){
    char z;
    char net0; 

    net0 = or2(a1,a2);
    z = and2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA21_D2(char a1,char a2,char b){
    char z;
    char net0; 

    net0 = or2(a1,a2);
    z = and2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA21_D4(char a1,char a2,char b){
    char z;
    char net0; 

    net0 = or2(a1,a2);
    z = and2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA221_D1(char a1,char a2,char b1,char b2,char c){
    char z;
    char net0, net1; 

    net0 = or2(b1,b2);
    net1 = or2(a1,a2);
    z = and3(net0,net1,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA221_D2(char a1,char a2,char b1,char b2,char c){
    char z;
    char net0, net1; 

    net0 = or2(b1,b2);
    net1 = or2(a1,a2);
    z = and3(net0,net1,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA221_D4(char a1,char a2,char b1,char b2,char c){
    char z;
    char net0, net1; 

    net0 = or2(b1,b2);
    net1 = or2(a1,a2);
    z = and3(net0,net1,c);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA222_D1(char a1,char a2,char b1,char b2,char c1,char c2){
    char z;
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
    char z;
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
    char z;
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
    char z;
    char net0, net1; 

    net0 = or2(b1,b2);
    net1 = or2(a1,a2);
    z = and2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA22_D2(char a1,char a2,char b1,char b2){
    char z;
    char net0, net1; 

    net0 = or2(b1,b2);
    net1 = or2(a1,a2);
    z = and2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA22_D4(char a1,char a2,char b1,char b2){
    char z;
    char net0, net1; 

    net0 = or2(b1,b2);
    net1 = or2(a1,a2);
    z = and2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA31_D1(char a1,char a2,char a3,char b){
    char z;
    char net0; 

    net0 = or3(a1,a2,a3);
    z = and2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA31_D2(char a1,char a2,char a3,char b){
    char z;
    char net0; 

    net0 = or3(a1,a2,a3);
    z = and2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA31_D4(char a1,char a2,char a3,char b){
    char z;
    char net0; 

    net0 = or3(a1,a2,a3);
    z = and2(net0,b);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA32_D1(char a1,char a2,char a3,char b1,char b2){
    char z;
    char net0, net1; 

    net0 = or2(b1,b2);
    net1 = or3(a1,a2,a3);
    z = and2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA32_D2(char a1,char a2,char a3,char b1,char b2){
    char z;
    char net0, net1; 

    net0 = or2(b1,b2);
    net1 = or3(a1,a2,a3);
    z = and2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA32_D4(char a1,char a2,char a3,char b1,char b2){
    char z;
    char net0, net1; 

    net0 = or2(b1,b2);
    net1 = or3(a1,a2,a3);
    z = and2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA33_D1(char a1,char a2,char a3,char b1,char b2,char b3){
    char z;
    char net0, net1; 

    net0 = or3(b1,b2,b3);
    net1 = or3(a1,a2,a3);
    z = and2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA33_D2(char a1,char a2,char a3,char b1,char b2,char b3){
    char z;
    char net0, net1; 

    net0 = or3(b1,b2,b3);
    net1 = or3(a1,a2,a3);
    z = and2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OA33_D4(char a1,char a2,char a3,char b1,char b2,char b3){
    char z;
    char net0, net1; 

    net0 = or3(b1,b2,b3);
    net1 = or3(a1,a2,a3);
    z = and2(net0,net1);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OAI211_D1(char a1,char a2,char b,char c){
    char zn;
    char net0, net1; 

    net0 = or2(a1,a2);
    net1 = and3(net0,b,c);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI211_D2(char a1,char a2,char b,char c){
    char zn;
    char net0, net1; 

    net0 = or2(a1,a2);
    net1 = and3(net0,b,c);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI211_D4(char a1,char a2,char b,char c){
    char zn;
    char net0, net1; 

    net0 = or2(a1,a2);
    net1 = and3(net0,b,c);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI21_D1(char a1,char a2,char b){
    char zn;
    char net0, net1; 

    net0 = or2(a1,a2);
    net1 = and2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI21_D2(char a1,char a2,char b){
    char zn;
    char net0, net1; 

    net0 = or2(a1,a2);
    net1 = and2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI21_D4(char a1,char a2,char b){
    char zn;
    char net0, net1; 

    net0 = or2(a1,a2);
    net1 = and2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI221_D1(char a1,char a2,char b1,char b2,char c){
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
    char net0, net1; 

    net0 = or3(a1,a2,a3);
    net1 = and2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI31_D2(char a1,char a2,char a3,char b){
    char zn;
    char net0, net1; 

    net0 = or3(a1,a2,a3);
    net1 = and2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI31_D4(char a1,char a2,char a3,char b){
    char zn;
    char net0, net1; 

    net0 = or3(a1,a2,a3);
    net1 = and2(net0,b);
    zn = not1(net1);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_OAI32_D1(char a1,char a2,char a3,char b1,char b2){
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char zn;
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
    char z;
    z = or2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR2_D2(char a1,char a2){
    char z;
    z = or2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR2_D4(char a1,char a2){
    char z;
    z = or2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR2_D8(char a1,char a2){
    char z;
    z = or2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR3_D1(char a1,char a2,char a3){
    char z;
    z = or3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR3_D2(char a1,char a2,char a3){
    char z;
    z = or3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR3_D4(char a1,char a2,char a3){
    char z;
    z = or3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR3_D8(char a1,char a2,char a3){
    char z;
    z = or3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR4_D1(char a1,char a2,char a3,char a4){
    char z;
    z = or4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR4_D2(char a1,char a2,char a3,char a4){
    char z;
    z = or4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR4_D4(char a1,char a2,char a3,char a4){
    char z;
    z = or4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_OR4_D8(char a1,char a2,char a3,char a4){
    char z;
    z = or4(a1,a2,a3,a4);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
/*
vector<char> GEN_SCAN_DFCLR_D1(char si,char d,char se,char cp,char cdn){
    char q;
    char cdn_i, d_i, q_buf, sd, si_check, d_check, se1, se_check, xsi_check, xd_check, xcdn_i; 

    otifier = reg0(
    cdn_i = buf1(cdn);
    dn = supply10(
    dpi = udp_mux24((d_i,d,si,se);
    dpi = udp_dff6((q_buf,d_i,cp,cdn_i,sdn,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    si_check = and2(cdn_i,se);
    d_check = and2(cdn_i,sd);
    se1 = xor2(si,d);
    se_check = and2(se1,cdn_i);
    dpi = udp_xbuf3((xsi_check,si_check,1'b1);
    dpi = udp_xbuf3((xd_check,d_check,1'b1);
    dpi = udp_xbuf3((xcdn_i,cdn_i,1'b1);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DFCLR_D2(char si,char d,char se,char cp,char cdn){
    char q;
    char cdn_i, d_i, q_buf, sd, si_check, d_check, se1, se_check, xsi_check, xd_check, xcdn_i; 

    otifier = reg0(
    cdn_i = buf1(cdn);
    dn = supply10(
    dpi = udp_mux24((d_i,d,si,se);
    dpi = udp_dff6((q_buf,d_i,cp,cdn_i,sdn,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    si_check = and2(cdn_i,se);
    d_check = and2(cdn_i,sd);
    se1 = xor2(si,d);
    se_check = and2(se1,cdn_i);
    dpi = udp_xbuf3((xsi_check,si_check,1'b1);
    dpi = udp_xbuf3((xd_check,d_check,1'b1);
    dpi = udp_xbuf3((xcdn_i,cdn_i,1'b1);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DFCLR_D4(char si,char d,char se,char cp,char cdn){
    char q;
    char cdn_i, d_i, q_buf, sd, si_check, d_check, se1, se_check, xsi_check, xd_check, xcdn_i; 

    otifier = reg0(
    cdn_i = buf1(cdn);
    dn = supply10(
    dpi = udp_mux24((d_i,d,si,se);
    dpi = udp_dff6((q_buf,d_i,cp,cdn_i,sdn,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    si_check = and2(cdn_i,se);
    d_check = and2(cdn_i,sd);
    se1 = xor2(si,d);
    se_check = and2(se1,cdn_i);
    dpi = udp_xbuf3((xsi_check,si_check,1'b1);
    dpi = udp_xbuf3((xd_check,d_check,1'b1);
    dpi = udp_xbuf3((xcdn_i,cdn_i,1'b1);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DFCLR_D8(char si,char d,char se,char cp,char cdn){
    char q;
    char cdn_i, d_i, q_buf, sd, si_check, d_check, se1, se_check, xsi_check, xd_check, xcdn_i; 

    otifier = reg0(
    cdn_i = buf1(cdn);
    dn = supply10(
    dpi = udp_mux24((d_i,d,si,se);
    dpi = udp_dff6((q_buf,d_i,cp,cdn_i,sdn,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    si_check = and2(cdn_i,se);
    d_check = and2(cdn_i,sd);
    se1 = xor2(si,d);
    se_check = and2(se1,cdn_i);
    dpi = udp_xbuf3((xsi_check,si_check,1'b1);
    dpi = udp_xbuf3((xd_check,d_check,1'b1);
    dpi = udp_xbuf3((xcdn_i,cdn_i,1'b1);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DF_D1(char si,char d,char se,char cp){
    char q;
    char d_i, q_buf, sd, xse, xsd; 

    otifier = reg0(
    dn = supply10(
    dn = supply10(
    dpi = udp_mux24((d_i,d,si,se);
    dpi = udp_dff6((q_buf,d_i,cp,cdn,sdn,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    dpi = udp_xbuf3((xse,se,1'b1);
    dpi = udp_xbuf3((xsd,sd,1'b1);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DF_D2(char si,char d,char se,char cp){
    char q;
    char d_i, q_buf, sd, xse, xsd; 

    otifier = reg0(
    dn = supply10(
    dn = supply10(
    dpi = udp_mux24((d_i,d,si,se);
    dpi = udp_dff6((q_buf,d_i,cp,cdn,sdn,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    dpi = udp_xbuf3((xse,se,1'b1);
    dpi = udp_xbuf3((xsd,sd,1'b1);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DF_D4(char si,char d,char se,char cp){
    char q;
    char d_i, q_buf, sd, xse, xsd; 

    otifier = reg0(
    dn = supply10(
    dn = supply10(
    dpi = udp_mux24((d_i,d,si,se);
    dpi = udp_dff6((q_buf,d_i,cp,cdn,sdn,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    dpi = udp_xbuf3((xse,se,1'b1);
    dpi = udp_xbuf3((xsd,sd,1'b1);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DF_D8(char si,char d,char se,char cp){
    char q;
    char d_i, q_buf, sd, xse, xsd; 

    otifier = reg0(
    dn = supply10(
    dn = supply10(
    dpi = udp_mux24((d_i,d,si,se);
    dpi = udp_dff6((q_buf,d_i,cp,cdn,sdn,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    dpi = udp_xbuf3((xse,se,1'b1);
    dpi = udp_xbuf3((xsd,sd,1'b1);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DFSET_D1(char si,char d,char se,char cp,char sdn){
    char q;
    char sdn_i, d_i, q_buf, sd, si_check, d_check, xsi_check, xd_check, xsdn_i;

    otifier = reg0(
    sdn_i = buf1(sdn);
    dn = supply10(
    dpi = udp_mux24((d_i,d,si,se);
    dpi = udp_dff6((q_buf,d_i,cp,cdn,sdn_i,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    si_check = and2(sdn_i,se);
    d_check = and2(sdn_i,sd);
    dpi = udp_xbuf3((xsi_check,si_check,1'b1);
    dpi = udp_xbuf3((xd_check,d_check,1'b1);
    dpi = udp_xbuf3((xsdn_i,sdn_i,1'b1);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DFSET_D2(char si,char d,char se,char cp,char sdn){
    char q;
    char sdn_i, d_i, q_buf, sd, si_check, d_check, xsi_check, xd_check, xsdn_i;

    otifier = reg0(
    sdn_i = buf1(sdn);
    dn = supply10(
    dpi = udp_mux24((d_i,d,si,se);
    dpi = udp_dff6((q_buf,d_i,cp,cdn,sdn_i,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    si_check = and2(sdn_i,se);
    d_check = and2(sdn_i,sd);
    dpi = udp_xbuf3((xsi_check,si_check,1'b1);
    dpi = udp_xbuf3((xd_check,d_check,1'b1);
    dpi = udp_xbuf3((xsdn_i,sdn_i,1'b1);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DFSET_D4(char si,char d,char se,char cp,char sdn){
    char q;
    char sdn_i, d_i, q_buf, sd, si_check, d_check, xsi_check, xd_check, xsdn_i;

    otifier = reg0(
    sdn_i = buf1(sdn);
    dn = supply10(
    dpi = udp_mux24((d_i,d,si,se);
    dpi = udp_dff6((q_buf,d_i,cp,cdn,sdn_i,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    si_check = and2(sdn_i,se);
    d_check = and2(sdn_i,sd);
    dpi = udp_xbuf3((xsi_check,si_check,1'b1);
    dpi = udp_xbuf3((xd_check,d_check,1'b1);
    dpi = udp_xbuf3((xsdn_i,sdn_i,1'b1);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SCAN_DFSET_D8(char si,char d,char se,char cp,char sdn){
    char q;
    char sdn_i, d_i, q_buf, sd, si_check, d_check, xsi_check, xd_check, xsdn_i;

    otifier = reg0(
    sdn_i = buf1(sdn);
    dn = supply10(
    dpi = udp_mux24((d_i,d,si,se);
    dpi = udp_dff6((q_buf,d_i,cp,cdn,sdn_i,notifier);
    q = buf1(q_buf);
    sd = not1(se);
    si_check = and2(sdn_i,se);
    d_check = and2(sdn_i,sd);
    dpi = udp_xbuf3((xsi_check,si_check,1'b1);
    dpi = udp_xbuf3((xd_check,d_check,1'b1);
    dpi = udp_xbuf3((xsdn_i,sdn_i,1'b1);

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
*/
vector<char> GEN_XNOR2_D1(char a1,char a2){
    char zn;
    zn = xnor2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_XNOR2_D2(char a1,char a2){
    char zn;
    zn = xnor2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_XNOR2_D4(char a1,char a2){
    char zn;
    zn = xnor2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_XNOR2_D8(char a1,char a2){
    char zn;
    zn = xnor2(a1,a2);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_XNOR3_D1(char a1,char a2,char a3){
    char zn;
    zn = xnor3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_XNOR3_D2(char a1,char a2,char a3){
    char zn;
    zn = xnor3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_XNOR3_D4(char a1,char a2,char a3){
    char zn;
    zn = xnor3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(zn);
    return ans;
}
vector<char> GEN_XOR2_D1(char a1,char a2){
    char z;
    z = xor2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_XOR2_D2(char a1,char a2){
    char z;
    z = xor2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_XOR2_D4(char a1,char a2){
    char z;
    z = xor2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_XOR2_D8(char a1,char a2){
    char z;
    z = xor2(a1,a2);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_XOR3_D1(char a1,char a2,char a3){
    char z;
    z = xor3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_XOR3_D2(char a1,char a2,char a3){
    char z;
    z = xor3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
vector<char> GEN_XOR3_D4(char a1,char a2,char a3){
    char z;
    z = xor3(a1,a2,a3);

    vector<char> ans;
    ans.push_back(z);
    return ans;
}
/*
vector<char> GEN_CLKGATE_D1(char te,char e,char cp){
    char q;
    d = reg0(
    (negedg = always1(cp)
     = qd3(te|e;
     = assign4(=cp&qd;

    vector<char> ans;
    ans.push_back(q);
    return ans;
}
vector<char> GEN_SYNC2C_D1(char clk,char d,char clr_){
    char q;
    ,d0 = reg0(
    (posedg = always4(clkornegedgeclr_)
*/