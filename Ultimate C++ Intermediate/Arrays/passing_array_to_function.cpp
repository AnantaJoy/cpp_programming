#include<iostream>
using namespace std;

void printNumbers(int num[], int size ){
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << endl;
    }
    
}

int main() {
    int numbers[] = { 10,20,30,40,50};
    printNumbers(numbers, size(numbers));
    return 0;
}