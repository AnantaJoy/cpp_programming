//
// Created by ananta on 3/13/2023.
//
#include <iostream>
using namespace std;

int main() {
    int age = 16;
    bool is_eligible = age >= 18;
    cout << boolalpha << is_eligible << endl;
    int new_user = 55;
    bool eligibility = new_user >= 18 && new_user <= 60;
    cout << boolalpha << eligibility << endl;
//    or(&&)
//    and(||)
//    not(!)

    return 0;
}