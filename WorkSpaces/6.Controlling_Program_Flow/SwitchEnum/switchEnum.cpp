#include<iostream>

using namespace std;

int main() {

    enum Direction {
        left, right, up, down
    };

    // enumeration becomes then types, so we can use as a type, hence we can't enter anything else but whats declared in Direction enum
    Direction heading {left};

    switch(heading) {
        case left:
            cout << "Going left" << endl;
            break;
        case right:
            cout << "Going right" << endl;
            break;
        default:
            cout << "OK" <<endl;
    }


    cout << endl;
    return 0;
}