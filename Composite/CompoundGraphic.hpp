#pragma once
#include "Graphic.hpp"
#include <vector>

class CompoundGraphic : public Graphic {
private:
    std::vector<Graphic*> children;

public:
    void add(Graphic* child);
    void remove(Graphic* child);
    void move(int x, int y) override;
    void draw() override;
};