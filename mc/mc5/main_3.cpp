/*
    Day of the week. This program takes in three integers, representing day month year in that order, and should output the day of the week associated with the given date. The formula used to calculate the date is:

Alt text

    day is the day of the month (1, 2, 3, etc.).
    century is equal to (year / 100). For 2019, century would be 20.
    yearpart is the year within the century (year mod 100). For 2019, year would be 19.
    month is the month of the year, we typically associate the months as January = 1, February = 2, March = 3, etc. This is the case for this program for all cases except for January and February. Due to the way the formula works, specifically January and February must be entered into the above formula as months 13 and 14 of the previous year. This is to say that if you wanted to know which day of the week January 5, 1997 fell on, you would need month = 13, day = 5, year = 1996 when the values enter the formula. Your program should take them in as regular format 5 1 1997 and treat them differently once they have been read.
    The value weekday resulting from the equation will be a number [0,6] where Saturday = 0, Sunday = 1, etc.

The output of your program should be a single string name of the appropriate weekday. If the formula outputs 0, your output will be Saturday and so on.
*/

#include <iostream>

int main() {
    int day, month, year;
    std::cin >> day >> month >> year;

    if (month == 1 || month == 2) {
        month += 12;
        year -= 1;
    }

    int century = year / 100;
    int yearpart = year % 100;

    int weekday = (day + (((month + 1) * 26) / 10) + yearpart + (yearpart / 4) + (century / 4) + 5 * century) % 7;

    switch (weekday) {
        case 0:
            std::cout << "Saturday" << std::endl;
            break;
        case 1:
            std::cout << "Sunday" << std::endl;
            break;
        case 2:
            std::cout << "Monday" << std::endl;
            break;
        case 3:
            std::cout << "Tuesday" << std::endl;
            break;
        case 4:
            std::cout << "Wednesday" << std::endl;
            break;
        case 5:
            std::cout << "Thursday" << std::endl;
            break;
        case 6:
            std::cout << "Friday" << std::endl;
            break;
    }
}
