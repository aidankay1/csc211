/*
16. circular_prime

A number is called a circular prime if all rotations of its digits form a prime. For example, the number 197 is a circular prime because all possible rotations of its digits: [197, 971, 719] are prime numbers. Write a program that reads in an integer 1 <= n <= 10^6 as input and prints True if n is a circular prime and False otherwise.
*/

#include <iostream>
#include <cmath>

bool is_prime(int n);
int num_length(int n);
int rotate(int n, int length);

int main() {
    int n;

    std::cin >> n;

    bool is_circular_prime = true;

    for (int i = 0; i < num_length(n); i++) {
        if (!is_prime(n)) {
            is_circular_prime = false;
            break;
        }
        n = rotate(n, num_length(n));
    }

    if (is_circular_prime) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
}

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int num_length(int n) {
    int length = 0;

    while (n > 0) {
        length++;
        n /= 10;
    }

    return length;
}

int rotate(int n, int length) {
    if (length == 1) {
        return n;
    }
    
    int final_digit = n % 10;
    n /= 10;
    n += final_digit * pow(10, length - 1);

    return n;
}
