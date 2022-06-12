#include<iostream>
#include<string>

using namespace std;

class Player {
    private:
        string name;
        int health;
        int xp;
    public:
        void set_name(string name_val){
            name = name_val;
        };
        string get_name() {
            return name;
        };

        // Player() {
        //     name = "None";
        //     health = 100;
        //     xp = 3;
        // };

        Player();

        Player(string name_val);

        Player(string name_val, int health_val, int xp_val){
            name = name_val;
            health = health_val;
            xp = xp_val;
        }
};

// No return type, because it is constructor function init from outside
Player::Player() {
    name = "None";
};

Player::Player(string name_val) {
    name = name_val;
};

int main() {

    Player frank ("Frank", 95, 10);
    Player Hero {"Hero", 45, 80};

    // still will work, because in class there is still no args default constructor (made by us, by default, it would not)
    Player mary;

    Player giogio("Gio");

    cout << frank.get_name() << endl;
    cout << Hero.get_name() << endl;
    cout << mary.get_name() << endl;
    cout << giogio.get_name() << endl;


    return 0;
}