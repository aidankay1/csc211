#include <iostream>

int main() {
    
    int input;
    std::cin >> input;
    int i = 0;

    while(i <= input) {
        std::cout << i << " ";
        i++;
    }
    std::cout << std::endl;
    return 0;
}