//
// Created by ananta on 3/5/23.
//
#include <iostream>
using namespace std;

int main(){
    int x  = 10;
    int y = 11;
    int z =  x + y;
    cout << "Sum of "<<x << " and " << y << " is : " << x+y <<endl;
    cout << "Difference of "<<x << " and " << y << " is : " << x-y <<endl;
    cout << "Multiplication of "<<x << " and " << y << " is : " << x*y <<endl;
// Division is little tricky
    cout << "Division of "<<x << " and " << y << " is : " << x/y <<endl;
//   Modulus
//  Increment
// Decrement
// Pre increment and post increment
    int a = x++; // a = 10 x = 11
    cout << "a: " << a << " x: " << x <<endl;
    int b = ++y ;// b = 12 y = 12
    cout << "b: " << b << " y: " << y <<endl;
    return 0;
}