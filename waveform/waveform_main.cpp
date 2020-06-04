#include <iostream>
#include <string>
#include "waveform.h"

using namespace std;

int main()
{
    Waveform waveform;
    // Read in the vcd file.
    string vcdFile = "ExampleRocketSystem_mm_input.vcd";
    //string vcdFile = "test.vcd";

    if (waveform.read(vcdFile)){
        cout << "File \"" << vcdFile << "\" was read in successfully." << endl;
        waveform.print(0);
        cout << endl << endl;
        waveform.print(1);
        cout << endl << endl;
        waveform.print(2);
        cout << endl << endl;
        waveform.print(3);
        cout << endl << endl;
        waveform.print(4);
        cout << endl << endl;
        waveform.print(5);
        cout << endl << endl;
        waveform.print(6);
        cout << endl << endl;
        waveform.print(7);
    }else {
        cerr << "Failed to read in file \"" << vcdFile << "\"!" << endl;
        exit(-1); // vcdFile does not exist.
    }
}