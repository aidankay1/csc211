#include <iostream>
#include <cmath>

int reverse(int n) {
    int tempNum = n;
    int tempDigit = 0;
    int tempDigits = n;
    int numDigits = 0;
    int reverse_n = 0;

    while(tempDigits > 0) {
        tempDigits /= 10;
        numDigits++;
    }

    for (int i = numDigits - 1 ; i >= 0 ; i--) {
        tempDigit = tempNum % 10;
        reverse_n += tempDigit * pow(10, i);
        tempNum /= 10;
    }
    return reverse_n;
}

int main() {

    int n;
    std::cin >> n;
    std::cout << reverse(n) << std::endl;

    return 0;
}