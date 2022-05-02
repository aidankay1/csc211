/*
Which quadrant. In mathematics, 2-dimensional cartesian systems can be segmented into four quadrants, depending on whether x and y are positive and negative. For example, (1.0,1.0) falls in Quadrant 1. This program should take an x and y coordinate from the user in that order, then output which quadrant that point falls into, in the format: Quadrant 1, Quadrant 2 etc. If the point falls on the x-axis or the y-axis, print No quadrant. Use double for the coordinate points in this problem.
*/

#include <iostream>

int main() {
    double x, y;
    std::cin >> x >> y;

    int quadrant = 0;

    if (x > 0 && y > 0) {
        quadrant = 1;
    } else if (x < 0 && y > 0) {
        quadrant = 2;
    } else if (x < 0 && y < 0) {
        quadrant = 3;
    } else if (x > 0 && y < 0) {
        quadrant = 4;
    }

    std::cout << "Quadrant " << quadrant << std::endl;
}
