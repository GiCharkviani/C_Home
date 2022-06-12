#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {
    // Attributes
    string name {"Player"}; // initializing here is possible from C++ 11
    int health {100};
    int xp {3};

    // Methods
    void talk(string);
    bool is_dead();
};

class Account {
    // attributes
    string name {"Account"};
    double balance {0};

    // methods
    bool deposit(double);
    bool withdraw(double);
};


int main()
{

    Account frank_account;
    Account jim_account;

    Player frank;
    Player hero;

    Player players[] {frank, hero};
    vector<Player> player_vec {frank};
    player_vec.push_back(hero);

    

    // On Heap:
    Player *enemy {nullptr};
    enemy = new Player;

    delete enemy;


    return 0;
}