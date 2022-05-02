#include <iostream>

void print_arr(int * arr, int n){
    if (n == 5) {
        return;
    }
    else {
        std::cout << arr[n] << std::endl;
        print_arr(arr, n + 1);
    }
}


int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    
    print_arr(arr, 0);
    
}