#include <iostream>

int main(){


    for(int i = 0; i < 4; i++) {
        int slashes = i * 2;
        int exclamation = 14 - slashes * 2;

        for (int j = 0; j < slashes; j++) {
            std::cout << "\\";
        }

        for (int j = 0 ; j < exclamation; j++) {
            std::cout << "!";
        }

        for (int j = 0; j < slashes; j++) {
            std::cout << "/";
        }

        std::cout << std::endl;
    }
}