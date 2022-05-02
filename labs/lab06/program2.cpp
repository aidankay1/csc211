#include <iostream>

void replace(char str[], char a, char b) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == a) {
            str[i] = b;
        }
        i++;
    }
}

int main() {
    char str[] = "Hello world";
    replace(str, 'o', '0');
    std::cout << str << std::endl;
}