//
// Created by ananta on 3/13/2023.
//
#include <iostream>
using namespace std;

int main(){
    double temp[] = {33,28,31,33,28,27};
    double avg_temp=0;
    for(double i:temp){
        avg_temp += i;
    }
    cout << "Average temp: " << avg_temp/ (sizeof(temp) / sizeof(double)) << endl;
}