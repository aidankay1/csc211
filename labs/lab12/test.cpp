/*

*/
#include "MyString.hpp"
#include <iostream>

int main() {
    // char* input_string = "he"
    // MyString s = "MyString"

    MyString *str = new MyString("Hehehe");
    str->print_str();
    str->append('c');
    str->print_str();
    delete str;
}
