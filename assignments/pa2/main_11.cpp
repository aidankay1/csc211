/*
11. char_pyramid

Write a program that reads a single character 'A' <= ch <= 'Z' as input and prints out a pyramid of characters starting at A until it reaches the pyramid's base and stops. See examples below for input values of ch = 'A' and ch = 'C' respectively.

A

    A
  A B A
A B C B A

        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A
*/

#include <iostream>

int main() {
    char c;
    std::cin >> c;

    // 65 is the ASCII value of 'A'
    // Any uppercase char - 64 = # of rows
    const int rows = c - 64;
    const int ascii_offset = 65;
    const int base_size = (2 * rows) - 1;

    for (int row = 0; row < rows; row++) {
        // Print padding spaces
        int padding_length = base_size - ((2 * row) + 1);
        for (int i = 0; i < padding_length; i++) {
            std::cout << ' ';
        }

        // Calculate middle char
        char mid = ascii_offset + row;

        // Print all chars from A to middle
        for (int i = 0; i < row; i++) {
            std::cout << static_cast<char>(i + ascii_offset);
            std::cout << ' ';
        }

        // Print middle char
        std::cout << mid;

        // Print all chars from middle to A
        for (int i = row; i > 0; i--) {
            std::cout << ' ';
            std::cout << static_cast<char>((i - 1) + ascii_offset);
        }

        std::cout << std::endl;
    }
}
