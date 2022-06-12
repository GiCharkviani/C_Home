#include<iostream>
#include<string>

using namespace std;

class Player {
    private:
        string name;
        int health;
        int xp;
    public:
        string get_name() const { // after this all get_name() will work with any const, except when you change something
            return name;
        };
        void set_name(string name_val) {
            name = name_val;
        };
        // Overloaded Constructors
        Player();
        Player(string name_val);
        Player(string name_val, int health_val, int xp_val);
};

Player::Player(): Player {"None",0, 0} {}; 

Player::Player(string name_val): Player{name_val, 0, 0} {}

Player::Player(string name_val, int health_val, int xp_val): name{name_val}, health {health_val}, xp {xp_val} {}


void display_player_name(const Player &p) { // here as well because of const, will have the same error, 
    cout << p.get_name() << endl;
}

int main() {
    const Player villian {"Villian", 100, 55}; // because of const you can't change anything even public inside obj
    Player hero {"Hero", 100, 15};

    // only because even get method could change something in object:
    // villian.set_name(); // won't work 
    // cout << villian.get_name() << endl; // neither this

    display_player_name(villian);

    return 0;
}