#include <iostream>

using namespace std;

int main()
{
    // Usually
    // cout << "Enter a number of cents: ";
    // int num_of_cents {0};
    // cin >> num_of_cents;
    // int dollar = num_of_cents / 100; //static_cast<double>(num_of_cents)
    // int quarter = (num_of_cents - dollar*100) / 25;
    // int dime = (num_of_cents - dollar*100 - quarter*25) / 10;
    // int nickel = (num_of_cents - dollar*100 - quarter*25 - dime*10) / 5;
    // int penny = (num_of_cents - dollar*100 - quarter*25 - dime*10 - nickel*5);
    // cout << dollar << " dollar\n" << quarter << " quarter\n" << dime << " dime\n" << nickel << " nickel\n" << penny << " penny\n" << endl;

    // Modulus
    cout << "Enter a number of cents: ";
    int num_of_cents{0};

    cin >> num_of_cents;
    int dollar = num_of_cents / 100;
    int quarter = (num_of_cents % 100) / 25;
    int dime = ((num_of_cents % 100) % 25) / 10;
    int nickel = (((num_of_cents % 100) % 25) % 10) / 5;
    int penny = ((((num_of_cents % 100) % 25) % 10) % 5);

    cout << dollar << " dollar\n"
         << quarter << " quarter\n"
         << dime << " dime\n"
         << nickel << " nickel\n"
         << penny << " penny\n"
         << endl;

    return 0;
}