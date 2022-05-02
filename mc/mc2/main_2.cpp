#include <iostream>

int main() {
    int n;

    std::cin >> n;

    // Find last digit: https://www.geeksforgeeks.org/find-first-last-digits-number/
    std::string goodness = (n % 10 == 9 || n % 10 == -9) ? "good" : "no good";

    std::cout << n << " is " << goodness << std::endl;
}
