// reading data from file
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file;
    file.open("./csvFile.csv");
    if(file.is_open()){
        string str;
        getline(file, str);
        while(!file.eof()){
            getline(file, str);
            cout << str << endl;
        }
        file.close();
    }
}