#pragma once

class Graphic {
public:
    virtual void move(int x, int y) = 0;
    virtual void draw() = 0;
};