/*
4. k_nearest_neighbors
*/

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

struct Point {
    double x, y;
    char classification;
    double distance_from_unclassified;
};

double distance(double x1, double y1, double x2, double y2);

std::vector<Point> graph;

int main() {
    int total_points, num_neighbors;
    std::cin >> total_points >> num_neighbors;

    for (int i = 0; i < total_points; i++) {
        Point point;
        std::cin >> point.x;
        std::cin >> point.y;
        std::cin >> point.classification;
        graph.push_back(point);
    }

    Point unclassified;
    std::cin >> unclassified.x;
    std::cin >> unclassified.y;

    for (auto &point : graph) {
        point.distance_from_unclassified = distance(point.x, point.y, unclassified.x, unclassified.y);
    }

    auto sorted_points = graph;
    // Lambda functions: https://docs.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp?view=msvc-170
    std::sort(sorted_points.begin(),
              sorted_points.end(),
              [](Point p1, Point p2) { return p1.distance_from_unclassified < p2.distance_from_unclassified; });

    int r_count = 0, b_count = 0;

    for (int i = 0; i < num_neighbors; i++) {
        if (sorted_points[i].classification == 'R') {
            r_count++;
        } else {
            b_count++;
        }
    }

    if (r_count > b_count) {
        std::cout << 'R' << '\n';
    } else {
        std::cout << 'B' << '\n';
    }
}

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
