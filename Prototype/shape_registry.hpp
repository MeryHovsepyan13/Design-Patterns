#ifndef SHAPE_REGISTRY_H
#define SHAPE_REGISTRY_H

#include <map>
#include <string>
#include "shape.hpp"

class ShapeRegistry {
public:
    static void registerShape(const std::string& name, Shape* prototype);
    static Shape* createShape(const std::string& name);

private:
    static std::map<std::string, Shape*> prototypes;
};

#endif 