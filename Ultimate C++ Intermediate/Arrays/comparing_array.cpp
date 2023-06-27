#include <iostream>
using namespace std;

int main(){
    int first[] = { 10,20,30};
    int second[] = { 10,20,35};

    // if (first == second){
    //     cout << "Both arrays are equal";
    // }
    // else{
    //     cout << "Both arrays are not equal";
    // }

    bool areEqual = true;
    for (int i = 0; i < size(first); i++){
        if (first[i] != second[i]){
            areEqual = false;
            break;
        }
    }
    cout << (areEqual ? "Both arrays are equal" : "Both arrays are not equal");
}