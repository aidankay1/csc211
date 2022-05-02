

// Constructs a point object with X, Y, Z properties

// Sets the X, Y, and Z properties of a point Object

// Gets the X, Y, and Z properties from a point Object

// Returns a cartesian coordinate representation of a point Object
//  aka = (x,y,z)

// Calculates the Euclidean Distance of two points
// double euDistance(Point p2);

#include <cmath>
#include <string>

class Point {
   private:
    int x;
    int y;
    int z;

   public:
    Point(int someX, int someY, int someZ) : x(someX), y(someY), z(someZ) {}

    int getX() { return x; }
    int getY() { return y; }
    int getZ() { return z; }

    void setX(int someX) { x = someX; }
    void setY(int someY) { y = someY; }
    void setZ(int someZ) { z = someZ; }

    std::string toCord() {
        return "(" + std::to_string(x) + ", " + std::to_string(y) + ", " +
               std::to_string(z) + ")";
    }

    double euDist(Point p2) {
        return sqrt(pow((p2.x - x), 2) + pow((p2.y - y), 2) +
                    pow((p2.z - z), 2));
    }
};
