#include "House.hpp"
#include <iostream>

void House::setWalls(const std::string& walls) {
    walls_ = walls;
}

void House::setRoof(const std::string& roof) {
    roof_ = roof;
}

void House::setFloor(const std::string& floor) {
    floor_ = floor;
}

void House::setSwimmingPool(bool hasSwimmingPool) {
    hasSwimmingPool_ = hasSwimmingPool;
}

void House::setGarden(bool hasGarden) {
    hasGarden_ = hasGarden;
}

void House::showHouseDetails() const {
    std::cout << "Walls: " << walls_ << std::endl;
    std::cout << "Roof: " << roof_ << std::endl;
    std::cout << "Floor: " << floor_ << std::endl;
    std::cout << "Has Swimming Pool: " << (hasSwimmingPool_ ? "Yes" : "No") << std::endl;
    std::cout << "Has Garden: " << (hasGarden_ ? "Yes" : "No") << std::endl;
}
