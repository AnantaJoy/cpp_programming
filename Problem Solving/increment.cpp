#include <iostream>
using namespace std;
int main() {
   int input = 3;
   for (int i = 1; i < 5; i++) { 
       for (int j = i; j > 0; j--) { 
           input++;
       }
    input = input + 2;  
   }
   cout << input;
}