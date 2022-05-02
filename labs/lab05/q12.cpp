#include <iostream>
#include <cmath>

int decimal_to_binary(int n);

int main() {
    int n = 128;
    std::cout << decimal_to_binary(n) << std::endl;
}

int decimal_to_binary(int n) {
    int binary = 0;
    int i = 0;
    while (n > 0) {
        int remainder = n % 2;
        binary += remainder * pow(10, i);
        n /= 2;
        i++;
    }
    return binary;
}