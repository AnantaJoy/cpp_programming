#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream outputFile;
    outputFile.open("demo.txt");
    cout << "Now writing data to output file";

    outputFile <<"1";
    outputFile <<"2";
    
    outputFile.close();
    cout << "Done";
    return 0;
}