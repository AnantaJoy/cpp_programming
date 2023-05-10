// pointers are variables that store the address of another variable
#include <iostream>
using namespace std;

int main(){
    int number = 10;
    int *pNumber = &number;
    int **ppNumber = &pNumber;

    cout << "Address of number: " << &number << endl;
    cout << "Address of number: " << pNumber << endl; //0x...
    cout << "Address of pNumber: " << &pNumber << endl;
    cout << "Address of ppNumber: " << ppNumber << endl; //0x...
    cout << "Value of number: " << *pNumber << endl; // 10
}