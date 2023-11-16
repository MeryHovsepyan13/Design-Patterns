#ifndef CONTAINER_HPP
#define CONTAINER_HPP

#include "Component.hpp"
#include <vector>

class Container : public Component {
protected:
    std::vector<Component*> children;

public:
    void add(Component* child);
};

#endif 
