/*
10. hostname

Write a program that will read a string that contains a valid URL and will output its respective lower-case hostname (sometimes referred as subdomain/domain). For example, if the input is "https://WWW.cs.uri.edu/homepage/class/csc211?year=2019&m=10", then the resulting value should be "www.cs.uri.edu". You will need to read what is a URL? before starting your implementation.
*/

#include <iostream>

char to_lower(char c);

int main() {
    std::string url;
    std::getline(std::cin, url);

    std::string hostname = "";

    for (int i = 2; i < url.length(); i++) {
        if (!(url[i - 2] == '/' && url[i - 1] == '/')) {
            continue;
        }

        for (int j = i; j < url.length(); j++) {
            if (url[j] == '/' ||
                url[j] == ':' ||
                url[j] == '?' ||
                url[j] == '#') {
                break;
            }
            hostname += to_lower(url[j]);
        }

        break;
    }

    std::cout << hostname << std::endl;
}

char to_lower(char c) {
    if ('A' <= c && c <= 'Z') {
        c += 32;
    }

    return c;
}
