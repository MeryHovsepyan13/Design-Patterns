#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    virtual Shape* clone() const = 0;
    virtual void draw() const = 0;
    virtual ~Shape() {}
};

#endif 