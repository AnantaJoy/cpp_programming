#include<iostream>
#include<string>
using namespace std;

int main(){
    string first_name = "John";
    first_name.append(" Doe");
    cout << first_name << endl;
    first_name.insert(0, "Mr. ");
    cout << first_name << endl;

    // first_name.replace(1, "Don");
    // first_name.clear();
    // first_name.find();
}