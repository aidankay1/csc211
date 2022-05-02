#include <iostream>
#include <string>

void permute_str(std::string current, std::string choices) {
   
    
    // swap first and last letters of current
    char hold = choices[2];
    choices[2] = choices[1];
    choices[1] = hold;
    // swap last two letters of choice
    hold = current[0];
    current[0] = current[2];
    current[2] = hold;

    if (current != choices) {
        std::cout << current << std::endl << choices << std::endl;
    }
    if (current.compare(choices) == 0) {
        std::cout << current << std::endl;
        return;
    }
    
    // recursively call, swapping choices and current
    return permute_str(choices, current);
}

int main() {
    std::string str = "123";
    std::cout << str << std::endl;
    permute_str(str, str);

    return 0;
}
