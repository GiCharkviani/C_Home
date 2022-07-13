#include<iostream>
#include<vector>
#include<string>

using namespace std;

void display(const vector <string> *const friends) {
    for(auto fr: *friends)
        cout << fr << endl;
}

int main() {

    vector<string> friends {"gio", "alika", "aluda"};

    display(&friends);

    for(auto &fr: friends)
        fr = "Jaja";

    display(&friends);

    int myAge {10};
    int &AgeRef {myAge};
    cout << "ages: \n";
    cout << myAge << endl;
    cout << AgeRef << endl;


    return 0;
}