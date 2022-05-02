#include <iostream>

int gcd(int x, int y);

int main() {
    int x = 21, y = 12;
    std::cout << gcd(x, y) << std::endl;
}

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    } else {
        return gcd(y, x % y);
    }
}
