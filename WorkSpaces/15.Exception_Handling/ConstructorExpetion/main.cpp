#include "iostream"
#include <memory>

using namespace std;

class ZeroException {};

class TestClass {
private:
    int balance;
public:
    TestClass(int bal): balance {bal} {
        if(bal < 0)
            throw ZeroException();
    }
};

int main() {

    try {
         unique_ptr<TestClass> myTest = make_unique<TestClass>(-12);
    } catch (ZeroException &ex) {
        cerr << "Value is less than zero" << endl;
    }


    return 0;
}