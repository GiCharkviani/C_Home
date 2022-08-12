#include <iostream>
#include <memory>


using namespace std;

class Test {
private:
    int data;
public:
    Test(): data{0} {
        cout << "Test constructor (" << data << ")" << endl;
    }
    Test(int data): data{data} {
        cout << "Test constructor (" << data << ")" << endl;
    }
    ~Test() {
        cout << "Test destructor (" << data << ")" << endl;
    }
};

void my_deleter(Test *ptr) {
    cout << "In my custom deleter" << endl;
    delete ptr;
}

int main() {
    shared_ptr<Test> ptr1 (new Test{100}, my_deleter);

    return 0;
}