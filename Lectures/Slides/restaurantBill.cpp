/***************************************************
*Program Description: Restaurant Bill Calculator
*Author: Xin Yang
*Date: Aug 29, 2019 (Thursday)
***************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

//constant variables
const double TAX_RATE = 0.0675;
const double TIP_RATE = 0.15;

int main()
{
   //variable declaration
    double mealCost = 0, tax = 0, tip = 0, totalBill = 0;
	
    cout << "===========================================" << endl;
    cout << "Welcome to the Restaurant Bill Calculator: " << endl;
    cout << "===========================================" << endl;

    cout << "Please enter your meal cost: " << endl;
    cin >> mealCost;
    while(mealCost < 0)
    {
	cout << "Invalid Entry! \nPlease enter your meal cost: " << endl;
	cin >> mealCost;	
    }

    tax = mealCost * TAX_RATE;
    tip = TIP_RATE*(tax + mealCost);
    totalBill = mealCost + tax + tip;

    cout << setprecision(2) << fixed;
    cout << "Here is your bill information: " << endl;
    cout << "===========================================" << endl;
    cout << setw(13) << "Meal cost: $" << mealCost << endl;
    cout << setw(13) << "Tax: $" << tax << endl;
    cout << setw(13) << "Tip: $" << tip << endl;
    cout << setw(13) << "Total Bill: $" << totalBill << endl;
    cout << "===========================================" << endl;
    cout << "Thank you! See you next time!" << endl;

    return 0;
}
