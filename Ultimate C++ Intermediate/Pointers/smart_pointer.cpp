#include<iostream>
#include<memory>
using namespace std;

int main(){
    // unique smart pointers 
    unique_ptr<int> p(new int(10));
    auto numbers = make_unique<int[]>(10);
    auto y = make_unique<int>();
    numbers[0] = 20;
    cout<<numbers[0]<<endl;


    // shared pointers 
    shared_ptr<int> q(new int(20));
    auto z = make_shared<int>(30);
    cout<<*z<<endl;
    cout<<*q<<endl;
    

}