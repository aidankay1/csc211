#include <iostream>

void remove(char str[], char a) {
    int index = 0;
    for (int i = 0; str[i] != a; i++) {
        index++;
    }
    
    for (int i = index; str[i] != '\0'; i++) {
        str[i] = str[i + 1];
    }
}

int main() {
  
  char myStr[] = "Hello world";
  remove(myStr, 'e');
  std::cout << myStr << std::endl;
  
  return 0;  
}