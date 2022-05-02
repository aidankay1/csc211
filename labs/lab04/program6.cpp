#include <iostream>

int main(){

    for (int i = 1; i <= 7; i += 2) {
        for (int j = 0; j < i; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }

}