/*
5. prime

Write a program which reads in an integer 0 < n <= 1,000,000,000 and prints True if the value is a prime number and False if it is not.
*/

#include <iostream>

int main() {
    int n;
    bool is_prime = true;
    
    std::cin >> n;

    if (n <= 1) {
        is_prime = false;
    }
    
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }

    if (is_prime) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
}
