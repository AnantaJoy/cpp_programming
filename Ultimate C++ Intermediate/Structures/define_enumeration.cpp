// enumeration of struct
#include<iostream>
using namespace std;

struct Webstatus{
    enum Status {success, failed, unknown};
    Status s;
};

int main(){
    
    Webstatus web;
    web.s = Webstatus::failed;
    cout << web.s << endl;
    return 0;
}