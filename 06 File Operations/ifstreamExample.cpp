// This program reads data from a file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   ifstream inputFile;
   string name1, name2, name3;

   inputFile.open("demo.txt");
	
   if(inputFile)
   {	   
	cout << "Reading data from the file.\n";

	inputFile >> name1 >> name2 >> name3;      // Read name 1 from the file
	cout << name1 << endl << name2 << endl << name3 << endl;   // Display name 1
   }
   else
	   cout << "File NOT Found\n";
	   
   inputFile.close();      // Close the file
	   
	   
   return 0;
} 
