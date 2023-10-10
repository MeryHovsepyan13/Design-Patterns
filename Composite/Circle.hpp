#pragma once
#include "Dot.hpp"

class Circle : public Dot {
private:
    int radius;

public:
    Circle(int x, int y, int radius);

    void draw() override;
};