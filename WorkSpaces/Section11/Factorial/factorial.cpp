#include<iostream>
#include<iomanip>

using namespace std;

unsigned long long int factorial(unsigned long long n);
double a_penny_doubled_everyday(int n, double penny = 0.01);

unsigned long long int factorial(unsigned long long n) {
    if(n == 0) 
        return 1;
    return n * factorial(n-1);
}


double a_penny_doubled_everyday(int n ,double penny) {
    if(n == 1)
        return penny;
    penny *= 2;
    return a_penny_doubled_everyday(--n, penny);
}

int main() {

    double total_amount  = a_penny_doubled_everyday(25);

    cout <<  "If I start with a penny and doubled it every day for 25 days, I will have $" << setprecision(10) << total_amount;


    // cout << factorial(3) << endl; // 6
    // cout << factorial(8) << endl; // 40320
    // cout << factorial(12) << endl; // 479001600
    // cout << factorial(20) << endl; // 2432902008176640000

    return 0;
}