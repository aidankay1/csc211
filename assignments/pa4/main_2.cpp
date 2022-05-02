/*
2. game_of_life
*/

#include <iostream>
#include <vector>

#include "Cell.hpp"

typedef std::vector<std::vector<Cell>> CellMatrix;

void fill_grid(CellMatrix &grid, int rows, int columns);
void produce_next_generation(CellMatrix &grid);
void print_grid(CellMatrix grid);

int main() {
    int rows, columns, generations;
    std::cin >> rows >> columns >> generations;

    CellMatrix grid;
    fill_grid(grid, rows, columns);

    for (int i = 0; i < generations; i++) {
        produce_next_generation(grid);
    }

    print_grid(grid);
}

void fill_grid(CellMatrix &grid, int rows, int columns) {
    for (int row = 0; row < rows; row++) {
        std::vector<Cell> row_vec;
        for (int col = 0; col < columns; col++) {
            char status;
            std::cin >> status;
            Cell cell = Cell(col, row, status == '*' ? true : false);
            row_vec.push_back(cell);
        }
        grid.push_back(row_vec);
    }
}

void produce_next_generation(CellMatrix &grid) {
    // Determines whether each cell lives/dies then updates them accordingly for the next generation
    // Doing both in the same loop would cause the grid to update incorrectly
    for (auto &row : grid) {
        for (auto &cell : row) {
            cell.determine_life_status(grid);
        }
    }

    for (auto &row : grid) {
        for (auto &cell : row) {
            cell.update_life_status();
        }
    }
}

void print_grid(CellMatrix grid) {
    int rows = grid.size();
    int cols = grid[0].size();

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            if (grid[row][col].is_alive) {
                std::cout << '*';
            } else {
                std::cout << '.';
            }

            // Print separator only if not at the last column
            // Trailing whitespace not allowed in autograder
            if (col != cols - 1) {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }
}
