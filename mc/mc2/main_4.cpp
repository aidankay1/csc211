#include <iostream>

int main() {
    int n;

    std::cin >> n;

    std::string sign;

    if (n > 0) {
        sign = "positive";
    } else if (n < 0) {
        sign = "negative";
    } else {
        sign = "neither positive nor negative";
    }

    std::cout << n << " is " << sign << std::endl;
}
