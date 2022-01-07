#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstring>
#include <cctype>

// global variables
std::vector<int> list{};

using namespace std;
// Func Prototypes
void user_menu();
void decide_func(char &user_choice);
void print_list();
void add_number(int num);
double avarage();
int smallest();
int largest();
int find_number(int &num_find);
// .....

// Decisions
double avarage()
{
    int sum{};
    for (size_t i{1}; i < list.size(); ++i)
        sum += list[i];
    return static_cast<double>(sum) / list.size();
}

void print_list()
{
    cout << "[ ";
    for (auto item : list)
        cout << item << " ";
    cout << "]" << endl;
}

void add_number(int num)
{
    list.push_back(num);
}

int smallest()
{
    int smallest_num = list[0];
    for (auto num : list)
    {
        if (smallest_num > num)
            smallest_num = num;
        else
            continue;
    }
    return smallest_num;
}

int largest()
{
    int largest_num = list[0];
    for (auto num : list)
    {
        if (largest_num < num)
            largest_num = num;
        else
            continue;
    }

    return largest_num;
}
int find_number(int &num_find)
{
    int times_found{};
    for (auto num : list)
        if (num_find == num)
            times_found++;
    return times_found;
}

// Decides what function to run
void decide_func(char &user_choice)
{
    switch (user_choice)
    {
    case 'a':
    case 'A':
    {
        cout << "*ADDING NUMBER*" << endl;
        int user_number{};
        cout << "Enter a number: ";
        cin >> user_number;
        add_number(user_number);
        cout << "Added: " << user_number << endl;
        user_menu();

        break;
    };
    case 'p':
    case 'P':
    {
        char again[1]{};
        do
        {
            cout << "*LIST*" << endl;
            print_list();
            cout << "print again? (Y/N): ";
            cin >> again;
        } while (again[0] == 'y' || again[0] == 'Y');
        user_menu();
        break;
    };
    case 'm':
    case 'M':
    {
        cout << "*AVARAGE*" << endl;
        cout << "Avarage of your numbers is: " << avarage() << endl;
        user_menu();
        break;
    };
    case 's':
    case 'S':
    {
        cout << "*SMALLEST*" << endl;
        cout << "Smallest number in the list is: " << smallest() << endl;
        user_menu();
    };
    case 'l':
    case 'L':
    {
        cout << "*LARGEST*" << endl;
        cout << "Largest number in the list is: " << largest() << endl;
        user_menu();
    };
    case 'f':
    case 'F':
    {
        cout << "*FINDING*" << endl;
        int num_find{};
        cout << "Enter a number you wanna find: ";
        cin >> num_find;
        int times_found = find_number(num_find);
        if (times_found)
            cout << "Your number " << num_find << " was found in list " << times_found << " times." << endl;
        else
            cout << "Your number " << num_find << " was not found in list." << endl;
        user_menu();
    };
    case 'c':
    case 'C':
    {
        cout << "*CLEANING*" << endl;
        list.clear();
        cout << "List cleaned!" << endl;
        user_menu();
        break;
    };
    case 'q':
    case 'Q':
        cout << "Goodbye!" << endl;
        break;

    default:
    {
        cout << "Wrong Choice! try again in menu: " << endl;
        user_menu();
    }
    }
}

// Menu
void user_menu()
{
    string user_choice{};
    cout << "- - - - - - - - " << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
    cout << "C - Clean the list" << endl;
    cout << "F - find the number in the list" << endl;
    cout << "Q - Quit" << endl;

    cout << "Enter Your Choice: ";
    cin >> user_choice;
    cout << "\n- - - - - - - " << endl;
    if (isalpha(user_choice[0]))
        decide_func(user_choice[0]);
    else
        user_menu();
}

int main()
{
    user_menu();
    return 0;
}