/*
9. same_gmail

Create a program that reads in two strings separated by a whitespace, which are two valid gmail addresses. Your program should print True if both addresses map to the same gmail address and False otherwise. According to gmail:

    addresses are not case sensitive
    dots don't matter, and
    any '+' before the '@' and all characters after the '+' and before the '@' are ignored

For example, "csc...2.1.1@gmail.com", "csc211@gmail.com", "CSC.211.@gmail.com", "CSC211@GMail.Com", "csc211+announce@gmail.com", "csc.211+fall-2019@gmail.com" are all the same, i.e. if e-mails are sent to those addresses, they will reach the same gmail account.
*/

#include <iostream>
#include <string>

std::string to_lower(std::string str);
std::string remove_char(std::string str, char c);
std::string remove_subaddress(std::string str);
bool has_appeared_yet(char c, std::string str, int index);

int main() {
    std::string email_1, email_2;
    std::cin >> email_1 >> email_2;

    email_1 = remove_subaddress(remove_char(to_lower(email_1), '.'));
    email_2 = remove_subaddress(remove_char(to_lower(email_2), '.'));

    if (email_1.compare(email_2) == 0) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }
}

std::string to_lower(std::string str) {
    for (auto &c : str) {
        if ('A' <= c && c <= 'Z') {
            c += 32;
        }
    }

    return str;
}

// Remove every appearance of a char before the '@' symbol
std::string remove_char(std::string str, char c) {
    for (int i = 0; i < str.length() - 1; i++) {
        if (has_appeared_yet('@', str, i)) {
            break;
        }

        while (str[i] == c) {
            str.erase(i, 1);
        }
    }

    return str;
}

// Remove all characters between '+' (inclusive) and '@'
std::string remove_subaddress(std::string str) {
    for (int i = 0; i < str.length() - 1; i++) {
        if (str[i] == '+') {
            while (str[i] != '@') {
                str.erase(i, 1);
            }
            break;
        }
    }

    return str;
}

// Determine whether a character has appeared before or at a certain index in a string
bool has_appeared_yet(char c, std::string str, int index) {
    for (int i = 0; i <= index; i++) {
        if (str[i] == c) {
            return true;
        }
    }

    return false;
}
