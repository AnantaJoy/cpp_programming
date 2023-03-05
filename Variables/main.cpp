#include <iostream>
using namespace std;

int main() {
//    swap variables using third variable
    int age_of_A = 35;
    int age_of_B = 33;
    cout << "Before swapping"<<"\n";
    cout << "Age of A:"<< age_of_A<<" Age of B: "<< age_of_B <<"\n";
    int third_variable;
    third_variable = age_of_B;
    age_of_B = age_of_A;
    cout << "After swapping" <<"\n";
    cout <<"Age of A:" <<third_variable << " Age of B:" <<age_of_B << "\n";


//    without third variable
    int x = 20;
    int y = 10;
    cout << "Before swapping"<<"\n";
    cout << "x: " << x << " y: " << y << "\n";
    x = x+y; // x = 30
    y = x-y; // y = 20
    x = x-y; // x = 10
    cout << "After swapping"<<"\n";
    cout << "x:" << x << " y:" << y << "\n";
     return 0;
}
