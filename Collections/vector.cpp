//  vector demo in C++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Max Size: " << v.max_size() << endl;

    // print the vector elements
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    cout << endl;

    for(int nums: v){
        cout << nums << " ";
    }
    cout << endl;
    v.push_back(5);
    v.push_back(15);
    v.push_back(25);

    for(int nums: v){
        cout << nums << " ";
    }
    cout << endl;
    // sorting the vector using sort() function
    sort(v.begin(), v.end()); 
    for(int nums: v){
        cout << nums << " ";
    }
    cout << endl;
    // descending order sorting
    sort(v.begin(), v.end(), greater<int>());
    for(int nums: v){
        cout << nums << " ";
    }
}