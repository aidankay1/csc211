/*
13. armstrong

Write a program that reads in an integer 0 < n <= 10^9 as input and checks whether n is an armstrong number or not. An armstrong number is a number that is equal to the sum of its own digits raised to the power of the number of digits. For example 1634 is an armstrong number, since 1^4 + 6^4 + 3^4 + 4^4 = 1634. Your program will print True if n is an armstrong number, and False otherwise.
*/

#include <iostream>
#include <cmath>

int num_length(int n);
int armstrong_sum(int n, int length);

int main() {
    int n;

    std::cin >> n;

    int length = num_length(n);

    int sum = armstrong_sum(n, length);

    if (sum == n) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
}

int num_length(int n) {
    int length = 0;

    while (n > 0) {
        length++;
        n /= 10;
    }

    return length;
}

int armstrong_sum(int n, int length) {
    int sum = 0;

    while (n > 0) {
        int digit = n % 10;
        sum += pow(digit, length);
        n /= 10;
    }

    return sum;
}
