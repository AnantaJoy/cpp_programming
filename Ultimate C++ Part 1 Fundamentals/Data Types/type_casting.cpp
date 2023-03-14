//
// Created by ananta on 3/13/2023.
//

#include <iostream>
using namespace std;

int main(){
    int x = 22;
    int y = 7;
    double pi = x/y;
    cout << "PI value before type casting: " << pi << endl;
    double pi_value = static_cast<double> (x) / y;
    cout << "PI value after type casting: " << pi_value << endl;
    return 0;
}
