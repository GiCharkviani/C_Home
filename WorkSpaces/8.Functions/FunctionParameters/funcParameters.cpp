#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

// prototypes
void pass_by_value1(int num);
void pass_by_value2(string s);
void pass_by_value3(vector<string> v);
void print_vector(vector<string> v);
void temperature_conversion(double fahrenheit_temperature); // for task
double fahrenheit_to_celsius(double val); // for task
double fahrenheit_to_kelvin(double val); // for task
// ----

void pass_by_value1(int num)
{
    num = 100;
}

void pass_by_value2(string s)
{
    s = "Changed";
}

void pass_by_value3(vector<string> v)
{
    v.clear(); // delete all vector elements
}

void print_vector(vector<string> v)
{
    for (auto s : v)
        cout << s << " ";
    cout << endl;
}

int main()
{
    int num{10};
    int another_num{20};

    cout << "num before calling pass_by_value1: " << num << endl;
    pass_by_value1(num);
    cout << "num after calling pass_by_value1: " << num << endl;

    cout << "\nanother_num before calling pass_by_value1: " << another_num << endl;
    pass_by_value1(another_num);
    cout << "another_num after calling pass_by_value1: " << another_num << endl;

    string name{"Frank"};
    cout << "\nname before calling pass_by_value2: " << name << endl;
    pass_by_value2(name);
    cout << "name after calling pass_by_value2: " << name << endl;

    vector<string> stooges{"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_value3: ";
    print_vector(stooges);
    pass_by_value3(stooges);
    cout << "stooges after calling pass_by_value3: ";
    print_vector(stooges);

    temperature_conversion(-18); // for Task

    return 0;
}


// TASK
double fahrenheit_to_celsius(double val){
    double celsius = (5.0/9.0)*(val-32);
    return round(celsius);
}

double fahrenheit_to_kelvin(double val){
    double kelvin = (5.0/9.0)*(val-32) + 273;
    return round(kelvin);
}

void temperature_conversion(double fahrenheit_temperature) {
    
   double celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
   double kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);
    
    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}