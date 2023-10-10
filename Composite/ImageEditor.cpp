#include "ImageEditor.hpp"
#include "Dot.hpp"
#include "Circle.hpp"
#include <iostream>

ImageEditor::ImageEditor() : all(new CompoundGraphic()) {}

void ImageEditor::load() {
    all->add(new Dot(1, 2));
    all->add(new Circle(5, 3, 10));
}

void ImageEditor::groupSelected(std::vector<Graphic*> components) {
    CompoundGraphic* group = new CompoundGraphic();
    for (Graphic* component : components) {
        group->add(component);
    }
    all->remove(group); 
    all->add(group);
}

void ImageEditor::drawAll() {
    all->draw();
}