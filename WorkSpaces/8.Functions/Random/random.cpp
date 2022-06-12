#include<iostream>
#include<cstdlib> // required for rand()
#include<ctime> // required for time()
#include<cmath> // for task

using namespace std;

int main() {

    int random_number {};
    size_t count {10}; // number of random numbers to generate
    int min {1}; // lower bound (inclusive)
    int max {6}; // upper bound (inclusive)

    // seed the random number generator
    // if you don't seed the generator you will get the same sequence random numbers every run

    cout << "RAND_MAX on my system is: " << RAND_MAX << endl; // what maximum number my system might generate
    srand(time(nullptr)); // seeding (nullptr - null pointer - 0) random number with time() func
    // if it is not, numbers will be random, but sequence not

    for(size_t i{1}; i <= count; ++i) {
        random_number = rand() % max + min; // generate random number [min, max]
        cout << random_number << endl;
    }


    // TASK
    double bill_total {102.78};
    int number_of_guests {5};
    
    double individual_bill {bill_total/number_of_guests};

    int individual_bill_1 {floor(individual_bill)};
    int individual_bill_2 {rint(individual_bill)};
    double individual_bill_3 {ceil(individual_bill*100)/100};

    cout << "All: " << individual_bill << endl;
    
    cout << "The individual bill at location 1 will be $" << individual_bill_1 << "\n" << "The individual bill at location 2 will be $" << individual_bill_2 << "\n" << "The individual bill at location 3 will be $" << individual_bill_3;
    cout << endl;
    return 0;
}