#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Address of number: " << &number << endl;

    int age[100];
    cout << "Address of age: " << &age << endl;
    cout << "Address of age: " << age << endl;

    char letter;
    cout << "Address of letter: " << &letter << endl;
    cout << "Address of letter: " << (void *)&letter << endl;

    return 0;
}