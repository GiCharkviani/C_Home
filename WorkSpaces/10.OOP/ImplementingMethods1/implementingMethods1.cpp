#include <iostream>
#include <string>

using namespace std;

class Account {
private:
    string name;
    double balance;

public:
    void set_balance(double bal) { balance = bal; };

    double get_balance() { return balance; };

    // Methods will be declared outside the class declaration
    void set_name(string n);

    string get_name();

    bool deposit(double amount);

    bool withdraw(double amount);
};

void Account::set_name(string n) {
    name = n;
}

string Account::get_name() {
    return name;
}

bool Account::deposit(double amount) {
    if (balance) {
        balance += amount;
        return true;
    } else {
        return false;
    }
}

bool Account::withdraw(double amount) {
    if (balance - amount >= 0) {
        balance -= amount;
        return true;
    } else {
        return false;
    }
}

int main() {
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    if (frank_account.deposit(200.0))
        cout << "Deposit OK" << endl;
    else
        cout << "Deposit Not allowed";

    if (frank_account.withdraw(500.0))
        cout << "Withdrawal OK" << endl;
    else
        cout << "No sufficient founds" << endl;

    if (frank_account.withdraw(1500.0))
        cout << "Withdraw OK " << endl;
    else
        cout << "No sufficient founds " << endl;

    return 0;
}
