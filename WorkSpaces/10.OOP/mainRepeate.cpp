#include <iostream>
#include <string>
#include <vector>
#include "Account.h"

using namespace std;

class Player {
private:
    string name;
    int *age;
public:
    string getName();
    int getAge();
    Player(string name_val, int age_val);

    Player(const Player &source);

    ~Player();
};

string Player::getName() {
    return name;
}

int Player::getAge() {
    return *age;
}

Player::Player(string name_val, int age_val): name{name_val}  {
    age = new int;
    *age = age_val;
}

Player::Player(const Player &source): Player{source.name, *source.age} {
    cout << "Copy constructor called" << endl;
}

Player::~Player() {
    delete age;
    cout << "Destructor called" << endl;
}

void display_name_and_age(Player player) {
    cout << player.getName() << endl;
    cout << player.getAge() << endl;
}

int main() {
    Player giorgi {"giorgi", 16};
    display_name_and_age(giorgi);

    Player giorgi_bro = giorgi;
    cout << giorgi_bro.getName() << endl;
    cout << giorgi_bro.getAge() << endl;

    return 0;
}