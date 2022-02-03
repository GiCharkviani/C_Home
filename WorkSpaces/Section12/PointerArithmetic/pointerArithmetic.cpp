#include<iostream>

using namespace std;

int main() {

    int scores[] {100, 95, 89, 68, -1};

    int *score_ptr {scores};

    while(*score_ptr != -1) {  // - 1 here is called as sentimal value
        cout << *score_ptr << endl;
        score_ptr++; // will increment by 4 (byte), as it's integer
    }



    cout << "\n--------------------------" << endl;
    score_ptr = scores;
    while(*score_ptr != -1)
        cout << *score_ptr++ << endl; // they have the same precidence, so we loot at associativity that is from right to left, so first happens increment of pointer and then dereferencing, but this would be different ==> (*score_ptr)++



    cout << "\n--------------------------" << endl;
    string s1 {"Frank"};
    string s2 {"Frank"};
    string s3 {"James"};

    string *p1 {&s1};
    string *p2 {&s2};
    string *p3 {&s1};

    cout << boolalpha;
    cout << p1 << "==" << p2 << ": " << (p1 == p2) << endl; // false
    cout << p1 << "==" << p3 << ": " << (p1 == p3) << endl; // true

    cout << *p1 << "==" << *p2 << ": " << (*p1 == *p2) << endl; // true
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl; // true

    p3 == &s3; // point to James
    cout << *p1 << "==" << *p3 << ": " << (*p1 == *p3) << endl; // false
    



    cout << "\n--------------------------" << endl;
    char name[] {"Frank"};

    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};

    char_ptr1 = &name[0]; //F
    char_ptr2 = &name[3]; //n

    cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl;

    // Const pointers and Const values
    // Pointers to constants
    int high_score {100};
    int low_score {65};
    const int *my_scr_ptr {&high_score};

    // *score_ptr = 85; // ERROR
    my_scr_ptr = &low_score; // OK

    // Constant pointers
    int other_high_score {100};
    int other_low_score {65};
    int *const other_score_ptr {&other_high_score};

    *other_score_ptr = 85; // OK
    // score_ptr2 = &low_score2; // ERROR

    // Constant ponters to Constants
    int last_high_score {100};
    int last_low_score {65};
    const int *const last_score_ptr {&last_high_score};

    // *last_score_ptr = 85; // ERROR
    // score_ptr2 = &low_score2; // ERROR

    cout << endl;
    return 0;
}