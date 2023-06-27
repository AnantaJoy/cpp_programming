#include<iostream>
using namespace std;

int main(){
    int age[] = {2,3,4,5,5};
    int ageCopy[size(age)];

    for(int i=0; i<size(age); i++){
    ageCopy[i] = age[i];
    }

    for(int i=0; i<size(ageCopy); i++){
        cout << ageCopy[i] << endl;
    }

    // using range based for loop

    for (int a: ageCopy){
        cout << a << endl;
    }
    return 0;
}