#include <iostream>

int main() {
    int n;

    std::cin >> n;

    std::string parity = (n % 2 == 0) ? "even" : "odd";

    std::cout << n << " is " << parity << std::endl;
}
