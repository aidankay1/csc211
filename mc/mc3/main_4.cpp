/*
Word for number. Prompt the user for a digit [0, 9] and print out the name of that digit as a string. Entering 9 should output Nine, entering 7 should output Seven etc. An number outside of the specified range should print Not a valid number. Use a switch statement for this problem.
*/

#include <iostream>

int main() {
    int digit;

    std::cin >> digit;

    switch (digit) {
        case 0:
            std::cout << "Zero" << std::endl;
            break;
        case 1:
            std::cout << "One" << std::endl;
            break;
        case 2:
            std::cout << "Two" << std::endl;
            break;
        case 3:
            std::cout << "Three" << std::endl;
            break;
        case 4:
            std::cout << "Four" << std::endl;
            break;
        case 5:
            std::cout << "Five" << std::endl;
            break;
        case 6:
            std::cout << "Six" << std::endl;
            break;
        case 7:
            std::cout << "Seven" << std::endl;
            break;
        case 8:
            std::cout << "Eight" << std::endl;
            break;
        case 9:
            std::cout << "Nine" << std::endl;
            break;
        default:
            std::cout << "Not a valid number" << std::endl;
    }
}
