#include <iostream>

int sum(int* arr, int n) {
    if (n == 0) {
        return arr[n];
    }
    else {
        return arr[n] + sum(arr, n - 1);
    }
}

int main() {
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    std::cout << sum(arr, n - 1) << std::endl;
}