/*
12. rgb_to_hex

Write a program which reads in three integers r, g, b representing RGB values ranging from 0 to 255 (inclusive) and prints out their hexadecimal representation. For example, if the input is 245 13 0 the output would be #F50D00.
*/

#include <iostream>

void dec_to_hex(int dec);

int main() {
    int r, g, b;
    std::cin >> r >> g >> b;

    std::cout << '#';
    dec_to_hex(r);
    dec_to_hex(g);
    dec_to_hex(b);
    std::cout << std::endl;
}

void dec_to_hex(int dec) {
    int remainder;
    char first_digit, second_digit;

    if (dec >= 16) {
        remainder = dec % 16;
        second_digit = remainder >= 10 ? static_cast<char>(remainder + 55) : static_cast<char>(remainder + 48);

        dec /= 16;

        remainder = dec % 16;
        first_digit = remainder >= 10 ? static_cast<char>(remainder + 55) : static_cast<char>(remainder + 48);

        std::cout << first_digit << second_digit;
    } else {
        remainder = dec % 16;
        second_digit = remainder >= 10 ? static_cast<char>(remainder + 55) : static_cast<char>(remainder + 48);

        first_digit = '0';

        std::cout << first_digit << second_digit;
    }
}
