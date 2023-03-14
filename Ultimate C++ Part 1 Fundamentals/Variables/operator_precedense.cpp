//
// Created by ananta on 3/5/23.
//
#include <iostream>
using namespace std;

int main(){
//    PEMDAS
// Parenthesis has the higher precedence --> Multiplication or Division --> Addition and Subtraction
    float num =  8* 4/ 6 *8 -5;
    cout << num << endl;
//    using parenthesis the value will change
    cout << (8*4)/(6*8)-5 << endl;
}