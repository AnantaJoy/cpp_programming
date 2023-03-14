//
// Created by ananta on 3/13/2023.
//

#include <iostream>
#include <limits>

using namespace std;

int main(){
    cout << "Size of integer:"<<sizeof(int)<<"bytes"<<endl;
    cout << numeric_limits<int>::max() << endl;
    cout << numeric_limits<int>::min() << endl;

//    overflow
    cout << numeric_limits<int>::max() + 1 << endl;
//    underflow
    cout << numeric_limits<int>::min() - 1 << endl;
    return 0;
}

