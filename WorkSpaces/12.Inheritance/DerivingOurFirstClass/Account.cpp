#include<iostream>
#include "Account.h"

using namespace std;

Account::Account(): balance {0}, name {"An Account"} {
}

Account::~Account() {}

void Account::deposit(double amount) {
    cout << "Depositing: " << amount << endl;
}

void Account::withdraw(double amount) {
    cout << "Withdrawing: " << amount << endl;
 }