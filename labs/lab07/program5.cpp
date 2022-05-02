#include <iostream>

int main(){

    int n;
    std::cin >> n;

    int *data = new int[n];

    for (int i = 0; i < n ; i++) {
        std::cin >> data[i];
    }

    int *max = data;
    for (int i = 0 ; i < n ; i++) {
        if (data[i] > *max) {
            max = &data[i];
        }
    }

    std::cout << *max << std::endl;
    delete[] data;
    return 0;
}