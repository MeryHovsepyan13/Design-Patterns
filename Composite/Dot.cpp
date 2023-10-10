#include "Dot.hpp"
#include <iostream>

Dot::Dot(int x, int y) : x(x), y(y) {}

void Dot::move(int x, int y) {
    this->x += x;
    this->y += y;
}

void Dot::draw() {
    std::cout << "Drawing a Dot at (" << x << ", " << y << ")" << std::endl;
}