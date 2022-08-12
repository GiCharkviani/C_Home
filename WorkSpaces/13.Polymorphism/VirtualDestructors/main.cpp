#include <iostream>

using namespace std;

class Account {
public:
    // we don't have to put virtual keyword in child classes, but it's the best practice to do it so
    virtual void withdraw(double amount) {
        cout << "In Account::withdraw" << endl;
    }
    virtual ~Account() {cout << "Account destructor" << endl;};
};

class Checking: public Account {
    virtual void withdraw(double amount) {
        cout << "In Checking::withdraw" << endl;
    }
    virtual ~Checking() {cout << "Checking destructor" << endl;};
};

class Savings: public Account {
    virtual void withdraw(double amount) {
        cout << "In Savings::withdraw" << endl;
    }
    virtual ~Savings() {cout << "Savings destructor" << endl;};
};

class Trust: public Account {
    virtual void withdraw(double amount) {
        cout << "In Trust::withdraw" << endl;
    }
    virtual ~Trust() {cout << "Trust destructor" << endl;};
};


int main() {
    cout << "\n *** Pointers ***" << endl;
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();

    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);

    cout << "\n *** Clean up ***" << endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}