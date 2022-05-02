#include <iostream>

int main(){

    const int rows = 4;

    for (int i = 0; i < rows; i++){
        // print spaces
        int spaces = (rows - i) - 1;
        for (int j = 0; j < spaces; j++) {
            std::cout << ' ';
        }

        // numbers left of center
        int mid = (i * 2) + 1;
        for (int j = i + 1; j < mid; j++) {
            std::cout << j;
        }

        // center number
        std::cout << mid;


        // numbers right of center
        for (int j = mid - 1; j > i; j--) {
            std::cout << j;
        }

        std::cout << std::endl;
    }




}