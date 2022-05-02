#include <iostream>

void bubble_sort(int arr[], int len) {
    for (int i = len - 1; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[i]) {
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
}

void selection_sort(int arr[], int len) {
    for (int i = 1; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (arr[j] < arr[i]) {
                int tmp = arr[j];
                arr[j] = arr[i];
                arr[i] = tmp;
            }
        }
    }
}

void insertion_sort(int arr[], int len) {
    for (int i = 1; i < len; i++) {
        int  j = i;

        while (j >= 1 && arr[j] < arr[j - 1]) {
            int tmp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = tmp;
            j--;
        }
    }
}

void print_array(int arr[], int len) {
    for (int i = 0; i < len; i++)
        std::cout << arr[i] << ' ';
    std::cout << '\n';
}

int main() {
    int my_array[] = {2, 13, 6, 9, 3, 10, 8, 1, 5, 11};
    int len = 10;

    print_array(my_array, len);
    insertion_sort(my_array, len);
    print_array(my_array, len);
}
