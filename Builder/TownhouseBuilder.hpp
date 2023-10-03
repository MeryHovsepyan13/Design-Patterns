#ifndef TOWNHOUSE_BUILDER_H
#define TOWNHOUSE_BUILDER_H

#include "Builder.hpp"

class TownhouseBuilder : public Builder {
public:
    TownhouseBuilder();
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