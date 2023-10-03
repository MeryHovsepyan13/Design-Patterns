#include "shape_registry.hpp"
#include "shape.hpp"
#include "circle.hpp"
#include "rectangle.hpp"

std::map<std::string, Shape*> ShapeRegistry::prototypes;

void ShapeRegistry::registerShape(const std::string& name, Shape* prototype) {
    prototypes[name] = prototype;
}

Shape* ShapeRegistry::createShape(const std::string& name) {
    if (prototypes.find(name) != prototypes.end()) {
        return prototypes[name]->clone();
    }
    return nullptr;
}