#include <iostream>

int main() {
    std::cout << "Enter a low, high, and test value" << std::endl;

    int low, high, test;
    std::cin >> low >> high >> test;

    if (low <= test && test <= high) {
        std::cout << "Within range" << std::endl;
    } else {
        std::cout << "Not within range" << std::endl;
    }
}