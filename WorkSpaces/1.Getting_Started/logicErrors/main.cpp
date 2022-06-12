#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    if(age > 16) {
        std::cout << "You can vote!" << std::endl;
    } else {
        std::cout << "You can not vote!" << std::endl;
    }
    return 0;
}