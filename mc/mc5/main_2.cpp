/*
Grades. This program should prompt the user for a single character as an argument, this character should represent a letter grade. The program should print a single-line string for each different grade.
*/

#include <iostream>

int main() {
    char letter_grade;
    std::cin >> letter_grade;

    if ('a' <= letter_grade && letter_grade <= 'z') {
        letter_grade -= 32;
    }

    switch (letter_grade) {
        case 'A':
            std::cout << "Excellent" << std::endl;
            break;
        case 'B':
            std::cout << "Good" << std::endl;
            break;
        case 'C':
            std::cout << "Average" << std::endl;
            break;
        case 'D':
            std::cout << "Poor" << std::endl;
            break;
        case 'F':
            std::cout << "Failing" << std::endl;
            break;
    }
}
