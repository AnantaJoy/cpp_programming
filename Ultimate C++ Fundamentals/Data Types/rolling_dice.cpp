//
// Created by ananta on 3/12/23.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    const short min_value = 1;
    const short max_value = 6;

    srand(time(0));
    int dice = (rand() % (max_value - min_value + 1) + min_value) ;

    cout << dice << endl;
    return 0;
}
