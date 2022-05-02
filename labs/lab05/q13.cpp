#include <iostream>
#include <cmath>

int size(int n){
    int size = trunc(log10(n)) + 1;
    return size;
}

int main(){
    int n;
    std::cin>>n;
    std::cout<<size(n)<<std::endl;
}

/*
numDigits
tempnumber = n
while (temp > 0)

*/