#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
    string name;
    int health;
    int xp;

public:
    Player(string name_val = "None", int health_val = 0, int xp_val = 0);
    // Player(){}; // you can't do this now
};

// Overloaded constructors
Player::Player(string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "Three args constructor" << endl;
};

int main()
{
    Player empty;
    Player frank{"Frank"};
    Player hero {"Hero", 100};
    Player villian{"Villian", 100, 55};

    return 0;
}