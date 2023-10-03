#include "logistics.hpp"
#include "road_logistics.hpp"
#include "sea_logistics.hpp"
#include "transport.hpp"
#include <iostream>

int main() {
    // Create Road Logistics
    Logistics* roadLogistics = new RoadLogistics();
    Transport* truck = roadLogistics->createTransport();
    truck->deliver();
    delete truck;
    delete roadLogistics;

    // Create Sea Logistics
    Logistics* seaLogistics = new SeaLogistics();
    Transport* ship = seaLogistics->createTransport();
    ship->deliver();
    delete ship;
    delete seaLogistics;

    return 0;
}