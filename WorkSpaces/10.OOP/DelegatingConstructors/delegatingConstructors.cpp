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
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
};

// Overloaded constructors
// Delegating constructors
// every time one constructor will be called while delegating to others, if we don't call only him (like 3 args only)
Player::Player(string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "Three args constructor" << endl;
};

Player::Player() : Player{"None", 0, 0}
{
    cout << "No args constructor" << endl;
};

Player::Player(string name_val) : Player{"None", 0, 0}
{
    cout << "One arg constructor" << endl;
};

int main()
{
    Player empty;
    Player frank{"Frank"};
    Player villian{"Villian", 100, 55};

    return 0;
}