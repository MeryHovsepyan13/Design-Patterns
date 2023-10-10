#include "HouseDirector.hpp"

HouseDirector::HouseDirector(Builder* builder) : builder_(builder) {}

House* HouseDirector::construct() {
    builder_->buildWalls();
    builder_->buildRoof();
    builder_->buildFloor();
    builder_->addSwimmingPool();
    builder_->addGarden();

    return builder_->getResult();
}
