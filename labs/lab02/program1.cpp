#include <iostream>
#include <cmath>

int main() {
    double a,b,c;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;

    double x1 = ((-b) + sqrt(pow(b, 2)-(4*a*c)))/(2*a);
    double x2 = ((-b) - sqrt(pow(b, 2)-(4*a*c)))/(2*a);

    std::cout << "x1 = " << x1 << std::endl;
    std::cout << "x2 = " << x2 << std::endl;
    return 0;
}