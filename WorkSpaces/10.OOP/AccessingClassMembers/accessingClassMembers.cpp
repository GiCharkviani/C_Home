#include<iostream>
#include<string>

using namespace std;

// Everything by default is private
// public: after this all will become public
class Player {
public:
    // Attributes
    string name;
    int health;
    int xp;

    // methods
    void talk(string text_to_say) {
        cout << name << " says " << text_to_say << endl;
    };
    bool is_dead();
};

class Account {
public:
    // attributes
    string name;
    double balance;

    // methods
    bool deposit(double bal) {
        balance += bal;
        cout << "In deposit" << endl;
        return true;
    };
    bool withdraw(double bal) {
        balance -= bal;
        cout << "In withdraw" << endl;
        return true;
    };
};


int main() {
    Account frank_account;
    frank_account.name = "Frank's account";
    frank_account.balance = 5000.0;

    frank_account.deposit(1000.0);
    frank_account.withdraw(500.0);

    Account *marry_account = new Account;
    (*marry_account).name = "Marry's account";
    marry_account->balance = 500;
    delete marry_account;


    Player frank;
    frank.name = "Frank";
    frank.health = 100;
    frank.xp = 12;

    frank.talk("hi there");

    Player *enemy = new Player;
    // two ways to get access:
    // Dereferencing:
    (*enemy).name = "Enemy";
    (*enemy).health = 100;
    // Arrow:
    enemy->xp = 15;
    enemy->talk("I will destroy you!");
    delete enemy;

    return 0;
}