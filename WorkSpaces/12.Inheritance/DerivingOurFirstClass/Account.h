#ifndef _ACCOUNT_
#define _ACCOUNT_
#include <string>

class Account {
public:
    double balance;
    std::string name;
    void deposit(double amount);
    void withdraw(double amount);

    Account();
    ~Account();
};


#endif //_ACCOUNT_