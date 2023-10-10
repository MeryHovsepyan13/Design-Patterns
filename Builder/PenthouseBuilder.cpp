#include "PenthouseBuilder.hpp"

PenthouseBuilder::PenthouseBuilder() {
    house = new House();
}

void PenthouseBuilder::buildWalls() {
    house->setWalls("Glass Walls");
}

void PenthouseBuilder::buildRoof() {
    house->setRoof("Glass Roof");
}

void PenthouseBuilder::buildFloor() {
    house->setFloor("Marble Floor");
}

void PenthouseBuilder::addSwimmingPool() {
    house->setSwimmingPool(true);
}

void PenthouseBuilder::addGarden() {
    house->setGarden(false);
}

House* PenthouseBuilder::getResult() {
    return house;
}
