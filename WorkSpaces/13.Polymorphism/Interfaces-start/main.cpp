#include <iostream>

using namespace std;

class Account {
    friend ostream &operator<<(ostream &os, const Account &acc);
public:
    virtual void withdraw(double amount) {
        cout << "In Account::withdraw" << endl;
    }
    virtual ~Account() {};
};

ostream &operator<<(ostream &os, const Account &acc) {
    os << "Account display";
    return os;
}

class Checking: public Account {
    friend ostream &operator<<(ostream &os, const Checking &acc);
public:
    virtual void withdraw(double amount) {
        cout << "In Checking::withdraw" << endl;
    }
    virtual ~Checking() {};
};

ostream &operator<<(ostream &os, const Checking &acc) {
    os << "Checking display";
    return os;
}

class Savings: public Account {
    friend ostream &operator<<(ostream &os, const Savings &acc);
public:
    virtual void withdraw(double amount) {
        cout << "In Savings::withdraw" << endl;
    }
    virtual ~Savings() {};
};

ostream &operator<<(ostream &os, const Savings &acc) {
    os << "Savings display";
    return os;
}

class Trust: public Account {
    friend ostream &operator<<(ostream &os, const Trust &acc);
public:
    virtual void withdraw(double amount) {
        cout << "In Trust::withdraw" << endl;
    }
    virtual ~Trust() {};
};

ostream &operator<<(ostream &os, const Trust &acc) {
    os << "Trust display";
    return os;
}


int main() {
    // as we don't have friend function virtual, this will still create Account instance and print that
    Account *p1 = new Account();
    cout << *p1 << endl;

    Account *p2 = new Checking();
    cout << *p2 << endl;


//    Account a;
//    cout << a << endl;
//
//    Checking b;
//    cout << b << endl;
//
//    Savings c;
//    cout << c << endl;
//
//    Trust d;
//    cout << d << endl;

    return 0;
}