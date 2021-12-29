#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int length{}, width{}, height{};
    double base_cost{2.5};
    int package_volume{};

    double charge{};

    cout << fixed << setprecision(2); // to make 3.125 as 3.12
    cout << "Please enter dimensions in inches (length, width, height) as an integer: ";
    cin >> length >> width >> height;

    if (length <= 10 && width <= 10 && height <= 10)
    {
        package_volume += length * width * height;

        if (package_volume > 100 && package_volume < 500)
        {
            base_cost += base_cost * 0.1;
            charge = static_cast<double>(package_volume) * base_cost;
            cout << "The volume of your package is: " << package_volume << endl;
            cout << "You will get 10% surcharge, so the price will be: " << base_cost << "$"
                 << "\n"
                 << "Total cost: " << charge << "$" << endl;
        }
        else if (package_volume >= 500)
        {
            base_cost += base_cost * 0.25;
            charge = static_cast<double>(package_volume) * base_cost;
            cout << "The volume of your package is: " << package_volume << endl;
            cout << "You will get 25% surcharge, so the price will be: " << base_cost << "$"
                 << "\n"
                 << "Total cost: " << charge << "$" << endl;
        }
        else
        {
            charge = static_cast<double>(package_volume) * base_cost;
            cout << "The volume of your package is: " << package_volume << endl;
            cout << "You will get 0% surcharge, so the price will be: " << base_cost << "$"
                 << "\n"
                 << "Total cost: " << charge << "$" << endl;
        }
    }
    else
    {
        cout << "One of Dimension is bigger than 10" << endl;
    }

    return 0;
}