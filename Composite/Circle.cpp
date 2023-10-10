#include "Circle.hpp"
#include <iostream>

Circle::Circle(int x, int y, int radius) : Dot(x, y), radius(radius) {}

void Circle::draw() {
    std::cout << "Drawing a Circle at (" << x << ", " << y << ") with radius " << radius << std::endl;
}