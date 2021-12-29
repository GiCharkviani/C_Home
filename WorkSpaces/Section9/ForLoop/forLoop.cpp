#include<iostream>
#include<vector>

using namespace std;

int main()
{
    /*
   for (;;)
       cout << "Endless loop" << endl;
   */

    // for(int i{1}; i <= 10; i++ /*++i will be the same*/) cout << i <<endl;

    // for(int i{1}; i <= 10; i+=2) cout << i << endl;
    
    // for(int i{10}; i > 0; i--) cout << i << endl;

    // for(int i{i}; i <= 10; i++) cout << i << endl;

    // for(int i{10}; i <= 100; i+=10) {
    //     i % 15 == 0 ? cout << i << endl : cout << "nope" << endl;
    // }

    // for(int i{1}, j{5}; i <= 5; i++, j++) cout << i << " + " << j << " = " << (i+j) << endl;

    // for(int i{1}; i<=100; ++i) {
    //     cout << i << (i % 10 == 0 ? "\n" : " ");
    // }

    vector<int> nums {10, 20, 30, 40, 50};
    for(unsigned i{0}; i < nums.size(); i++) cout << nums[i] << endl;

    // int gio_arr[50] {15, 20};
    // for(unsigned i{0}; i < 50; i++) cout << gio_arr[i] << endl;

    cout << endl;
    return 0;
}