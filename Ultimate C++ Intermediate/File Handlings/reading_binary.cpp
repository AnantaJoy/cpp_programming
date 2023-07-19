#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int numbers[3];
    ifstream out("./output/numbers.bin", ios::binary); 
    if(out.is_open()){
        int number;
        while(out.read(reinterpret_cast<char*>(&number), sizeof(number)))
            cout << number << endl;
        out.close();
    }
}