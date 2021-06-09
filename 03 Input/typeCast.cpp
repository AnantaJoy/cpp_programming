//type casting example
#include<iostream>
using namespace std;
int main()
{
    int total = 0, num1 = 0, num2 = 0, num3 = 0, counter = 3;
    double average = 0;

    cout << "Please enter 3 integers separated by spaces: " << endl;
    cin >> num1 >> num2>> num3;

    total = num1 + num2 + num3;
    average = static_cast<int>(total)/counter; // new standard
    //average = (double)total/counter; //old style code
    cout << "The 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
    cout << "The sum of the numbers is: " << total << endl;
    cout << "The average of the numbers is: " << average << endl;

    return 0;
}
