/*
Temperature converter. This program should prompt the user for two arguments, first a decimal number and second, a single letter, either C or F. The decimal represents a temperature, the character represents which system that degree is in (50.0 F would be 50.0 degrees Fahrenheit etc.). This program should take the given number and convert it to a temperature in the other system. The output string format should be <input num> degree(s) <input system> is equal to <new num> degree(s) <other system>. Eg. input 0 C would give the string 0.0000 degree(s) C is equal to 32.0000 degree(s) F. You can assume that either F or C will be given for input, no need to account for invalid input.
*/

#include <iomanip>
#include <iostream>

int main() {
    const double NINE_FIFTHS = static_cast<double>(9)/5;
    const double FIVE_NINTHS = static_cast<double>(5)/9;

    double temp;
    char format;
    std::cin >> temp >> format;

    double converted_temp;
    char converted_format;

    switch (format) {
        case 'F':
            converted_temp = (temp - 32) * FIVE_NINTHS;
            converted_format = 'C';
            break;
        case 'C':
            converted_temp = (temp * NINE_FIFTHS) + 32;
            converted_format = 'F';
            break;
    }

    std::cout << std::fixed << std::setprecision(4) << temp << " degree(s) " << format << " is equal to " << std::fixed << std::setprecision(4) << converted_temp << " degree(s) " << converted_format << std::endl;
}
