#pragma once
#include "Graphic.hpp"

class Dot : public Graphic {
protected: 
    int x, y;

public:
    Dot(int x, int y);

    void move(int x, int y) override;
    void draw() override;
};