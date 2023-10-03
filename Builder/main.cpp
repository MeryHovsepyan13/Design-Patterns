#include <iostream>
#include "HouseDirector.hpp"
#include "TownhouseBuilder.hpp"
#include "PenthouseBuilder.hpp"
#include "MansionBuilder.hpp"

int main() {
    Builder* builder;
    HouseDirector director(nullptr);

    // Build and display a Townhouse
    builder = new TownhouseBuilder();
    director = HouseDirector(builder);
    House* townhouse = director.construct();
    std::cout << "Townhouse Details:" << std::endl;
    townhouse->showHouseDetails();
    delete townhouse;

    // Build and display a Penthouse
    builder = new PenthouseBuilder();
    director = HouseDirector(builder);
    House* penthouse = director.construct();
    std::cout << "\nPenthouse Details:" << std::endl;
    penthouse->showHouseDetails();
    delete penthouse;

    // Build and display a Mansion
    builder = new MansionBuilder();
    director = HouseDirector(builder);
    House* mansion = director.construct();
    std::cout << "\nMansion Details:" << std::endl;
    mansion->showHouseDetails();
    delete mansion;

    return 0;
}
