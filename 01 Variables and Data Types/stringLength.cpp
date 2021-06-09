//example of string length
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string firstName = "Ada";
    string lastName = "Lovelace";
    string fullName = firstName + " " + lastName;
    cout << "This name has " << fullName.length() << " bytes." << endl;
    return 0;
}
