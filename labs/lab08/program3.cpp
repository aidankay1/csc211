#include <iostream>

void print_rev_arr(int * arr, int n) {
    if (n == 0) return;
    std::cout << arr[n - 1] << std::endl;
    print_rev_arr(arr, n - 1);
}

int main() {
    int length = 5;
    int arr[length] = {1, 2, 3, 4, 5};
    print_rev_arr(arr, length);
}