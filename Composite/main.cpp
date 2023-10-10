#include "ImageEditor.hpp"
#include "Dot.hpp"   
#include "Circle.hpp" 

int main() {
    ImageEditor editor;
    editor.load();

    std::vector<Graphic*> selectedComponents;
    selectedComponents.push_back(new Dot(3, 4));
    selectedComponents.push_back(new Circle(7, 8, 15));

    editor.groupSelected(selectedComponents);
    editor.drawAll();

    return 0;
}
