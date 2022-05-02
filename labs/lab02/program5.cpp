#include <iostream>

int main() {
    double a,b,c;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;

    double avg = (a+b+c)/3;

    std::cout << "Average: " << avg;

    return 0;


}