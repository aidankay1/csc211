/*
5. filter_dups

Write a program that reads an input string and removes all its consecutive duplicates. For example, if the input string is Trrryyyyy Agaiinnnn, the output should be Try Again. Your program must be case-sensitive. Length of the input string: 1 <= n <= 100.
*/

#include <iostream>
#include <string>

void shift_chars(std::string &str, int index);

int main() {
    std::string str;
    std::getline(std::cin, str);

    for (int i = 0; i < str.length() - 1; i++) {
        // Second condition prevents infinite loop caused by repeated null terminators
        while (str[i] == str[i + 1] && str[i] != '\0') {
            shift_chars(str, i);
        }
    }

    std::cout << str << std::endl;
}

// Remove char at index and move all following chars over to fill the gap
void shift_chars(std::string &str, int index) {
    int len = str.length();
    for (int i = index; i < len - 1; i++) {
        str[i] = str[i + 1];
    }
    // Pop off duplicate null terminator (\0)
    str.pop_back();
}
