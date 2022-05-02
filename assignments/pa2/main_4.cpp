/*
4. pow

Write a program which reads in an integer -15 < n < 15 and an integer 0 < k < 10 and prints the value of n to the power of k. Cannot use the built-in function pow.
*/

#include <iostream>

int main() {
    int base, power;

    std::cin >> base >> power;
    long int result = base;

    if (power == 0) {
        std::cout << 1 << std::endl;
        return 0;
    }
    
    for (int i = 1; i < power; i++) {
        result *= base;
    }

    std::cout << result << std::endl;
}
