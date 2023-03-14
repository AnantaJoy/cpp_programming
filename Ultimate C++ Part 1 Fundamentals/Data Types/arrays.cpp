//
// Created by ananta on 3/13/2023.
//
#include <iostream>
using namespace std;

int main(){
    string names[3];
    for(int i=0;i<3;i++){
        cout << "Enter names: ";
        getline(cin, names[i]);
    }
    cout << names[0] << endl;
    return 0;
}