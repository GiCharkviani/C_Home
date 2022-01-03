#include <iostream>
#include <cstring> // for c-style string functions
#include <cctype>  // for character-based functions

using namespace std;

int main()
{
    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};

    // cout << first_name; // Will likely display gargabe!

    // Example 1

    // cout << "Please enter your first name: ";
    // cin >> first_name;
    // cout << "Please enter your last name: ";
    // cin >> last_name;
    // cout << "--------------------------------" << endl;

    // // size_t is what strlen() returns - it is unsigned int or other.

    // cout << "Hello, " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
    // cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters" << endl;

    // // here everything depends on 0 in the end of string, in the end of characters array

    // strcpy(full_name, first_name); // copy first_name to full_name, otherwise won't be able to concat. it's like assigning
    // strcat(full_name, " ");  // concatenate full_name and space
    // strcat(full_name, last_name); // concatenate first_name to full_name (_)
    // cout << "Your full name is " << full_name << endl;

    // Example 2

    // cout << "---------------------------" << endl;
    // cout << "Enter your full name: ";
    // cin >> full_name;

    // cout << "Your full name is " << full_name << endl; // will print when it meets whitespace ( )

    // Example 3

    cout << "Enter your full name:";
    cin.getline(full_name, 50); // second is limit
    cout << "Your full name is " << full_name << endl;

    cout << "----------------------------" << endl;
    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0) // if 0 same, if not - no
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are different" << endl;
    cout << "----------------------------" << endl;

    for(size_t i{0}; i<strlen(full_name); ++i) {
        if(isalpha(full_name[i])) // checks if not int or other but alphabetical
            full_name[i] = toupper(full_name[i]); // turns into upper-case
    }

    cout << "Your full name is " << full_name << endl;

    cout << "----------------------" << endl;
    if(strcmp(temp, full_name)==0)
        cout << temp << " and " << full_name << " are the same" << endl;
    else
        cout << temp << " and " << full_name << " are different" << endl;

    cout << "----------------------" << endl;
    cout << "Rersult of comparing " << temp << " and " << full_name << ": " << strcmp(temp, full_name) << endl;
    cout << "Result of comparing " << full_name << " and " << temp << ": " << strcmp(full_name, temp) << endl;


    return 0;
}