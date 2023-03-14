//
// Created by ananta on 3/12/23.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout << left;
    cout << setw(10) << "One" << setw(10) << "Two" << endl
         <<setw(10)  << "Three" <<setw(10) << "Four"<<endl;

//    floating point representation
    float pi_value = 3.1416f;
    cout <<"Value of PI: "<< fixed <<pi_value << endl;
    cout <<"Value of PI: "<< fixed << setprecision(2) <<pi_value << endl;

    return 0;
}