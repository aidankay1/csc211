/*
Date converter. Prompt the user for three integers representing their birthday in the order <month> <day> <year>. Print the given date as a string on a single line in the following format: <month name> <day>, <year>. 10 3 1997 should output October 3, 1997, 1 1 2000 should output January 1, 2000 etc. If a month does not exist, print out Imaginary month.
*/

#include <iostream>

int main() {
    int month, day, year;
    std::cin >> month >> day >> year;

    std::string month_full = "";

    switch (month) {
        case 1:
            month_full = "January";
            break;
        case 2:
            month_full = "February";
            break;
        case 3:
            month_full = "March";
            break;
        case 4:
            month_full = "April";
            break;
        case 5:
            month_full = "May";
            break;
        case 6:
            month_full = "June";
            break;
        case 7:
            month_full = "July";
            break;
        case 8:
            month_full = "August";
            break;
        case 9:
            month_full = "September";
            break;
        case 10:
            month_full = "October";
            break;
        case 11:
            month_full = "November";
            break;
        case 12:
            month_full = "December";
            break;
        default:
            break;
    }

    if (month_full != "") {
        std::cout << month_full << " " << day << ", " << year << std::endl;
    } else {
        std::cout << "Imaginary month" << std::endl;
    }
}
