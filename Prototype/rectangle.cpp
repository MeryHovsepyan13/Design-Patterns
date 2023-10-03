#include "rectangle.hpp"
#include <iostream>

Rectangle::Rectangle(int width, int height) : width(width), height(height) {}

Rectangle::Rectangle(const Rectangle& other) : width(other.width), height(other.height) {}

Shape* Rectangle::clone() const {
    return new Rectangle(*this);
}

void Rectangle::draw() const {
    std::cout << "Drawing a rectangle with width " << width << " and height " << height << std::endl;
}