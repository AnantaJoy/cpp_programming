//
// Created by ananta on 3/14/23.
//
#include <iostream>
using namespace std;

int main(){
//    matrix multiplication
    cout << "Number of Rows:";
    int rows;
    cin >> rows;
    for(int i=1; i<= rows; i++){
        for (int j = 0;j<i ;j++) {
            cout << "*" ;
        }
        cout << endl;
    }
}
