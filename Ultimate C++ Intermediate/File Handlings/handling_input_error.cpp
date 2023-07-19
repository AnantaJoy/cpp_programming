// input error handling in cpp
#include<iostream>
#include<limits>
using namespace std;

int main(){
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;

    while(true){
        if(cin.fail()){
        cout << "Error: Invalid input" << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else break;
    }
    cout << "you entered the right number" << endl;

}