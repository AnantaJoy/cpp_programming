//implicit conversion example
#include<iostream>
using namespace std;
int main()
{
    int num1 = 10; //integer num1
    char char1 = 'a'; // character char1
    //char1 implicityly converted to int, ASCII value of 'a' is 97
    num1 = num1 + char1;
    cout << "num1 = " << num1 << endl;
    // num1 is implicitly converted to double
    double num2 = num1 + 54.8;
    cout << "num2 = " << num2 << endl;

    return 0;
}
