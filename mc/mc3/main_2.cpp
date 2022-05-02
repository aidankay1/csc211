/*
Larger than 100 and multiple of 8. Prompt the user for an integer value. If the number is both a multiple of 8 and is larger than 100, the single line <number> satisfies the criteria should be printed. If the number does not satisfy both criteria, print out <number> does not satisfy the criteria
*/

#include <iostream>

int main() {
    int n;

    std::cin >> n;

    if (n % 8 == 0 && n > 100) {
        std::cout << n << " satisfies the criteria" << std::endl;
    } else {
        std::cout << n << " does not satisfy the criteria" << std::endl;
    }
}
