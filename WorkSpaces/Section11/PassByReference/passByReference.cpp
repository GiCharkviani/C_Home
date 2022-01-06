#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v);
void print_vector(const vector<string> &v); // const

void pass_by_ref1(int &num)
{
    num = 100;
}

void pass_by_ref2(string &s)
{
    s = "Changed";
}

void pass_by_ref3(vector<string> &v)
{
    v.clear(); // delete all vector elements
}

void print_vector(const vector<string> &v)
{
    for (auto val : v)
        cout << val << " ";
    cout << endl;
}

int main()
{   
    int num {10};
    int another_num {20};

    cout << "num before calling pass_by_ref1: " << num << endl;
    pass_by_ref1(num);
    cout << "num after calling pass_by_ref1: " << num << endl;

    cout << "pass_by_ref1 before calling pass_by_ref1: " << another_num << endl;
    pass_by_ref1(another_num);
    cout << "pass_by_ref1 after calling pass_by_ref1: " << another_num << endl;

    string name {"Frank"};
    cout << "name before calling pass_by_ref2: " << name << endl;
    pass_by_ref2(name);
    cout << "name after calling pass_by_ref2: " << name << endl;

    vector<string> stooges{"Larry", "Moe", "Curly"};
    cout << "\nstooges before calling pass_by_ref3: ";
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout << "stooges after calling pass_by_ref3: ";
    print_vector(stooges);

    return 0;
}