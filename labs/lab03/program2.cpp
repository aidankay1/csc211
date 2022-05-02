#include <iostream>

int main() {
    
    int speed;
    std::cout << "Enter your current speed: " << std::endl;
    std::cin >> speed;
    
    if (speed < 50) {
        std::cout << "Safe" << std::endl;
    }
    else if (speed <= 55) {
        std::cout << "Pushing your luck" << std::endl;
    }
    else {
        std::cout << "Speeding" << std::endl;
    }
    
    return 0;
}