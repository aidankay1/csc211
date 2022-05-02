/*
7. diameter

Write a program that reads a sequence 2D points, and calculates the diameter, which is the largest euclidean distance between any pair of such points. The input will be a sequence of x1 y1 x2 y2 ... xn yn integer values, and the output must be an integer representing the floor of the diameter. The number of 2D points in the sequence can be anything between 1 and 100 (inclusive).
*/

#include <cmath>
#include <iostream>
#include <vector>

int distance(int x1, int y1, int x2, int y2);

int main() {
    std::vector<int> points;

    int x, y;
    while (std::cin >> x) {
        // Coordinates always come in pairs, so two std::cin calls are necessary
        std::cin >> y;
        // Vector methods: https://www.cplusplus.com/reference/vector/vector/push_back/
        points.push_back(x);
        points.push_back(y);
    }

    int diameter = 0;

    for (int i = 0; i < points.size() - 1; i += 2) {
        int x1 = points[i];
        int y1 = points[i + 1];

        for (int j = 0; j < i; j += 2) {
            int x2 = points[j];
            int y2 = points[j + 1];
            int dist = distance(x1, y1, x2, y2);

            if (dist > diameter) {
                diameter = dist;
            }
        }
    }

    std::cout << diameter << std::endl;
}

int distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
