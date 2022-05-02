/*
8. unique

Write a program that reads a string of characters and prints out the number of unique characters in the array. For example if the input is CSC 211 c++, the output should be 7, as there are 7 unique characters CS 21c+. Length of the input string: 1 <= n <= 100.
*/

#include <iostream>
#include <vector>

bool seen_before(char given_char, std::vector<char> vec);

int main() {
    std::string str;
    std::getline(std::cin, str);

    std::vector<char> unique_chars;

    for (auto &c : str) {
        if (!seen_before(c, unique_chars)) {
            unique_chars.push_back(c);
        }
    }

    std::cout << unique_chars.size() << std::endl;
}

bool seen_before(char given_char, std::vector<char> vec) {
    for (auto &c : vec) {
        if (given_char == c) {
            return true;
        }
    }
    return false;
}
