#include <iostream>
#include <string>

using namespace std;

int main()
{
    // menu loop condition
    bool exit_menu{false};

    // choice
    char user_choice{};

    // enctryption
    string aplhabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"};
    string ciber{"h;\5k(d6SDJZ%l+p41RT3a@#2>7E,.r981!:Qt^Vf-H&@*v)jowOI|/$}{'WyqG"};
    
    // menu
    do
    {
        cout << "-------------------" << endl;
        cout << "\n** ENCRYPTO **" << endl;
        cout << "\nA. Encrypt" << endl;
        cout << "B. Decrypt" << endl;
        cout << "Q. Quit" << endl;
        cout << "Enter choice: ";
        cin >> user_choice;

        switch (user_choice)
        {
        case 'a':
        case 'A':
        {
            string user_string{};
            cout << "-------------" << endl;
            cout << "Enter a string to encrypt: ";
            cin >> user_string;

            string encrypt_string{};

            for (char val : user_string)
            {
                size_t found = aplhabet.find(val);

                if (found != string::npos)
                    encrypt_string += ciber.at(found);
                else
                    cout << "Error: 404" << endl;
            }
            cout << "String " << user_string << " was encrypted into: " << encrypt_string << endl;
            break;
        };
        case 'b':
        case 'B':
        {
            string user_string{};
            cout << "-------------" << endl;
            cout << "Enter a string to decrypt: ";
            cin >> user_string;

            string decrypt_string{};
            for (char val : user_string)
            {
                size_t found = ciber.find(val);

                if (found != string::npos)
                    decrypt_string += aplhabet.at(found);
                else
                    cout << "Error: 404" << endl;
            }
            cout << "String " << user_string << " was decrypted into: " << decrypt_string << endl;
            break;
        };
        case 'q':
        case 'Q':
            exit_menu = true;
            cout << "Goodbye" << endl;
            break;
        default:
            cout << "-------------" << endl;
            cout << "Wrong choice!" << endl;
            break;
        }

    } while (!exit_menu);
    return 0;
}