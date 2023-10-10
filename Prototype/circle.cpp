#include "circle.hpp"
#include <iostream>

Circle::Circle(int radius) : radius(radius) {}

Circle::Circle(const Circle& other) : radius(other.radius) {}

Shape* Circle::clone() const {
    return new Circle(*this);
}

void Circle::draw() const {
    std::cout << "Drawing a circle with radius " << radius << std::endl;
}