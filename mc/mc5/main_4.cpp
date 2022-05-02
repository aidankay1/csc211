/*
Triangles. This program should take as arguments, three interior angles of a triangle (for simplicity we will take only integer values for angles), it should classify the triangle as one of the three types of triangles (Acute, Right, and Obtuse) and print that label to the console as output. Additionally, if the triangle given is impossible (sum of interior angles does not equal 180) the program should not print any labels, and should instead print This triangle is impossible.
*/

#include <iostream>

int main() {
    int a1, a2, a3;
    std::cin >> a1 >> a2 >> a3;

    if (a1 + a2 + a3 != 180) {
        std::cout << "This triangle is impossible" << std::endl;
        return 0;
    }

    // Triangle classification by angles: https://www.ck12.org/c/geometry/classify-triangles-by-angle-measurement/lesson/Triangle-Classification-by-Angles-MSM6/
    if (a1 == 90 || a2 == 90 || a3 == 90) {
        std::cout << "Right" << std::endl;
    } else if (a1 > 90 || a2 > 90 || a3 > 90) {
        std::cout << "Obtuse" << std::endl;
    } else {
        std::cout << "Acute" << std::endl;
    }
}
