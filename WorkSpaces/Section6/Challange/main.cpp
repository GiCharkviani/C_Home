#include <iostream>
    using namespace std;
    
int main() {
    // The question
    cout << "Hello, welcome to Gio's Carpet Cleaning Service!" << endl;
    cout << "\nHow many small rooms would you like cleaned? ";
    int number_of_small_rooms {0};
    cin >> number_of_small_rooms;
    cout << "\nHow many large rooms would you like cleaned? ";
    int number_of_large_rooms {0};
    cin >> number_of_large_rooms;
    
    // Beginning constants
    const double tax_rate {0.06};
    const int valid_days {30};
    const double price_per_small_room {25.00};
    const double price_per_large_room {35.00};
    
    // calculated values
    double sm_room_cost {number_of_small_rooms * price_per_small_room};
    double lg_room_cost {number_of_large_rooms * price_per_large_room};
    double summed {sm_room_cost + lg_room_cost};
    double tax {summed * tax_rate};
    double total {summed+tax};
    
    // the answer
    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    cout << "Cost: $" << summed << endl;
    cout << "Tax: $" << tax << endl;
    cout << "=============================" << endl;
    cout << "Total estimate: $" << total << endl;
    cout << "This estimate is valid for: " << valid_days << " days. and one more thing: You are ciukiiiix" << endl;
    return 0;
}