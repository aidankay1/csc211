#include <iostream>

int main(){
    int number;
    std::cout << "Enter your number: ";
    std::cin >> number;

    bool prime = true;

    if (number <= 1) {
        std::cout << "Not prime: " << std::cout;
        return 0;
    }

    for (int i = number - 1; i > 1; i--) {
        if (number % i == 0) {
            prime = false;
            break;
        }
    }

    if (prime) {
        std::cout << "Prime" << std::endl;
    }
    else {
        std::cout << "Not prime" << std::endl;
    }

    return 0;
}