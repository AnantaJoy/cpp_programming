//
// Created by ananta on 3/13/2023.
//
#include <iostream>
using namespace std;

int main(){
    short int number;
    cin >> number;


    if(number <0){
        cout << "Please enter a positive number!" << endl;
    }
    else {
        short int factorial =1;
            for (int i = 1; i <= number; i++)
                factorial *= i;
            cout <<  factorial << endl;    }
    return 0;
}