#include<iostream>

/*
Increment operator ++
Decrement operator --

Prefix ++num
Postfix num++
*/

using namespace std;

int main() {

    int counter {10};
    int result{0};

    // Simple increment
    // cout << "Counter: " << counter << endl;

    // counter = counter + 1;
    // cout << "Counter: " << counter << endl;

    // counter++;
    // cout << "Counter: " << counter << endl;

    // ++counter;
    // cout << "Counter: " << counter << endl;

    // Preincrement
    // counter = 10;
    // result = 0;

    // cout << "Counter: " << counter << endl;

    // result = ++counter; // Note the pre increment
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

    // Post-increment
    // counter = 10;
    // result = 0;

    // cout << "Counter: " << counter << endl;

    // result = counter++; // Note the post increment
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

    // Example 4
    // counter = 10;
    // result = 0;

    // cout << "Counter: " << counter << endl;

    // result = ++counter + 10; // Note the pre increment

    // cout << "Counter: " << counter << endl;
    // cout <<  "Result: " << result << endl;

    // Example 5
    counter = 10;
    result = 0;

    cout << "Counter: " << counter << endl;

    result = counter++ + 10; // Note the pre increment

    cout << "Counter: " << counter << endl;
    cout <<  "Result: " << result << endl;

    return 0;
}