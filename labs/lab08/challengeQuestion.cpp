#include <iostream>

const int length = 4;

int changeSolutions (int amount, int* coins) {
    int solutions = 0;
    if (amount == 0) 
        solutions += 1;
        return solutions;
    if (amount < 0) 
        return solutions;
    }
    for (int i = 0; i < length; i++) {
            return solutions + changeSolutions(amount - coins[i], coins);
        }
}

int main() {
    int coins[length] = {1, 5, 10, 25};
    std::cout << changeSolutions(10, coins) << std::endl;
}