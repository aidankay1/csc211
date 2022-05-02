#include <iostream>

unsigned int string_len(char str[]) {
    int length = 0;
    int i = 0;
    while (str[i] != '\0') {
        length++;
        i++;
    }
    return length;
}

int main() {

    char str[] = "test";
    std::cout << string_len(str) << "\n";

    return 0;
}