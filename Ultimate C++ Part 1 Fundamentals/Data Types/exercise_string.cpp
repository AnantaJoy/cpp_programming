//
// Created by ananta on 3/13/2023.
//
#include <iostream>
using namespace std;

int main(){
    string street, city, state;
    short int zipcode;

    cout << "Enter the street name: ";
    getline(cin, street);

    cout << "Enter the city name: ";
    getline(cin, city);

    cout << "Enter the state name: ";
    cin >> state;

    cout << "Enter the zipcode: ";
    cin >> zipcode;

    cout << street << endl
        << city << "," << state <<"," << zipcode<<endl;

}