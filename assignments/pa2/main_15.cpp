/*
15. a_lovely_rug

Write a program which reads in an integer 0 < n <= 10 prints out this nice rug pattern. See examples below for input values of n = 2, n = 3, and n = 4 respectively.

#========#
|  <><>  |
|<>....<>|
|<>....<>|
|  <><>  |
#========#

#============#
|    <><>    |
|  <>....<>  |
|<>........<>|
|<>........<>|
|  <>....<>  |
|    <><>    |
#============#

#================#
|      <><>      |
|    <>....<>    |
|  <>........<>  |
|<>............<>|
|<>............<>|
|  <>........<>  |
|    <>....<>    |
|      <><>      |
#================#
*/

#include <iostream>

void print_char(char c, int times);

int main() {
    int half_height;

    std::cin >> half_height;

    // Print top border
    std::cout << '#';
    print_char('=', 4 * half_height);
    std::cout << '#';
    std::cout << std::endl;

    // Print top half
    for (int row = 0; row < half_height; row++) {
        std::cout << '|';
        print_char(' ', (half_height - (row + 1)) * 2);
        std::cout << "<>";
        print_char('.', 4 * row);
        std::cout << "<>";
        print_char(' ', (half_height - (row + 1)) * 2);
        std::cout << '|';
        std::cout << std::endl;
    }

    // Print bottom half
    for (int row = half_height - 1; row >= 0; row--) {
        std::cout << '|';
        print_char(' ', (half_height - (row + 1)) * 2);
        std::cout << "<>";
        print_char('.', 4 * row);
        std::cout << "<>";
        print_char(' ', (half_height - (row + 1)) * 2);
        std::cout << '|';
        std::cout << std::endl;
    }

    // Print bottom border
    std::cout << '#';
    print_char('=', 4 * half_height);
    std::cout << '#';
    std::cout << std::endl;
}

void print_char(char c, int times) {
    for (int i = 0; i < times; i++) {
        std::cout << c;
    }
}
