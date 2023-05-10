//
// Created by ananta on 3/14/23.
//
#include <iostream>
using namespace std;

int main(){
    cout << "Using break statement" << endl;
    for(int i=1; i <= 20; i++){
        if(i%5==0)
            break;
        cout << i << endl;
    }

    cout << "Using continue statement" << endl;
    for(int i=1; i <= 20; i++){
        if(i%5==0)
            continue;
        cout << i << endl;
    }
}