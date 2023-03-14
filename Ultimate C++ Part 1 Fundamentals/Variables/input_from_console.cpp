//
// Created by ananta on 3/5/23.
//
#include <iostream>
using namespace std;

int main(){
//    convert temperature from fahrenheit to celsius
    cout << "Temperature in Fahrenheit" << endl;
    double fahrenheit;
    cin >> fahrenheit;

    double celsius = (fahrenheit-32)/1.8;

    cout <<"Temperature in Celsius = "<< celsius << endl;
}