#ifndef BUILDER_H
#define BUILDER_H

#include "House.hpp"

class Builder {
public:
    virtual void buildWalls() = 0;
    virtual void buildRoof() = 0;
    virtual void buildFloor() = 0;
    virtual void addSwimmingPool() = 0;
    virtual void addGarden() = 0;
    virtual House* getResult() = 0;
};

#endif 