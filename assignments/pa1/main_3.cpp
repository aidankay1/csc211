#include <iostream>

int main() {
    std::string str;
    std::cin >> str;

    // `find()` method: https://www.cplusplus.com/reference/string/string/find/
    std::size_t found = str.find("ss");

    // `find()` returns string::npos if there is no match
    // if `found` contains any other value, there is a hiss
    if (found != std::string::npos) {
        std::cout << "hiss" << std::endl;
    } else {
        std::cout << "no hiss" << std::endl;
    }
}
