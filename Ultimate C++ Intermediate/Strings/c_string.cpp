#include<iostream>
#include<cstring>

using namespace std;

int main(){
    // NULL terminator(\0)
    char name[12] = {'B','a','n','g','l','a','d','e','s','h','\0'};
    cout << name << endl;

    char name2[] = "Bangladesh";
    cout << name2 << endl;
    // size of string
    cout << sizeof(name2) << endl;
    cout << strlen(name2) << endl;


    // strcpy(), strcat(), strcmp()
}