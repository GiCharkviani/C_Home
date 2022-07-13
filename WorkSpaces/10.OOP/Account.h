#include <string>
#ifndef WORKSPACES_ACCOUNT_H
#define WORKSPACES_ACCOUNT_H

class Account {
private:
    std::string account_owner;
    int owner_age;
    double balance;
public:
    //constructors
    Account(); // no args, called as default
    Account(double _balance);
    Account(double _balance, std::string _account_owner);
    Account(double _balance, std::string _account_owner, int _owner_age);

    ~Account();

    void deposit(double bal);
    void setName(std::string _account_owner);
    std::string get_owner_name();
    double get_balance();
};


#endif
