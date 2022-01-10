#include<iostream>
#include<vector>
#include<string>


using namespace std;

int main () {
    int num {10};

    // pointer has also address and value, it's value is a reference of another data

    cout << "Value of num is: " << num << endl;
    cout << "sizeof of num is: " <<sizeof num << endl; // byte
    cout << "Address of num is: " << &num << endl; // reference

    cout << "-----------P-------------" << endl;

    int *p;
    cout << "Value of p is: " << p << endl; // garbage
    cout << "Address of p is: " << &p << endl; // 0x61fe10
    cout << "sizeof of p is: " <<sizeof p << endl; // 0

    p = nullptr; // set p to point nowhere
    cout << "Value of p is: " << p << endl; // 0

    // different type of pointer assignemnts:
    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};

    // use of pointers
     cout << "-----------USE-------------" << endl;
    int score {10};
    double high_temp {100.7};

    int *score_ptr {nullptr};

    score_ptr = &score; // OK

    cout << score_ptr << endl;
    cout << *score_ptr << endl; // Dereferencing

    // changing value indirectly via pointer:
    *score_ptr = 200;
    cout << score << endl; // 200
    return 0;
}