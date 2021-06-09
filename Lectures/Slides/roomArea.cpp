/**************************************************************
*This program will calcualte the area of a room in square feet
*CSCI-2170 Computer Science II
*Author: Xin Yang
*Date: Aug 10, 2020 (Monday)
***************************************************************/
#include <iostream>
using namespace std;

int main()
{   //variable declaration
    int room_width = 0, room_length = 0, room_area = 0;

    //display a message to terminal using cout
    cout << "Enter the width of the room: " << endl;
    cin >> room_width; //get an input from keyboard using cin    
   	
    cout << "Enter the length of the room: " << endl;
    cin >> room_length;
    //calculate the area of a room
    room_area = room_width*room_length;
    //display the area to the terminal
    cout << "The area of the room is " << room_area << " square feet." << endl;
    return 0;
}
