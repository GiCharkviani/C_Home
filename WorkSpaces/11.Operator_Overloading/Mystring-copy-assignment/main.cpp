#include<iostream>
#include<vector>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring a {"Hello"};            // overloaded constructor
    Mystring b;                     // no-args constructor
    b = a;                          // copy assignment
                                    // b.operator=(a)
    b = "This is a test";           // b.operator=("This is a test");
    
    // Test cases
    Mystring empty;
    Mystring larry("Larry");
    Mystring stooge {larry};
    Mystring stooges;

    empty = stooge;

    empty.display();
    larry.display();
    stooge.display();
    empty.display();

    stooges = "Larty, Moe, and curly";
    stooges.display();

    vector<Mystring> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");

    cout << "=== Loop 1 ====================" << endl;
    for(const Mystring &s: stooges_vec)
        s.display();

    cout << "=== Loop 2 ====================" << endl;
    for(Mystring &s: stooges_vec)
        s = "Changed";

    cout << "=== Loop 3 ====================" << endl;
    for(const Mystring &s: stooges_vec)
        s.display();
    

    cout << endl;
    return 0;
}