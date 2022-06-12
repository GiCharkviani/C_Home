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
    string get_name() { return name; };
    int get_health() { return health; };
    int get_xp() { return xp; };

    // Constructor
    Player(string name_val = "None", int health_val = 0, int xp_val = 0);

    // Copy constructor
    Player(const Player &source); // source can be missed

    // Destructor
    ~Player() { cout << "Destructor is being called for: " << name << endl; };
};

Player::Player(string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val}
{
    cout << "Three args constructor" << endl;
};

// Copy constructor
// Player::Player(const Player &source) : name(source.name), health(source.health), xp(source.xp)
// {
//     cout << "Copy constructor - made copy of : " << source.name << endl;
// }

// the same but will call three args constructor:
Player::Player(const Player &source) : Player(source.name, source.health, source.xp)
{
    cout << "Copy constructor - made copy of : " << source.name << endl;
}

// exercising copy
void display_player(Player p) {
    cout << "Name: " << p.get_name() << endl;
    cout << "Health: " << p.get_health() << endl;
    cout << "XP: " << p.get_xp() << endl;
}

int main()
{
    Player empty {"XXXX", 100, 50};

    Player my_new_object {empty}; // this will also call Copy constructor

    display_player(my_new_object); // Copy of that object will be made

    Player frank{"Frank"};
    Player hero{"Hero", 100};
    Player villian{"Villian", 100, 55};

    

    return 0;
}