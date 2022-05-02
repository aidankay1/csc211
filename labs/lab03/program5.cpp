#include <iostream>

int main() {
    
    int n;
    std::cout << "Please enter a number: ";
    std::cin >> n;
    
    if (n % 2 == 0) {
        std::cout << "13";
    }
    else {
        std::cout << "2";
    }
    if (n % 3 == 0) {
        std::cout << "4";
    }
    
    std::cout << std::endl;
    
    return 0;
}