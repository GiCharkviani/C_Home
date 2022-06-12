#include<iostream>
#include<vector>
#include<iomanip>
// appeared in C++ 2011
using namespace std;

int main()
{
    // int scores[] {10, 20, 30};
    // for(int score: scores) cout << score << endl;
    // cout << "***" << endl;
    // for(auto score: scores) cout << score << endl;

    // cout << fixed << setprecision(1); // will round as well
    // vector<double> temperatures{87.9, 77.5, 80.2, 75.6, 5.2, 32.2};
    // double average_temp{};
    // double total{};
    // for (auto temp : temperatures)
    //     total += temp;
    // average_temp = total / temperatures.size();
    // cout << "Total is: " << total << "\nAverage is: " << average_temp << endl;

    // for(auto val: {1,2,3,4,5}) cout << val << endl;

    // for(auto c: "This is a test") if(c != ' ') cout << c;

    for(auto c: "This is a test") if(c == ' ') cout << "\t"; else cout << c;

    cout << endl;
    return 0;
}