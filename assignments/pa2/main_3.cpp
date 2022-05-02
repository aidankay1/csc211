/*
3. factorial

Write a program which reads in a single integer 0 <= n < 30 and prints out the factorial of n. Factorials get very big very quickly and can easily exceed the limits of a signed int that uses 4 bytes. If the value of factorial of n is too large to be stored in an int (>2,147,483,647), your program should print Can't handle this.
*/

#include <iostream>

int main() {
    int n;

    std::cin >> n;

    // 13! and greater cannot fit into a signed int
    if (n >= 13) {
        std::cout << "Can't handle this" << std::endl;
        return 0;
    }

    // 0! equals 1, believe it or not
    if (n == 0) {
        std::cout << 1 << std::endl;
        return 0;
    }

    for (int i = n - 1; i > 0; i--) {
        n *= i;
    }

    std::cout << n << std::endl;
}
