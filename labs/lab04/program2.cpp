
#include <iostream>
#include <iomanip>

int main(){

    int input;


    for (int i = 0; i >=0; i++){
       std::cin >> input;
       if (input == 0) break;
        for (int j = 0 ; j < input ; ++j) {
            std::cout << j << std::endl;
        }

    }

}
