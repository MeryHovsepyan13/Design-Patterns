#ifndef PENTHOUSE_BUILDER_H
#define PENTHOUSE_BUILDER_H

#include "Builder.hpp"

class PenthouseBuilder : public Builder {
public:
    PenthouseBuilder();
    void buildWalls() override;
    void buildRoof() override;
    void buildFloor() override;
    void addSwimmingPool() override;
    void addGarden() override;
    House* getResult() override;

private:
    House* house;
};

#endif 