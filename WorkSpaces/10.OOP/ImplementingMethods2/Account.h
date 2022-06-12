#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
// #pragma once // new way
#include<string>

class Account
{
private:
    std::string name;
    double balance {500};

public:
    void set_balance(double bal) { balance = bal; };
    double get_balance() { return balance; };

    // Methods will be declared outside the class declaration
    void set_name(std::string n);
    std::string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif // _ACCOUNT_H_