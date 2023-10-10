#include "CompoundGraphic.hpp"

void CompoundGraphic::add(Graphic* child) {
    children.push_back(child);
}

void CompoundGraphic::remove(Graphic* child) {
    
}

void CompoundGraphic::move(int x, int y) {
    for (Graphic* child : children) {
        child->move(x, y);
    }
}

void CompoundGraphic::draw() {
    for (Graphic* child : children) {
        child->draw();
    }
}