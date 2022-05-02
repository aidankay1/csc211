#include <iostream>

int sum_digits (int n) {
    if (n < 10) {
        return n;
    }
    else {
        int b = n % 10;
        return b + sum_digits(n / 10);
    }
}

int main() {
    std::cout << sum_digits(111) << std::endl;
}