/*
6. suffix_sum

Write a program which reads in two integers 1 <= n <= 10,000 and 1 <= s <= n and returns the sum of the last s elements in the sequence from 1 to n (inclusive). For example, if the input is 20 4 the output would be 74.
*/

#include <iostream>

int main() {
    int base, limit;

    std::cin >> base >> limit;

    int sum = 0;

    for (int i = 0; i < limit; i++) {
        sum += base - i;
    }

    std::cout << sum << std::endl;
}
