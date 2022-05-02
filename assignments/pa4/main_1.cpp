/*
1. sudoku_checker
*/

#include <iostream>
#include <set>

void fill_board(int board[9][9]);
bool valid_rows(int board[9][9]);
bool valid_columns(int board[9][9]);
bool valid_blocks(int board[9][9]);

int main() {
    int board[9][9];
    fill_board(board);
    if (valid_rows(board) && valid_columns(board) && valid_blocks(board)) {
        std::cout << "Solution is good!" << '\n';
    } else {
        std::cout << "Wrong solution!" << '\n';
    }
}

void fill_board(int board[9][9]) {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            std::cin >> board[row][col];
        }
    }
}

bool valid_rows(int board[9][9]) {
    for (int row = 0; row < 9; row++) {
        std::set<int> values;
        for (int col = 0; col < 9; col++) {
            values.insert(board[row][col]);
        }
        if (values.size() != 9) return false;
    }
    return true;
}

bool valid_columns(int board[9][9]) {
    for (int col = 0; col < 9; col++) {
        std::set<int> values;
        for (int row = 0; row < 9; row++) {
            values.insert(board[row][col]);
        }
        if (values.size() != 9) return false;
    }
    return true;
}

bool valid_blocks(int board[9][9]) {
    for (int row = 0; row < 9; row += 3) {
        for (int col = 0; col < 9; col += 3) {
            std::set<int> values;
            for (int block_row = 0; block_row < 3; block_row++) {
                for (int block_col = 0; block_col < 3; block_col++) {
                    values.insert(board[row + block_row][col + block_col]);
                }
            }
            if (values.size() != 9) return false;
        }
    }
    return true;
}
