// reading data from stream
#include<iostream>
using namespace std;

int main(){
    // Buffer: temporary stroage in memory

    // Reading a character
    cout << "ch:" << endl;
    char ch;
    cin >> ch;
    // cin.ignore(numeric_limits<streamsize>::max(), "\n");

    cout << "ch2:" << endl;
    char ch2;
    cin >> ch2;

    cout << ch << " " << ch2 <<endl;
    return 0;

}