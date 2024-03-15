#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int num_items{};

    cout << "How many data items do you have: ";
    cin >> num_items;

    vector<int> data{};

    for (int i{1}; i <= num_items; i++)
    {
        int data_item{};
        cout << "Enter data item " << i << ": ";
        cin >> data_item;
        data.push_back(data_item);
    }

    cout << "\nDisplay Histogram" << endl;
    for (auto val : data)
    {
        for (int i{1}; i <= val; i++)
        {
            i % 5 == 0 ? cout << "*" : cout << "_ ";
        }
        cout << endl;
    }

    return 0;
}