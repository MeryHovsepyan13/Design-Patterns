#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "prototype.hpp"

class Rectangle : public Prototype {
public:
    Rectangle(int width, int height);
    Rectangle(const Rectangle& other);
    Shape* clone() const override;
    void draw() const override;

private:
    int width;
    int height;
};

#endif 