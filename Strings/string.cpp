#include<iostream>
#include<string>
using namespace std;


int main(){
    string s1 = "Hello";
    string s2 = "World";
    string s3 = s1 + " " + s2;
    cout << s3 << endl;
    cout << s3.length() << endl;
    cout << s3.substr(0, 5) << endl;
    cout << s3.find("World") << endl;

    // getline
    string s4;
    getline(cin, s4);
    cout << s4 << endl;
}