/*
8. x_of_stars

Write a program that reads in an integer 0 < n < 10 as input and prints out an X of that height made of * characters. If the input is not an odd number, it should print Sorry, not odd. See examples below for input values of n = 3 and n = 5 respectively.

* *
 *
* *

*   *
 * *
  *
 * *
*   *
*/

#include <iostream>

int main() {
    int height;

    std::cin >> height;

    // Only works for odd-numbered heights
    if (height % 2 == 0) {
        std::cout << "Sorry, not odd" << std::endl;
        return 0;
    }

    int padding_length;

    // Print top half
    for (int width = height; width > 1; width -= 2) {
        padding_length = (height - width) / 2;
        for (int i = 0; i < padding_length; i++) {
            std::cout << ' ';
        }

        std::cout << '*';

        padding_length = width - 2;
        for (int i = 0; i < padding_length; i++) {
            std::cout << ' ';
        }

        std::cout << '*';
        std::cout << std::endl;
    }

    // Print bottom half (including middle)
    for (int width = 1; width <= height; width += 2) {
        padding_length = (height - width) / 2;
        for (int i = 0; i < padding_length; i++) {
            std::cout << ' ';
        }

        std::cout << '*';

        padding_length = width - 2;
        for (int i = 0; i < padding_length; i++) {
            std::cout << ' ';
        }

        // Don't print another * if this is the middle row
        if (width != 1) {
            std::cout << '*';
        }

        std::cout << std::endl;
    }
}
