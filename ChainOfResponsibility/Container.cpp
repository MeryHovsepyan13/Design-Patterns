#include "Container.hpp"

void Container::add(Component* child) {
    children.push_back(child);
    child->setContainer(this);
}
