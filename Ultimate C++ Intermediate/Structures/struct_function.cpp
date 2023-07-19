// passing structure to function using pointers
#include<iostream>
using namespace std;


struct Rectangle{
        int length;
        int breadth;
    };

void fun(Rectangle *p){
    cout << "Length: " << p->length << endl;
    cout << "Breadth: " << p->breadth << endl;

}

int main(){
    
    Rectangle r = {10, 5};
    fun(&r);
    return 0;

}