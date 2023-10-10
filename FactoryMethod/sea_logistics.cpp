#include "sea_logistics.hpp"

Transport* SeaLogistics::createTransport() {
    return new Ship();
}