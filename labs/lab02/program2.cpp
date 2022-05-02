#include <iostream>

int main() {
    double cost;
    double tax;
    std::cout << "Item cost: ";
    std::cin >> cost;
    tax = (cost * 1.07) - cost;
    cost = cost + tax;
    std::cout << "Final Cost = " << cost;
    return 0;
}