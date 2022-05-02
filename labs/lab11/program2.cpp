#include <iostream>

#include "Car.h"

int main() {
    Car car1("Toyota", "Camry", "Blue", 2002, 160000);
    Car car2("Honda", "Accord", "Silver", 2003, 125000);
    Car car3("Honda", "Accord", "Maroon", 2015, 25000);

    car1.printDetails();
    car2.printDetails();
    car3.printDetails();

    return 0;
}
