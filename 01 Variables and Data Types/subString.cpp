//example of sub string
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string fullName = "Ada Lovelace";
    string firstName = fullName.substr(0,3);
    string lastName = fullName.substr(4);
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;

    return 0;
}
