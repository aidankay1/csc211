/*
2. draw_triangle_2

Write a program which reads a single integer 0 < n < 20 as input and prints out a right-justified triangle. For example, if n = 4, output would be:

   *
  **
 ***
****
*/

#include <iostream>

int main() {
    int n;

    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        // No. of spaces to print for each line: total lines - current line no.
        for (int j = 0; j < (n - i); j++) {
            std::cout << ' ';
        }

        // Rest of line is filled with *'s
        for (int j = 0; j < i; j++) {
            std::cout << '*';
        }

        std::cout << std::endl;
    }
}
