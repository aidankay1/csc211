#include <iomanip>
#include <iostream>

int main() {
    double n1, n2, n3;

    std::cin >> n1;
    std::cin >> n2;
    std::cin >> n3;

    double average = (n1 + n2 + n3) / 3;

    // Decimal precision: https://www.cplusplus.com/reference/iomanip/setprecision/
    std::cout << "The average of " 
              << std::fixed << std::setprecision(4) << n1 << ", "
              << std::fixed << std::setprecision(4) << n2 << ", and "
              << std::fixed << std::setprecision(4) << n3 << " is "
              << std::fixed << std::setprecision(4) << average;
}
