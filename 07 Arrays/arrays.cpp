#include <iostream>
using namespace std;

int main(){
    int ageArray[10] = {23, 28, 34, 40, 44, 46, 25, 26, 27, 28,};
    cout << ageArray[7] << endl;

    for(int i = 0; i < sizeof(ageArray)/sizeof(ageArray[0]); i++){
        cout << ageArray[i] << endl;
    }
}