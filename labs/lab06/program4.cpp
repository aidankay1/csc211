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

void reverse(char str[]) {
    int len = string_len(str);
    char temp;
    for (int i = 0 ; i < (len / 2) ; i++) {
        temp = str[len - i - 1];
        str[len - i - 1] = str[i];
        str[i] = temp;
    }
}


int main() {

    char my_string[] = "abcdefghijklmnopqrstuvwxyz";
    reverse(my_string);
    std::cout << my_string << std::endl;

    return 0;
}