/*
6. str_hash

Write a program that reads a string as input and prints its hash value. The hash value for this problem is defined as the sum of all characters in the string, in fact, the sum of their ascii values. Length of the input string: 1 <= n <= 100.
*/

#include <iostream>

int main() {
    std::string str;
    std::getline(std::cin, str);

    int hash = 0;

    for (auto &ch : str) {
        hash += ch;
    }

    std::cout << hash << std::endl;
}
