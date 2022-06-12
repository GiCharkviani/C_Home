#include <iostream>

using namespace std;

// Friendshop can be granted limitedly

class Player
{
    friend void display_player(Player &p); // after this this function will have access to everything in Player class
    friend void Kicker::display_kickers(Player &p); // this class' methods will have access only on public members
    friend class EntireClass; // all the methods of other class will have access to private attributes of this class

    std::string name {"Jora"};
    int health;
    int xp;

    public:
        int age {20};
};

// Friend class method
class Kicker
{
public:
    void display_kickers(Player &p)
    {
        cout << p.age << endl;
    }
};

// Friend func only
void display_player(Player &p)
{
    p.name = "Gaga";
    cout << p.name << endl;
    cout << p.health << endl;
    cout << p.xp << endl;
}

int main()
{

    Player giorgi;
    // so passing class
    display_player(giorgi);

    return 0;
}