//
// Created by ananta on 3/13/2023.
//
#include <iostream>
using namespace std;

int main(){
    char first_letter = 'a';
    cout << first_letter << endl;
    cout << +first_letter << endl;
    string name;
    cout << "Enter your name: ";
    getline(cin,name);
    cout << "Hi" << name << "!"<< endl;
    return 0;
}