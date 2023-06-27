// pass by reference

#include <iostream>
using namespace std;

void increaseCounter(int &value)
{
    value *= 1.5;
}

int main()
{
    int value = 10;
    increaseCounter(value);
    cout << value << endl;
    return 0;
}