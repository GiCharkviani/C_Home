#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main() {
    Mystring larry {"Larry"};
    larry.display();

    larry = -larry;
    larry.display();

    cout << boolalpha << endl;
    Mystring moe{"Moe"};
    Mystring stooge = larry;

    cout << (larry == moe) << endl;
    cout << (larry == stooge) << endl;






    return 0;
}