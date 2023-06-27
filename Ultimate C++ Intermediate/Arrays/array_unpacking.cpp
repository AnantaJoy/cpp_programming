#include<iostream>
using namespace std;

int main(){
    int nums[] = {1,2,3};

    auto [x,y,z] = nums;
    cout << "x: " << x << " y: "<< y << " z: "<< z << endl;
    return 0;

}