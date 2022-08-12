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


int main() {
// without smart pointer
//    Test *t1 = new Test{1000};
//    delete t1;

// with smart pointer
    unique_ptr<Test> t1 {new Test{100}}; // one way

    unique_ptr<Test> t2 = std::make_unique<Test>(1000); // other way

    unique_ptr<Test> t3;

//    t3 = t1; // not allowed to assign unique_ptr as it was deleted already;
    t3 = std::move(t1); // this is allowed;

    if(!t1)
        cout << "t1 is nullptr" << endl;

    return 0;
}