#ifndef PROTOTYPE_H
#define PROTOTYPE_H

#include "shape.hpp"

class Prototype : public Shape {
public:
    Prototype() {}
    Prototype(const Prototype& other) {}
    virtual Shape* clone() const = 0;
};

#endif 