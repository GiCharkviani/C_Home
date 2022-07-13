#include <iostream>
#include <string>
#include <cmath>
#include<ctime>

using namespace std;
void chagneNum(long int &number);
void chagneNum(long int &number, bool change);

void chagneNum(long int &number, bool change) {
    if(change)
        number = 55;
}
void chagneNum(long int &number) {
    chagneNum(number, number >= 200);
}

int main() {
    /* Functions */
    int min {0}, max{500};
    srand(time(nullptr));

    long int randomNumber = rand() % max + min;
    cout << "random number before: " << randomNumber << endl;
    chagneNum(randomNumber);
    cout << "random number after: " << randomNumber << endl;

    return 0;
}