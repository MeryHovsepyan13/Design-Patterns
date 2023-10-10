#pragma once
#include "CompoundGraphic.hpp"
#include <vector>

class ImageEditor {
private:
    CompoundGraphic* all;

public:
    ImageEditor();
    void load();
    void groupSelected(std::vector<Graphic*> components);
    void drawAll();
};