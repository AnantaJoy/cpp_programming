#include <iostream>
using namespace std;

void print(int &a){
    a *= 2;

}
int main(){
    int a = 30;
    print(a);
    cout << a << endl;
    return 0;
}