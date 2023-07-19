#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int numbers[] = {1'000'000,2'000'000};
    ofstream out("numbers.bin", ios::binary); 
    if(out.is_open()){
        out.write(reinterpret_cast<char*>(&numbers), sizeof(numbers));
        out.close();
    }
}