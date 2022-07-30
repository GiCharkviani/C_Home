#include <iostream>
#include <string>
#include <vector>

using namespace std;



class Customer {
private:
    string name;
    string surname;
    int *age;
    vector<string> *hobbies;

    static int quality;
public:
    // Static
    static int getQuality();

    string getFullName() const;
    int getAge() const;
    vector<string> getHobbies() const; // const lets you to use const before class declaration
    // and prevents you from modifying class members from inside of the method

    // constructors:
    Customer();
    Customer(string name_val, string surname_val);
    Customer(string name_val, string surname_val, int age, vector<string> hobbies_val);

    ~Customer() {
        delete age;
        delete hobbies;
        --quality;
    }
    // copy constructor
    Customer(const Customer &source);

    // move constructor
    Customer(Customer &&source);
};

int Customer::getAge() const {
    return *age;
}
string Customer::getFullName() const {
    return name + ' ' + surname;
}
vector<string> Customer::getHobbies() const {
    return *hobbies;
}

Customer::Customer(): Customer("Customer", "Customeriola", 15, {"Dancing", "Programming"}) {};

Customer::Customer(string name_val, string surname_val): Customer(name_val, surname_val, 15, {"Dancing", "Programming"}) {};

Customer::Customer(string name_val, string surname_val, int age_val, vector<string> hobbies_val): name {name_val}, surname {surname_val} {
    ++quality;
    age = new int;
    *age = age_val;
    hobbies = new vector<string>;
    *this->hobbies = hobbies_val; // using "this" keyword
};

// Copy constructor
Customer::Customer(const Customer &source): Customer(source.name, source.surname, *source.age, *source.hobbies) {
    cout << "Copy constructor called on: " << source.name << endl;
}

// Move constructor
Customer::Customer(Customer &&source): Customer(source.name, source.surname, *source.age, *source.hobbies) {
    source.age = nullptr;
    source.hobbies = nullptr;
}

// Static
int Customer::quality {56};

int Customer::getQuality() {
    return quality;
}



void printNewObj(Customer client);

int main() {
    Customer jeff;
    Customer christi("Christi", "Capalina", 25, {"Coding", "Flying"});

    cout << Customer::getQuality() << " quality" << endl;

    printNewObj(jeff);

     for(auto hobby: christi.getHobbies()) cout << hobby << endl;


    return 0;
}

void printNewObj(Customer client) {
    cout << client.getAge() << endl;
}