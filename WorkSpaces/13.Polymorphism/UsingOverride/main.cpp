#include <iostream>

using namespace std;

class Account {
public:
    // it's a good practice to use override keyword, as it will make sure we always override function, instead of re-declaring;
    // if the final keyword is used after class name, this class can't be extended, the same about the virtual functions
    virtual void withdraw(double amount) const /* final */ {
        cout << "Hello - I'm a Base class object" << endl;
    }
    virtual ~Account() {cout << "Account destructor" << endl;};
};

class Checking: public Account {
    virtual void withdraw(double amount) const override {
        cout << "Hello - I'm a Derived class object" << endl;
    }
    virtual ~Checking() {cout << "Checking destructor" << endl;};
};


int main() {
    cout << "\n *** Pointers ***" << endl;
    Account *p1 = new Account();
    Account *p2 = new Checking();


    p1->withdraw(1000);
    p2->withdraw(1000);


    cout << "\n *** Clean up ***" << endl;
    delete p1;
    delete p2;


    return 0;
}