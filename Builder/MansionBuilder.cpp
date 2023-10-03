#include "MansionBuilder.hpp"

MansionBuilder::MansionBuilder() {
    house = new House();
}

void MansionBuilder::buildWalls() {
    house->setWalls("Stone Walls");
}

void MansionBuilder::buildRoof() {
    house->setRoof("Tiled Roof");
}

void MansionBuilder::buildFloor() {
    house->setFloor("Marble Floor");
}

void MansionBuilder::addSwimmingPool() {
    house->setSwimmingPool(true);
}

void MansionBuilder::addGarden() {
    house->setGarden(true);
}

House* MansionBuilder::getResult() {
    return house;
}