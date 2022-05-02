/*
1. draw_triangle_1

Write a program which reads a single integer 0 < n < 20 as input and prints out a left-justified triangle. For example, if n = 4, output would be:

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
        for (int j = 0; j < i; j++) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}
