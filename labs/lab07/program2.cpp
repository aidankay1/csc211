#include <iostream>

void countEvens (int arr[], int *a) {
    for (int i = 0 ; i < 6 ; i++) {
        if (arr[i] % 2 == 0) {
            (*a) += 1;
        }
    }
}

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int evens = 0;
    countEvens(arr, &evens);
    int len = sizeof(arr)/sizeof(arr[0]);

    std::cout << evens << std::endl;
}