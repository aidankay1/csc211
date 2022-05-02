/*
7. sum_even

Write a program that reads an integer 0 < n < 2^32, returns the sum of all digits in n that are divisible by 2. For example, if n = 341238 the output would be 14, because it is the sum of 4 + 2 + 8. Hint: a signed int may not be enough.
*/

#include <iostream>

int main() {
    unsigned int n;

    std::cin >> n;

    int sum = 0;

    while (n > 0) {
        int last_digit = n % 10;
        if (last_digit % 2 == 0) {
            sum += last_digit;
        }
        n /= 10;
    }

    std::cout << sum << std::endl;
}
