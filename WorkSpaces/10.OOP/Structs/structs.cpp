#include<iostream>

using namespace std;

// struct comes from C
// others are same
// members of structs are public by default, but in classes they are private

// struct is not good for methods
// mostly for public access

struct Person {
    std::string name;
};

int main() {
    Person p;
    p.name = "Giorgi";
    cout << p.name << endl;

    return 0;
}