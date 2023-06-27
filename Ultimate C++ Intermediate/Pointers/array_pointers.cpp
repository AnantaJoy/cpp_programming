#include<iostream>
using namespace std;

// array and pointer relationship



int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    cout << "Value of arr[0] = " << *ptr << endl;
    cout << "Value of arr[1] = " << *(ptr + 1) << endl;
    cout << "Value of arr[2] = " << *(ptr + 2) << endl;
    cout << "Value of arr[3] = " << *(ptr + 3) << endl;
    cout << "Value of arr[4] = " << *(ptr + 4) << endl;

    return 0;
}