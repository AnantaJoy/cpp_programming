#include<iostream>
using namespace std;

int main(){
    // Stack memory allocation. Automatically cleared when out of scope
    // int numbers[100];
    // Heap memory allocation. Must be cleared manually
    int *numbers = new int[10];
    int *p = new int;
    delete numbers;
    delete[] numbers;
    numbers = nullptr;
    p = nullptr;
}