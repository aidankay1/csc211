#include <iostream>

void square (int *a) {
    (*a) *= *a;
}

int main() {
    int n = 4;
    square(&n);

    std::cout << n << std::endl;
}