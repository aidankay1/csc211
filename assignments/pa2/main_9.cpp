/*
9. draw_triangle_3

Write a program which reads in three integers a, b, c, such that 0 < {a, b, c} <= 20 and a <= b. The program should print the + character a times, then a + c times, then a + c + c times, and so on. This pattern should repeat while the line is at most b characters long. At that point, the pattern is repeated backwards. For example input 4 7 1 will output:

++++
+++++
++++++
+++++++
+++++++
++++++
+++++
++++
*/

#include <iostream>

int main() {
    int min, max, step;
    std::cin >> min >> max >> step;

    int i;
    
    // Print top half of triangle
    for (i = min; i <= max; i += step) {
        for (int j = 0; j < i; j++) {
            std::cout << '+';
        }
        std::cout << std::endl;
    }

    i -= step;

    // Print lower half of triangle
    for (i; i >= min; i -= step) {
        for (int j = 0; j < i; j++) {
            std::cout << '+';
        }
        std::cout << std::endl;
    }
}
