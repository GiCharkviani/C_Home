#include <iostream>

using namespace std;

int main() {

    cout <<  "Enter the width of the room: ";
    int room_width { 0 };
    cin >> room_width;
    
    cout <<  "Enter the length of the room: ";
    int room_length { 0 };
    cin >> room_length;
    
    cout <<  "The area of the room is : " << room_length * room_width << " square feet" <<endl;
    
    return 0;
}