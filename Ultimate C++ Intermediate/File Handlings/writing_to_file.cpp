#include<iostream>
#include<fstream>
using namespace std;


int main(){
    // ofstream file;
    // file.open("file.txt");
    // if(file.is_open()){
    //     file << "Hello World";
    //     file.close();
    // }

    // create a csv file using ofstream
    ofstream csvFile;
    csvFile.open("csvFile.csv");
    if(csvFile.is_open()){
        csvFile << "Name, Age, City\n"
            << "John, 23, New York\n"
            << "Raj, 25, Mumbai\n"
            << "Amit, 21, Delhi\n"
            << "Ruhul, 19, Bangladesh";
        csvFile.close();
    }
    return 0;
}
