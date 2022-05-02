#include <iostream>
#include <string>

bool pali(std::string str) {
    if (str.size() == 1 || str.size() == 0) {
        return true;
    }
    else if (str[0] != str[str.size() - 1]) {
        return false;
    }
    else {
        return pali(str.substr(1, (str.size() - 2)));
    }
}

int main() {
    
    std::string s = "tacocat";
    std::cout << pali(s) << std::endl;
    
}