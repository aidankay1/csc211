#include <iostream>
#include <string>

void bin_str(int n) {
    if (n == 0) return;
    
    for (int i = 0; i <= 1; i++) {
        
        bin_str(n - 1);
        
    }
    std::cout << std::endl;
}

int main() {
    int n = 3;
    bin_str(n);
}
