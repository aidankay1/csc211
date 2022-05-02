#include "sudoku.h"

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// reads a file containing a sudoku puzzle represented as
// 9 rows, each consisting of 9 comma-separated values
Sudoku::Sudoku(const char *fname) {
    // create a file reader stream to read data from a file
    ifstream infile;

    // will store lines and numbers
    string line, number;

    // index to write value to in puzzle
    int i = 0;

    // open a stream to the given file
    infile.open(fname);

    // get a line of input from the file
    while (getline(infile, line)) {
        // store the line inside a stringstream
        stringstream parser(line);
        // use stringstream to split line along ','
        while (getline(parser, number, ',')) {
            // convert string to an integer, store it, and update iterator
            puzzle[i++] = stoi(number);
        }
    }
    // close the filestream once we are done wiht it
    infile.close();
}

// destruct Sudoku object
Sudoku::~Sudoku() {
    // since we never allocated any memory on the heap, we don't need
    // to define behavior for the deconstructor
}

// this is the funciton call which will be made by the autograder to test
// your implementation for problem 3. It takes no parameters and
// should overwrite the 0s in puzzle to so that it represents a solved puzzle
void Sudoku::solve() {
    // TODO:
    // implement solution to problem 3
    attemptSolutions();
    // This is where your private helper method which does the
    // backtracking should be called
}

bool Sudoku::attemptSolutions() {
    for (int row = 1; row <= 9; row++) {
        for (int col = 1; col <= 9; col++) {
            int cellIndex = ((row - 1) * 9) + (col - 1);
            if (puzzle[cellIndex] == 0) {
                for (int numToTry = 1; numToTry <= 9; numToTry++) {
                    // check if placing this number in the cell would invalidate the board
                    if (isValidPlacement(numToTry, row, col)) {
                        // potential success; update the cell in memory
                        puzzle[cellIndex] = numToTry;
                        // move on to the next cell
                        if (attemptSolutions()) return true;

                        // if we got here, our guess didn't work; reset the cell so we can try again
                        puzzle[cellIndex] = 0;
                    }
                }
                // all numbers 1-9 have been tried in this cell and none of them lead to a valid solution
                return false;
            }
        }
    }
    return true;
}

// this function prints your puzzle in 2D format with commas
// separating your values
void Sudoku::print() {
    for (int i = 0; i < 9; i++) {
        std::cout << puzzle[i * 9];
        int base = i * 9;
        for (int offset = 1; offset < 9; offset++) {
            std::cout << ',' << puzzle[base + offset];
        }
        std::cout << std::endl;
    }
}

bool Sudoku::existsInRow(int n, int row) {
    for (int i = 9 * (row - 1); i < 9 * row; i++) {
        if (puzzle[i] == n) return true;
    }
    return false;
}

bool Sudoku::existsInCol(int n, int col) {
    for (int i = col - 1; i < 81; i += 9) {
        if (puzzle[i] == n) return true;
    }
    return false;
}

bool Sudoku::existsInSquare(int n, int row, int col) {
    // determine top-left cell in the appropriate 3x3 square
    int squareBase = (((row - 1) / 3) * 27) + (((col - 1) / 3) * 3);
    for (int i = 0; i < 3; i++) {
        // determine leftmost cell in the current row of the 3x3 square
        int rowBase = squareBase + (9 * i);
        for (int j = 0; j < 3; j++) {
            // check each cell in current row
            if (puzzle[rowBase + j] == n) return true;
        }
    }
    return false;
}

bool Sudoku::isValidPlacement(int n, int row, int col) {
    return !(existsInRow(n, row) || existsInCol(n, col) || existsInSquare(n, row, col));
}
