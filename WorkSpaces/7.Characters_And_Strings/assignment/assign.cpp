#include <iostream>
#include <string>

using namespace std;

int main()
{
    string user_string{};
    cout << "Enter a string in order to display Pyramid:";
    cin >> user_string;

    int grower{1};
    size_t controller{};

    for (size_t i{0}; i < user_string.size(); ++i)
    {
        string for_space(user_string.size() - controller, ' ');
        cout << for_space;
        for (int j{0}; j < i + grower; j++)
        {
            if (j > i)
                cout << user_string.at(i + (i - j));
            else
                cout << user_string.at(j);
        }
        controller++;
        grower++;
        cout << endl;
    }

    return 0;
}