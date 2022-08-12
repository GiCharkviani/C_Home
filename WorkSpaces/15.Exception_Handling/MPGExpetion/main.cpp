#include <iostream>


using namespace std;

int main() {

    int miles {};
    int gallons {};
    double mile_per_gallon {};

    cout << "Enter the miles: ";
    cin >> miles;
    cout << "Enter the gallons: ";
    cin >> gallons;

    try {
        if(gallons == 0)
            throw 0;
        mile_per_gallon = miles/gallons;
        cout << "Result: " << mile_per_gallon << endl;
    } catch (int &ex) {
        cerr << "Sorry, can't divide by zero" << endl;
    }

//    mile_per_gallon = static_cast<double>(miles)

    cout << "Bye" << endl;

    return 0;
}