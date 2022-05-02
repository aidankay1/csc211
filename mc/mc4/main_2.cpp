/*
Smallest number. This program should prompt the user for three integer values, and determine which number is the smallest. The output string should be formatted as follows: The smallest number entered was <number>.
*/

#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    int smallest_number;

    if (a < b && a < c) {
        smallest_number = a;
    } else if (b < a && b < c) {
        smallest_number = b;
    } else {
        smallest_number = c;
    }

    std::cout << "The smallest number entered was " << smallest_number << std::endl;
}
