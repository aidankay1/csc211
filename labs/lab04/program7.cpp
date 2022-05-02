#include <iostream>

int main(){

    const int rows = 4;
    const int base = 7;
    const int center = base - (base / 2);

    for(int i = 1; i <= rows; i++) {
        for (int j = 1 ; j <= base; j++) {
            if(j <= center - i || j >= center + i) {
               std::cout << " "; 
            }
            else {
                std::cout<< "*";
            }
        }
        std::cout << std::endl;
    }
}