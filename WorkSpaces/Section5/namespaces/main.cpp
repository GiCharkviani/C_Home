#include <iostream>

//using namespace std;  //Use the entire std namespace

using std::cout;  // use only what you need
using std::cin;
using std::endl;

int main() {
    int favorite_number;  // this is where my favorite number is stored
    cout << "Enter your favorite number between 1 and 100: " << endl;
    cin >> favorite_number;
    cout << "Amazing!! thats my favorite number too!" << endl;
    cout << "No really!! " << favorite_number << " is my favorite number!" << endl;
    return 0;
}