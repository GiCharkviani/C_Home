#include <iostream>

using namespace std;

class Deep
{
private:
    int *data;

public:
    void set_data_value(int d) { *data = d; };
    int get_data_value() { return *data; };
    // Constructor
    Deep(int d);
    // Copy constructor
    Deep(const Deep &source);
    // Destructor
    ~Deep();
};

Deep::Deep(int d)
{
    data = new int;
    *data = d;
};

// this will call above constructor function and pass pointer to of new data to perform the same action as below function would do (that is the same) - using Delegating
Deep::Deep(const Deep &source) : Deep{*source.data}
{
    cout << "Copy constructor - Deep copy" << endl;
};

// // or (Copy):
// Deep::Deep(const Deep &source) {
//     data = new int;
//     *data = *source.data;
//     cout << "Copy constructor - deep" << endl;
// }

Deep::~Deep()
{
    delete data;
    cout << "Destructor freeing data" << endl;
};

void display_shallow(Deep s)
{
    cout << s.get_data_value() << endl;
};

int main()
{
    Deep obj1{100};
    display_shallow(obj1);

    Deep obj2{obj1};

    obj2.set_data_value(1000);

    return 0;
}