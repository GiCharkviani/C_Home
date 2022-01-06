#include <iostream>

using namespace std;
unsigned long long int fibonacci(unsigned long long n);

unsigned long long int fibonacci(unsigned long long n) {
    if(n <= 1)
        return n; // basecases
    return fibonacci(n-1)+fibonacci(n-2); // recursion
}

int main() {
    cout << fibonacci(5) << endl; // 5
    cout << fibonacci(30) << endl; // 832040
    cout << fibonacci(40) << endl; // 102334155
    
    return 0;
}