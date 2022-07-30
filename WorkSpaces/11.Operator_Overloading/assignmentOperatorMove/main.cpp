#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring a {"Hello"};
    a = Mystring {"Hola"};;
    a = "Bonjour";

    Mystring empty;
    Mystring larry {"Larry"};
    Mystring stooge {larry};
    Mystring stooges;

    empty = stooge;

    empty = "Funny";

    empty.display();
    larry.display();
    stooge.display();
    empty.display();

    stooges = "Larry, Moe, and curly";
    stooges.display();

    vector<Mystring> my_stooges {"Larrt", "Moe", "Curly"};

    cout << "==== Loop 1 ==========" << endl;
    for(const Mystring &s: my_stooges)
        s.display();

    cout << "==== Loop 2 ==========" << endl;
    for(Mystring &s: my_stooges)
        s = "Changed";

    cout << "==== Loop 3 ==========" << endl;
    for(const Mystring &s: my_stooges)
        s.display();


    return 0;
}