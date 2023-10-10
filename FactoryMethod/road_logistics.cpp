#include "road_logistics.hpp"

Transport* RoadLogistics::createTransport() {
    return new Truck();
}