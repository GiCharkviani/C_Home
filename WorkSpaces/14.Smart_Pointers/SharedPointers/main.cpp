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

    shared_ptr<int> p1 {new int {100}};
    cout << "Use count: " << p1.use_count() << endl;

    shared_ptr<int> p2 {p1}; // can be copied
    cout << "Use count: " << p1.use_count() << endl;

    p1.reset(); // will set p1 pointer to nullptr;

    cout << "Use count: " << p1.use_count() << endl;
    cout << "Use count: " << p2.use_count() << endl;


    shared_ptr<Test> obj = make_unique<Test>(500);
    cout << "Obj Use count: " << obj.use_count() << endl;
    shared_ptr<Test> obj1 = obj;
    cout << "Obj Use count: " << obj.use_count() << endl;


    return 0;
}