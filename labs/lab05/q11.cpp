#include <iostream>

int triple_value(int a, int b, int c) {
    int tripleValue = b;
    if (a % 2 == 0) {
        for (int i = b + 1 ; i <= c ; i++) {
            tripleValue += i;
        }
    }
    else {
        for (int i = b + 1 ; i <= c ; i++) {
            tripleValue *= i;
        }
    }
    return tripleValue;
}

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << triple_value(a, b, c) << std::endl;
    return 0;
}