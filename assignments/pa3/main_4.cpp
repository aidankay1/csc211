/*
4. sorted

Write a program which reads a sequence of 0 < n <= 100 integers as input and prints Sorted if the input sequence is sorted in nonincreasing order and Not Sorted otherwise.
*/

#include <iostream>

int main() {
    int n1, n2;
    std::cin >> n1;

    std::string sort_status = "Sorted";

    while (std::cin >> n2) {
        if (n2 > n1) {
            sort_status = "Not Sorted";
            break;
        }
        n1 = n2;
    }

    std::cout << sort_status << std::endl;
}
