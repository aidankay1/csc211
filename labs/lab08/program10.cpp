#include <iostream>

const int length = 5;

bool is_sorted(int* arr, int n) {
    if (n == length) {
        return true;
    }
    else if (arr[n] > arr[n + 1]) {
        return false;
    }
    else {
        return is_sorted(arr, n + 1);
    }
}

int main() {
    int arr[length] = {1, 3, 6, 87, 1000};
    std::cout << is_sorted(arr, 0) << std::endl;
}