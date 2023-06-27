#include<iostream>
using namespace std;

int find(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout << "Enter the element to be searched: " << endl;
    int key;
    cin >> key;
    cout << "Searching..."<< find(arr, n, key) << endl;
    return 0;
}