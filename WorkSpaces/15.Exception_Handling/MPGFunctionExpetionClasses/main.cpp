#include <iostream>
#include <string>

using namespace std;

class DivideByZeroException {};
class NegativeValueException {};

double calculate_mpg(int miles, int gallons) {
    if(gallons == 0)
        throw DivideByZeroException();
    if(miles < 0 || gallons < 0)
        throw NegativeValueException();
    return static_cast<double>(miles) / gallons;
}

int main() {

    int miles {};
    int gallons {};
    double mile_per_gallon {0.0};

    cout << "Enter the miles: ";
    cin >> miles;
    cout << "Enter the gallons: ";
    cin >> gallons;

    try {
        mile_per_gallon = calculate_mpg(miles, gallons);
        cout << "Result: " << mile_per_gallon << endl;
    } catch (const DivideByZeroException &ex) {
        cerr << "Sorry, can't divide by zero" << endl;
    }
    catch (const NegativeValueException &ex) {
        cerr << "Miles or Gallons is less than zero" << endl;
    }

//    mile_per_gallon = static_cast<double>(miles)

    cout << "Bye" << endl;

    return 0;
}