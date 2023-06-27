#include<iostream>
using namespace std;

int main(){
    // data is constant, pointer is not
    // pointer is constant, data is not
    // Both the data and pointer are constant
    int a = 10;
    int *const ptr = &a; // constant pointer
    cout << "Address of a: " << &a << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value of a: " << a << endl;
    const int b = 20;
    const int* const ptr = &b; // constant pointer to constant data

    return 0;
}