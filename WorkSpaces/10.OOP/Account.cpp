#include <iostream>
#include "Account.h"

using namespace std;

double Account::get_balance() {
    return balance;
};

string Account::get_owner_name() {
    return account_owner;
};

void Account::deposit(double bal) {
    balance += bal;
};

void Account::setName(string _account_owner) {
    account_owner = _account_owner;
};

Account::Account(): Account {0, "No-one", 12} {
    cout << "No args constructor called" << endl;
};

Account::Account(double _balance): Account {_balance, "No-one", 12} {
    cout << "One arg constructor called" << endl;
};

Account::Account(double _balance, std::string _account_owner): Account {_balance, _account_owner, 12} {
}

Account::Account(double _balance, std::string _account_owner, int _owner_age): balance {_balance}, account_owner {_account_owner}, owner_age {_owner_age} {
    cout << "Three arg constructor called" << endl;
};

Account::~Account() {
    cout << "Destructor called; " << this->get_owner_name() << "'s age heap data: " << owner_age << endl;
};


