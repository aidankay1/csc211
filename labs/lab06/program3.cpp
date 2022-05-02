#include <iostream>

unsigned int string_len(char str[]) {
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }

    return length;
}

bool palindrome(char str[]) {
    bool isPalindrome = true;
    int len = string_len(str);
    for (int i = 0 ; i < (len / 2) ; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    return isPalindrome;
}

int main() {

    char test[] = "Hello";
    std::cout << palindrome(test) << std::endl;

    return 0;
}