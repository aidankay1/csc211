#include <iostream>

void insertion_sort(int arr[], int len) {
    for (int i = 1; i < len; i++) {
        int j = i;

        while (j >= 1 && arr[j] < arr[j - 1]) {
            int tmp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = tmp;
            j--;
        }
    }
}

int findMin(int arr[], int len) {
    int temp = 5000000;
    for (int i = 0; i <= len; i++) {
        if (arr[i] < temp) {
            temp = arr[i];
        }
    }
    return temp;
}

int findMaxIndex(int arr[], int len) {
    int ind = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] > arr[ind]) {
            ind = i;
        }
    }
    return ind;
}

double calculateMedian(int arr[], int len) {
    double median = 0;
    if (len % 2 == 0) {
        median = 0.5 * (arr[len / 2] + arr[len / 2 - 1]);
    } else if (len % 2 != 0) {
        median = arr[len / 2];
    }
    return median;
}

void replace(int arr[], int len, int x, int n) {
    for (int i = 0; i < len; i++) {
        if (arr[i] == x) {
            arr[i] = n;
        }
    }
}

void doubleEvens(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] *= 2;
        }
    }
}

void multiModify(int arr[], int len) {
    for (int i = 0; i < len; i++) {
        if (arr[i] % 3 == 0 && arr[i] % 2 == 0) {
            arr[i] *= 6;
        } else if (arr[i] % 3 == 0) {
            arr[i] *= 3;
        } else if (arr[i] % 2 == 0) {
            arr[i] *= 2;
        } else {
            continue;
        }
    }
}

void split(int original[], int len) {
    int evensCount = 0, oddsCount = 0;
    int OGlen = sizeof(original) / sizeof(original[0]);
    for (int i = 0; i < OGlen; i++) {
        if (original[i] % 2 == 0) {
            evensCount++;
        } else {
            oddCount++;
        }
    }

    int evens[evensCount];
    int odds[oddsCount];

    evensCount = 0;
    oddsCount = 0;

    for (int i = 0; i < OGlen; i++) {
        if (original[i] % 2 == 0) {
            evens[evensCount] = original[i];
            evensCount++;
        } else {
            odds[oddsCount] = original[i];
            oddsCount++;
        }
    }
}

int main() {
    int arr[] = {4, 12, 6, 9, 3, 0};
    // std::cout << findMin(arr, 6) << std::endl;
    // std::cout << findMaxIndex(arr, 6) << std::endl;
    // insertion_sort(arr, 6);
    // std::cout << calculateMedian(arr, 6) << std::endl;
    // replace(arr, 6, 6, 500);
    // doubleEvens(arr, 6);
    // multiModify(arr, 6);
    /* for (int i = 0; i < 6; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl; */

    return 0;
}
