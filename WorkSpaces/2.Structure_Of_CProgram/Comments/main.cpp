/*********************************
 * author Gio
 * Copyright Gis
 * ciuku Ciukux
 * 11/11/2017 Gio - fixed bug in ...
 * 11/13/2017 Joe - Added function to ...
 * 
 * *******************************/

#include <iostream>

// This is a comment

/*   
    This is a multiple
      line 
       comment
*/

// Using a modified version Dijkstra's algorithm to improve space efficiency

int main() {
    int favorite_number;  // this is where my favorite number is stored
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    std::cout << "Amazing!! thats my favorite number too!" <<std::endl;
    std::cout << "No really!!" << favorite_number << " is my favorite number!" <<std::endl;
    return 0;
}