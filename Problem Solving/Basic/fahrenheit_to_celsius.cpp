
#include <iostream>
using namespace std;

int main() {

    double celsius, fahrenheit;
    cin >> fahrenheit;

    // convert fahrenheit to degree celsius using the formula
    celsius = (fahrenheit - 32) * 5 / 9;
    // print the degree in celsius
    cout << celsius;

    return 0;
}