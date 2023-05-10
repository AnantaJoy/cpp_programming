//
// Created by ananta on 3/14/23.
//
#include <iostream>
using namespace std;

int max_value(int num1, int num2){
    return (num1>num2)? num1: num2;
}
int main(){
    cout << max_value(4,5) <<endl;
    return 0;
}