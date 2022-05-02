#include <iostream>

int main() {
    int num_days;
    std::cin >> num_days;

    // Set int to largest possible value: https://www.geeksforgeeks.org/int_max-int_min-cc-applications/
    int least_amount_spacejunk = __INT_MAX__;
    int earliest_day_for_launch = 0;

    // Loop over data set, recording the lowest spacejunk value yet and the respective day, if applicable
    for (int i = 0; i < num_days; i++) {
        int amount_spacejunk;
        std::cin >> amount_spacejunk;

        if (amount_spacejunk < least_amount_spacejunk) {
            least_amount_spacejunk = amount_spacejunk;
            earliest_day_for_launch = i;
        }
    }

    std::cout << earliest_day_for_launch << std::endl;
}
