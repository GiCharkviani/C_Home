#include <iostream>
#include <string>

using namespace std;

double calculate_mpg(int miles, int gallons) {
    if(gallons == 0)
        throw 0;
    if(miles < 0 || gallons < 0)
        throw string {"Miles or Gallons is less than zero"};
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
    } catch (int &ex) {
        cerr << "Sorry, can't divide by zero" << endl;
    }
    catch(string &ex) {
        cerr << ex << endl;
    }

//    mile_per_gallon = static_cast<double>(miles)

    cout << "Bye" << endl;

    return 0;
}