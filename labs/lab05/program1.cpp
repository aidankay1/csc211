#include <iostream>


int add(int a, int b);
int mult(int a, int b);
int exp(int a, int b);

int main() {
    std::cout << exp(2, 6) << std::endl;
}

int exp(int a, int b) {
    //multiply a times a b times
    //return result
    int total = 1;
    for (int i = 0; i < b/2; i++){
        total = total * mult(a,a);
    }
    return total;
}

int mult(int a, int b) {
    //add a to a sum, b times
    //return sum
    int total = 0;
    for (int i = 0; i < b/2; i++){
        total = total + add(a,a);
    }
    return total;
}

int add(int a, int b) {
    int c = a + b;
    //add a to b
    //return result
    return c;
}