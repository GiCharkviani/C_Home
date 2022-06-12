#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int num {100};
    int &ref {num}; // reference, behind the scenes, it is a pointer

    cout << num << endl;
    cout << ref << endl;

    num = 200;
    cout << "\n------------------" << endl;
    cout << num << endl;
    cout << ref << endl;

    ref = 300;
    cout << "\n-------------------" << endl;
    cout << num << endl;
    cout << ref << endl;



    cout << "\n-------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};

    for (auto str : stooges)
        str = "Funny"; // str is a COPY of the each vector element

    for (auto str : stooges) // No change
        cout << str << endl;



    cout << "\n-------------------" << endl;
    vector<string> stooges2 {"Larry", "Moe", "Curly"};

    for (auto &str: stooges2)
        str = "Funny"; // str is a reference to each vector element

    for (auto const &str: stooges2) // notice we are using const
        cout << str << endl; // now the vector elements have changed

    cout << endl;
    return 0;
}