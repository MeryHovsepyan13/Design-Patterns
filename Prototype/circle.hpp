#ifndef CIRCLE_H
#define CIRCLE_H

#include "prototype.hpp"

class Circle : public Prototype {
public:
    Circle(int radius);
    Circle(const Circle& other);
    Shape* clone() const override;
    void draw() const override;

private:
    int radius;
};

#endif 