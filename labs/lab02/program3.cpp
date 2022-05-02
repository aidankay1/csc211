#include <iostream>

int main() {
    std::string n;
    std::cout << "Input a four-digit number: ";
    std::cin >> n;

    std::cout << "Reversed: ";
    for (int i = 4; i > 0; i--) {
        std::cout << n[i - 1];
    }
    std::cout << std::endl;
}