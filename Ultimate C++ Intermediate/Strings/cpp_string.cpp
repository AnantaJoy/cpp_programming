#include<iostream>
using namespace std;

int main(){
    string name = "Bangladesh";
    cout << name.length() << endl; 

    name += " Long Live!";
    cout << name << endl; 

    string password = "hello";
    if(password=="hllo")
        cout << "Logged In" <<endl;

    string str = "Hello";
    // cout << str.starts_with('h') << endl;
    // back in cpp
    cout << str.back() << endl;

}