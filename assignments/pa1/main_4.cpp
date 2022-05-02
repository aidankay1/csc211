#include <iostream>
#include <iomanip>
#include <cmath>

// Create a class: https://www.geeksforgeeks.org/c-classes-and-objects/
class Vector {
    public:
        double x, y;
        double length;

        void calculate_length() {
            length = sqrt(pow(x, 2) + pow(y, 2));
        }

        void normalize() {
            x /= length;
            y /= length;
        }
};

int main() {
    Vector v1, v2;
    // Input format: x1 y1 x2 y2
    std::cin >> v1.x;
    std::cin >> v1.y;
    std::cin >> v2.x;
    std::cin >> v2.y;

    v1.calculate_length();
    v2.calculate_length();

    v1.normalize();
    v2.normalize();

    double dot_product = (v1.x * v2.x) + (v1.y * v2.y);
    
    std::string angle;

    if (dot_product > 0) {
        angle = "Acute";
    } else if (dot_product < 0) {
        angle = "Obtuse";
    } else {
        angle = "Perpendicular";
    }

    std::cout << "Length of v1: " << std::fixed << std::setprecision(4) << v1.length << std::endl;
    std::cout << "Length of v2: " << std::fixed << std::setprecision(4) << v2.length << std::endl;
    std::cout << "Their normalized dot product is " << std::fixed << std::setprecision(4) << dot_product
              << " and they are " << angle << std::endl;
}
