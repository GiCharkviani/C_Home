#include<iostream>
#include "Savings_Account.h"

using namespace std;

Savings_Account::Savings_Account(): int_rate {3.0} {}

Savings_Account::~Savings_Account() {}

void Savings_Account::deposit(double amount) {
    cout << "Depositing: " << amount << endl;
}

void Savings_Account::withdraw(double amount) {
    cout << "Withdrawing: " << amount << endl;
}