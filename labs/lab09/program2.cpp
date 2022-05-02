/*
We can use a recursive function to build a solution incrementally. This is known as Backtracking, and is a common way to utilize recursion. The idea is to attempt a large number of solutions, and throw out those that don't yield a correct solution. A simple program we'll illustrate and you can attempt is the Coin Change problem. The function will accept an amount of change, and an array of allowed coin values, and yield the # of ways there are to make the correct change.

Since we stated we attempt solutions and throw those that don't satisfy the problem constraints, we can phrase the question as "What combination of coins evenly combine to make our total?" But since we are incrementally building the solution, we can rephrase this to "Given I still have n change to calculate, what combination of coins sum to make n?"
*/

#include <algorithm>
#include <iostream>
#include <vector>

void calculate_change(int change, std::vector<int> coins, std::vector<int> current_combo);

std::vector<std::vector<int>> valid_combos = {};

int main() {
    int change = 12;
    std::vector<int> coins = {10, 5, 1};

    calculate_change(change, coins, std::vector<int>());
    std::cout << valid_combos.size() << std::endl;
}

void calculate_change(int change, std::vector<int> coins, std::vector<int> current_combo) {
    for (auto &coin : coins) {
        // Assume this coin will generate a solution
        current_combo.push_back(coin);
        int remaining_change = change - coin;
        if (remaining_change < 0) {
            // This coin is too big; throw this attempt out
            current_combo.pop_back();
            continue;
        }
        if (remaining_change == 0) {
            // We have found a solution!
            // Create sorted copy of this solution, in descending order
            auto sorted_current_combo = current_combo;
            std::sort(sorted_current_combo.begin(), sorted_current_combo.end(), std::greater<int>());
            // Record solution only if it doesn't already exist
            if (std::find(valid_combos.begin(), valid_combos.end(), sorted_current_combo) == valid_combos.end()) {
                valid_combos.push_back(sorted_current_combo);
            }
            current_combo.pop_back();
            continue;
        }
        // Recursively calculate solutions if we still have leftover change
        calculate_change(remaining_change, coins, current_combo);
        current_combo.pop_back();
        // No matter which route we take, we remove the last element and continue instead of returning
        // This allows us to calculate further solutions using the coins we already have
    }
}
