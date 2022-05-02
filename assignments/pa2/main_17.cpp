/*
17. knight_moves

Write a program which will read in a sequence of integers. The first two values (x y) represent the starting location of a knight piece on a chess board, considering the coordinate system displayed in the figure below. The succeeding numbers represent consecutive moves for the knight. Knight moves are encoded as numbers between 0 and 7 inclusive, as shown in the figure.

Knight Moves

Your program should continuously track the location of the knight after each move until there are no more moves to read. Your program should then print out the final location of the knight in the format <x> <y>. If at any point during runtime, the knight is told to move off of the board, your program should print Invalid sequence and terminate.

For example, if the input is 5 5 0 3 5 6, your program would output 3 7. If the input is 5 5 1 2 0 5 4 it would output Invalid sequence, because move 0 would not be possible.

It might be useful to use standard input redirection from files for dealing with this problem (contact your TAs)
*/

#include <iostream>

bool valid_move(int x, int y);
void move(int value, int &x, int &y);

int main() {
    int x, y;

    std::cin >> x >> y;

    int desired_move;
    while (std::cin >> desired_move) {
        move(desired_move, x, y);
        if (!valid_move(x, y)) {
            std::cout << "Invalid sequence" << std::endl;
            return 0;
        }
    }

    std::cout << x << ' ' << y << std::endl;
}

bool valid_move(int x, int y) {
    if (x < 1 || x > 8) {
        return false;
    }

    if (y < 1 || y > 8) {
        return false;
    }

    return true;
}

void move(int value, int &x, int &y) {
    switch (value) {
        case 0:
            x += 2;
            y += 1;
            break;
        case 1:
            x += 2;
            y -= 1;
            break;
        case 2:
            x += 1;
            y -= 2;
            break;
        case 3:
            x -= 1;
            y -= 2;
            break;
        case 4:
            x -= 2;
            y -= 1;
            break;
        case 5:
            x -= 2;
            y += 1;
            break;
        case 6:
            x -= 1;
            y += 2;
            break;
        case 7:
            x += 1;
            y += 2;
            break;
        default:
            break;
    }
}
