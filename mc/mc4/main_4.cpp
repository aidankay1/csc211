/*
Is it cold out? A student from Rhode Island is visiting Germany but doesn't understand Celsius very well. They want to be able to tell whether it is cold out or not without going outside, so they write a program to tell them how cold it is. This program should take a decimal number representing Celsius as input and determine its Fahrenheit equivalent. If the F temperature is less than or equal to 32 degrees, the program should print It is cold out, if the temp is (32, 65], the program should print Wear a jacket, if it is above 65, print It is nice out.
*/

#include <iostream>

int main() {
    double celsius;
    std::cin >> celsius;

    double fahrenheit = (celsius * 9/5) + 32;

    if (fahrenheit <= 32) {
        std::cout << "It is cold out" << std::endl;
    } else if (fahrenheit > 32 && fahrenheit <= 65) {
        std::cout << "Wear a jacket" << std::endl;
    } else {
        std::cout << "It is nice out" << std::endl;
    }
}
