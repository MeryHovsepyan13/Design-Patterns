#ifndef MANSION_BUILDER_H
#define MANSION_BUILDER_H

#include "Builder.hpp"

class MansionBuilder : public Builder {
public:
    MansionBuilder();
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