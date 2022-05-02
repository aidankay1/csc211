/*
Privileges. This program should prompt the user for an integer representing age, then output one of the following: Too young for an age under 16; Can drive for those in the interval [16, 18); Can join the military [18, 21) and finally Can have a beer for ages greater than or equal to 21.
*/

#include <iostream>

int main() {
    int age;

    std::cin >> age;

    if (age < 16) {
        std::cout << "Too young" << std::endl;
    } else if (age >= 16 && age < 18) {
        std::cout << "Can drive" << std::endl;
    } else if (age >= 18 && age < 21) {
        std::cout << "Can join the military" << std::endl;
    } else {
        std::cout << "Can have a beer" << std::endl;
    }
}
