#include <iostream>

void all_to(char str[], bool caps) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (caps && str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
        if (!caps && str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
}

int main() {

    char stringy_lad[] = "HeLlO wOrLd";
    all_to(stringy_lad, true);
    std::cout << stringy_lad << std::endl;
    all_to(stringy_lad, false);
    std::cout << stringy_lad << std::endl;
    
    return 0;
}