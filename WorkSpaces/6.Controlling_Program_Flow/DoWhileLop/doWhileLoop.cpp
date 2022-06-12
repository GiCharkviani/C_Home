#include <iostream>

using namespace std;

int main()
{
    char selection{};

    do
    {
        cout << "-----------" << endl;
        cout << "1. Do this \n2. Do that \n3. Do something else\nQ. Quit" << endl;
        cout << "Enter your selection: ";
        cin >> selection;

        switch(selection) {
            case '1':
                cout<< "You chose 1 - doing this" << endl;
                break;
            case '2':
                cout<< "You chose 2 - doing that" << endl;
                break;
            case '3':
                cout<< "You chose 3 - doing something else" << endl;
                break;
            case 'q':
            case 'Q':
                cout << "Goodbye" << endl;
                break;
            default:
                cout << "Unkown uption -- try again..." <<endl;
        }

    }while (selection != 'q' && selection != 'Q');

    return 0;
}