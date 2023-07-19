#include<iostream>
#include<sstream>
#include<iomanip>
#include<typeinfo>
using namespace std;


int main(){
    double number = 12.23;
    stringstream ss;
    ss << fixed << setprecision(2)<< number;
    string str = ss.str();
    cout << str << endl;
    cout << typeid(str).name()<<endl;
}