#include <iostream>

unsigned int fact(int n){
    if(n == 1){
        return 1;
    }
    else{
        return fact(n - 1) * n;
    }
}

int main(){
    std::cout << fact(5) << std::endl;
}