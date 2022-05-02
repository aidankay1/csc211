/*
3. sliding_puzzle
*/

#include <iostream>
#include <utility>

std::pair<int, int> find_empty_space_position();
void swap();
void up(), down(), left(), right();
bool is_solved();

int puzzle[3][3];

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> puzzle[i][j];
        }
    }

    char move;
    while (std::cin >> move) {
        switch (move) {
            case 'U':
                up();
                break;
            case 'D':
                down();
                break;
            case 'L':
                left();
                break;
            case 'R':
                right();
                break;
        }
    }

    if (is_solved()) {
        std::cout << "Solution is good!" << '\n';
    } else {
        std::cout << "Wrong solution!" << '\n';
    }
}

std::pair<int, int> find_empty_space_position() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (puzzle[i][j] == 0) {
                return std::make_pair(i, j);
            }
        }
    }
    return std::make_pair(-1, -1);
}

void swap(std::pair<int, int> pos1, std::pair<int, int> pos2) {
    int temp = puzzle[pos1.first][pos1.second];
    puzzle[pos1.first][pos1.second] = puzzle[pos2.first][pos2.second];
    puzzle[pos2.first][pos2.second] = temp;
}

void up() {
    auto empty_space_position = find_empty_space_position();
    if (empty_space_position.first == 0) return;
    auto new_space_position = std::make_pair(empty_space_position.first - 1, empty_space_position.second);
    swap(empty_space_position, new_space_position);
}

void down() {
    auto empty_space_position = find_empty_space_position();
    if (empty_space_position.first == 2) return;
    auto new_space_position = std::make_pair(empty_space_position.first + 1, empty_space_position.second);
    swap(empty_space_position, new_space_position);
}

void left() {
    auto empty_space_position = find_empty_space_position();
    if (empty_space_position.second == 0) return;
    auto new_space_position = std::make_pair(empty_space_position.first, empty_space_position.second - 1);
    swap(empty_space_position, new_space_position);
}

void right() {
    auto empty_space_position = find_empty_space_position();
    if (empty_space_position.second == 2) return;
    auto new_space_position = std::make_pair(empty_space_position.first, empty_space_position.second + 1);
    swap(empty_space_position, new_space_position);
}

bool is_solved() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // If solved correctly, puzzle[2][2] == 0 (the empty space), which would return false if the rest of the loop body runs
            if (i == 2 && j == 2) break;

            if (puzzle[i][j] != (3 * i) + (j + 1)) return false;
        }
    }

    return true;
}
