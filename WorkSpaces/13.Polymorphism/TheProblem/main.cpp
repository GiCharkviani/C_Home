#include <iostream>
#include <memory>

using namespace std;

class Base {
public:
    void say_hello() const {
        cout << "Hello - I'm a Base class object" << endl;
    }
};

class Derived: public Base {
public:
    void say_hello() const {
        cout << "Hello - I'm a Derived class object" << endl;
    }
};

void greetings(const Base &obj) {
    cout << "Greetings: ";
    obj.say_hello();
};

int main() {
    Derived myHello;
    greetings(myHello);

    Base *ptr = new Derived();
    ptr->say_hello();

    unique_ptr<Base> ptr1 = make_unique<Derived>(); // smart pointer
    ptr1->say_hello();

    delete ptr;

    return 0;
}