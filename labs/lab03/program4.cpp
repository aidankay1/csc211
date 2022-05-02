#include <iostream>

int main() {
    char letter;
    std::cout << "Enter a letter: ";
    std::cin >> letter;
    
    if (letter >= 65 && letter <= 90) {
        std::cout << "Upper Case" << std::endl;
    } else if (letter >= 97 && letter <= 122) {
        std::cout << "Lower Case" << std::endl;
    } else {
        std::cout << "Not a Letter" << std::endl;
    }
}
