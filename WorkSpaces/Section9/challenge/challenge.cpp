#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> list{};
    bool quit{};
    char choice_char{};

    int terminate{};

    do
    {
        // terminate condition
        if (terminate >= 5)
        {
            cout << "Too many wrong selections!!!" << endl;
            quit = true;
        }
        else
        {
            // Menu
            cout << "- - - - - - - - " << endl;
            cout << "P - Print numbers" << endl;
            cout << "A - Add a number" << endl;
            cout << "M - Display mean of numbers" << endl;
            cout << "S - Display the smallest number" << endl;
            cout << "L - Display the largest number" << endl;
            cout << "C - Clear the list" << endl;
            cout << "F - find the number in the list" << endl;
            cout << "Q - Quit" << endl;

            cout << "Enter Your Choice: ";
            cin >> choice_char;
            cout << "\n- - - - - - - " << endl;

            switch (choice_char)
            {
            case 'P':
            case 'p':
            {
                if (list.size() > 0)
                {
                    cout << "[ ";
                    for (auto val : list)
                        cout << val << " ";
                    cout << " ]" << endl;
                }
                else
                {
                    cout << "[] - the list is empty" << endl;
                }
                break;
            };
            case 'a':
            case 'A':
            {
                cout << "Add a integer: ";
                int added_int{};
                cin >> added_int;

                list.push_back(added_int);
                cout << added_int << " added" << endl;
                break;
            };
            case 'm':
            case 'M':
            {
                if (list.size() > 0)
                {
                    int sum{};
                    for (auto val : list)
                        sum += val;
                    cout << "Avarage: " << static_cast<double>(sum) / list.size() << endl;
                }
                else
                {
                    cout << "Unable to calculate the mean - no data";
                }
                break;
            };

            case 's':
            case 'S':
            {
                if (list.size() > 0)
                {
                    int smallest = list.at(0);
                    for (auto val : list)
                    {
                        if (val < smallest)
                            smallest = val;
                        else
                            continue;
                    }
                    cout << "The smallest number is " << smallest << endl;
                }
                else
                {
                    cout << "Unable to determine the smallest number - list is empty" << endl;
                }
                break;
            };

            case 'l':
            case 'L':
            {
                if (list.size() > 0)
                {
                    int largest = list.at(0);
                    for (auto val : list)
                    {
                        if (val > largest)
                            largest = val;
                        else
                            continue;
                    }
                    cout << "The largest number is " << largest << endl;
                }
                else
                {
                    cout << "Unable to determine the largest number - list is empty" << endl;
                }
                break;
            };

            case 'c':
            case 'C':
            {
                list.clear();
                cout << "List is Clean!";
                break;
            };

            case 'f':
            case 'F':
            {
                int findInt{};
                cout << "Enter an int to find: ";
                cin >> findInt;
                int times{};
                for (auto val : list)
                {
                    if (val == findInt)
                    {
                        ++times;
                        findInt = val;
                    };
                }
                times > 0 ? cout << "Int " << findInt << " was found and it occurs in the list " << times << " times" << endl : cout << "Int was not found :(" << endl;
                break;
            };
            case 'q':
            case 'Q':
            {
                cout << "Goodbye" << endl;
                quit = true;
            }
            break;
            default:
            {
                ++terminate;
                if (terminate >= 4)
                    cout << "Leaving..." << endl;
                else
                    cout << "Unknown selection, please try again" << endl;
            }
            }
        }

    } while (!quit);

    return 0;
}