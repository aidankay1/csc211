/*
3. reverse

Write a program which reads in a string of characters and prints out the same characters in reverse order. For example, if the input is Alright, alright, alright, output must be thgirla ,thgirla ,thgirlA. Note that your program must be case sensitive. Length of the input string: 1 <= n <= 100.
*/

#include <iostream>
#include <string>

int main() {
    std::string str;
    std::getline(std::cin, str);

    for (int i = str.length() - 1; i >= 0; i--) {
        std::cout << str[i];
    }

    std::cout << std::endl;
}
