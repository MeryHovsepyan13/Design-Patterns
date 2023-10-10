#include "TownhouseBuilder.hpp"

TownhouseBuilder::TownhouseBuilder() {
    house = new House();
}

void TownhouseBuilder::buildWalls() {
    house->setWalls("Brick Walls");
}

void TownhouseBuilder::buildRoof() {
    house->setRoof("Flat Roof");
}

void TownhouseBuilder::buildFloor() {
    house->setFloor("Hardwood Floor");
}

void TownhouseBuilder::addSwimmingPool() {
    house->setSwimmingPool(false);
}

void TownhouseBuilder::addGarden() {
    house->setGarden(false);
}

House* TownhouseBuilder::getResult() {
    return house;
}
