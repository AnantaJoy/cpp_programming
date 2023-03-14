//
// Created by ananta on 3/12/23.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int number = rand() % 10;
    cout << number << endl;
    return 0;
}
