#include <iostream>
#include <cctype>
#include <cstring>
#include <string>


using namespace std;

int main () {
//    char gio {'g'};
//    cout << gio << endl;
//
//    // cctype library functions:
//    cout << isalpha(gio) << endl;
//    cout << isalnum(gio) << endl;
//
//    // cctype converting functions
//    cout << toupper(gio) << endl;
//    cout << tolower(gio) << endl;
//
//    /* C Style Strings */
//    char first_name[20] {};
//    char last_name[20] {};
//    char full_name[50] {};
//    char temp [50] {};
//
//    cout << "Enter your name:";
//    cin >> first_name;
//    cout << "Enter your lastname:";
//    cin >> last_name;
//
//    cout << "Your name is: " << first_name << ". and its length is: " << strlen(first_name) << endl;
//    cout << "Your lastname is: " << last_name << ". and its length is: " << strlen(last_name) << endl;
//
//    strcpy(full_name, first_name);
//    strcat(full_name, " ");
//    strcat(full_name, last_name);
//
//    cout << "Your full name is: " << full_name << endl;

    // C get line
//    char his_name[20] {};
//    char your_name[20] {};
//
//    cout << "Enter his name: ";
//    cin.getline(his_name, 50);
//    cout << "His name is " << his_name << endl;
//
//    cout << "Enter your name: ";
//    cin.getline(your_name, 50);
//    cout << "Your name is: " << your_name << endl;
//
//    if(strcmp(his_name, your_name) == 0)
//        cout << "your name equals his name" << endl;
//    else
//        cout << "your name doesn't equal his name" << endl;

//    char my_company_upper[50] {};
//    char tempName[50] {};
//
//    cout <<  "Enter company name: ";
//    cin.getline(tempName, 50);
//    cout << "Entered company name is: " << tempName << endl;
//
//    for(size_t i{0}; i < strlen(tempName); i++)
//        if(isalpha(tempName[i]))
//            my_company_upper[i] = toupper(tempName[i]);
//    cout << "Copied company name: " << my_company_upper << endl;

    /* C++ Style Strings */
    string my_name {"Giorgi", 3};
    cout << my_name << endl;

    string included_letters (10, 'V');
    cout << included_letters << endl;

    for(auto c: my_name)
        cout << c << endl;

    cout << (my_name == included_letters) << endl;

    string someone_name = "guja";
    cout << someone_name.substr(2, 1) << endl;

    string my_stoogies {"everyone the best"};
    cout << my_stoogies.find("the") << endl;

    string one_more_test_man {"you want me to erase"};
    cout << one_more_test_man.erase(0, 5) << endl;
    one_more_test_man.clear();
    cout << one_more_test_man << endl;
    cout << one_more_test_man.length() << endl;

    string s1;
    getline(cin, s1);
    cout << "You have entered: " << s1 << endl;
    return 0;
}