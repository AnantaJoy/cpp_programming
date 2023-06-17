
#include <iostream>
using namespace std;

int main() {

    // create double variables km and mile
    double km, mile;  

    // get distance in mile from the user
    cin >> mile;

    // convert it to km using the formula
    km = mile * 1.609344;

    // print the distance in km
    cout <<km;

    return 0;
}