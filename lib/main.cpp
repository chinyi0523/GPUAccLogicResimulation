#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include "lib.h"
using namespace std;
void help_message(){
    cout << "Usage: ./sim <input vcd file> <netlist>" << endl;
    cout << "Missing or too many options !"<<endl;
}
int main(int argc, char* argv[]){
    if(argc!=3){
        help_message();
        exit(1);
    }
    char* vcd_file = argv[1];
 	char* netlist_file = argv[2];
    cout<<vcd_file<<endl;
}