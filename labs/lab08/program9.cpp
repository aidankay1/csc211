#include <iostream>

void pyr(int levels, int current_level) {
    if (current_level < levels) {
        for (int i = 0 ; i <= current_level; i++) {
            std::cout << "+";
        }
        std::cout << std::endl;
        pyr(levels, (current_level + 1));
    }
    else if (current_level < (levels * 2) - 1) {
        for (int j = (levels * 2) - 1 ; j > current_level ; j--) {
            std::cout << "+";
        }
        std::cout << std::endl;
        
        pyr(levels, (current_level + 1));
    }
}

int main() {
    pyr(3, 0);
}