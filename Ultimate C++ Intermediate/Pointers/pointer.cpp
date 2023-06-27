#include <iostream>
using namespace std;

int main(){
    int a = 10;
// null pointer
    int *ptr = nullptr;
    int *p = &a;
    cout << "Address of a: " << &a << endl;
    cout << "Value of p: " << p << endl;
    cout << "Value of a: " << a << endl;
    // dereferencing operator
    cout << "Value of *p: " << *p << endl;
    cout << "Address of p: " << &p << endl;
    return 0;
}