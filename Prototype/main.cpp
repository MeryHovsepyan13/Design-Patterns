#include <iostream>
#include "shape_registry.hpp"
#include "circle.hpp"
#include "rectangle.hpp"

int main() {
    ShapeRegistry::registerShape("Circle", new Circle(5));
    ShapeRegistry::registerShape("Rectangle", new Rectangle(4, 6));

    Shape* shape1 = ShapeRegistry::createShape("Circle");
    Shape* shape2 = ShapeRegistry::createShape("Rectangle");

    if (shape1) shape1->draw();
    if (shape2) shape2->draw();

    delete shape1;
    delete shape2;

    return 0;
}