#include<iostream>
#include<limits>

using namespace std;


int main(){
    int numbers[] = { 10,20,30,40,50};
    cout << numeric_limits<long long>::min() << endl;
    cout << numeric_limits<long long>::max() << endl;
    cout << numeric_limits<size_t>::min() << endl;
    cout << numeric_limits<size_t>::max() << endl;
    return 0;
}