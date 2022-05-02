// Aidan Kelly, Connor Montague, William Dowden, Tyler Puglia

#include <iostream>

class MyString {
   private:
    char *str;
    int length;

   public:
    // Default constructor; Should store an empty string.
    MyString() {
        length = 0;
    }

    // Copy constructor; Copy the contents of the input string into the class's data member.
    MyString(const char *input) {
        for (int i = 0; input[i] != '\0'; i++) {
            length = i + 1;
        }

        str = new char[length];

        for (int i = 0; i < length; i++) {
            str[i] = input[i];
        }
    }

    // Destructor; Should deallocate any dynamically allocated memory that the class uses.
    ~MyString() {
        delete[] str;
    }

    void print_str() {
        for (int i = 0; i < length; i++) {
            std::cout << str[i];
        }
        std::cout << std::endl;
    }

    // Returns the length of string. This is the number of characters in the string,
    // excluding the null terminator.
    unsigned int len() {
        return length;
    }

    // Sets the character at the given index to the character provided
    void set(int idx, char c) {
        str[idx] = c;
    }

    // Returns the character at the given index.
    char get(int idx) {
        return str[idx];
    }

    // Returns a pointer to a character array of the object's string.
    const char *c_str() {
        return str;
    }

    // Reverse the string. "hello" should turn into "olleh".
    // If you would like a challenge try to do it in-place (cannot create another array).
    void reverse() {
        char temp;
        for (int i = 0; i < length / 2; i++) {
            temp = str[i];
            str[i] = str[length - 1 - i];
            str[length - 1 - i] = temp;
        }
    };

    // Find the first occurrence of this character, and return the index.
    // Return `-1` if it can't be found.
    int find_first(char c) {
        for (int i = 0; i < length; i++) {
            if (str[i] == c) {
                return i;
            }
        }
        return -1;
    }

    // Find the first occurrence of the input string.
    // Return the index of the starting character.
    // Return the `-1` if it can't be found.
    int find_first(const char *input) {
        for (int i = 0; i < length; i++) {
            if (str[i] == input[0]) {
                for (int j = 1; input[j] != '\0'; j++) {
                    if (input[j] != str[i + j]) break;
                    if (input[j + 1] == '\0') return i;
                }
            }
        }
        return -1;
    }

    // Find the last occurrence of this character, and return the index.
    // Return the `-1` if it can't be found.
    int find_last(char c) {
        for (int i = length - 1; i >= 0; i--) {
            if (str[i] == c) {
                return i;
            }
        }
        return -1;
    }

    // Find the last occurrence of the input string.
    // Return the index of the starting character.
    // Return the `-1` if it can't be found.
    int find_last(const char *input) {
        for (int i = length - 1; i >= 0; i--) {
            if (str[i] == input[0]) {
                for (int j = 1; input[j] != '\0'; j++) {
                    if (input[j] != str[i + j]) break;
                    if (input[j + 1] == '\0') return i;
                }
            }
        }
        return -1;
    }

    // Return true if the str stored is equivalent to the given string
    // Return false if they are not the same
    bool compare(const char *input) {
        for (int i = 0; i < length; i++) {
            if (str[i] == input[i]) {
                continue;
            } else {
                return false;
            }
        }
        return true;
    };

    // Append a single character onto the end of the string.
    void append(char c) {
        char* temp_str = new char[length + 1];

        for (int i = 0; i < length; i++) {
            temp_str[i] = str[i];
        }

        temp_str[length] = c;

        delete[] str;
        str = temp_str;

        length++;
    }

    // Concatenate the input string to the object's string.
    void append(const char *);

    // Overload the '[]' operator to fuction as we expect
    //  Ex. MyString("Hello")[2] == 'l'
    char operator[](const unsigned int index) const;

    // Overload the '+' operator to concatenate two strings together
    MyString operator+(const MyString str2) const;

    // Overload the '*' operator to return the string concatenated on itself x times
    // Ex. "Hello" * 3 == "HelloHelloHello"
    MyString operator*(const int x) const;
};
