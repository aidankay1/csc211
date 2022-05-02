/*
2. palindrome

Write a program that reads in a string of characters and prints out True if the string is palindrome and False, otherwise. A palindrome is a string that reads the same backward and forward. For example: Tacocat. Your program must not be case-sensitive. Length of the input string: 1 <= n <= 100.
*/

#include <iostream>
#include <string>

std::string to_lower(std::string str);

int main() {
    std::string phrase;
    std::getline(std::cin, phrase);

    phrase = to_lower(phrase);
    int length = phrase.length();

    std::string is_palindrome = "True";

    for (int i = 0; i < length / 2; i++) {
        if (phrase[i] != phrase[(length - 1) - i]) {
            is_palindrome = "False";
            break;
        }
    }

    std::cout << is_palindrome << std::endl;
}

std::string to_lower(std::string str) {
    // Traverse string using auto: https://www.geeksforgeeks.org/iterate-over-characters-of-a-string-in-c/
    for (auto &c : str) {
        if ('A' <= c && c <= 'Z') {
            c += 32;
        }
    }

    return str;
}
