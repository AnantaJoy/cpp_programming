#include<iostream>
using namespace std;

int main(){
    int numbers[] = {1,2,3,4,5,6,7,8};
    for (int number: numbers)
        cout<< number << endl;
     
    for (int i=0; i < sizeof(numbers)/sizeof(int); i++)
        cout << numbers[i] << endl;

    for (int i=0; i < size(numbers); i++)
        cout << numbers[i] << endl;
    return 0;
}