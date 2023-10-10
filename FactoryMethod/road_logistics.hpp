#ifndef ROAD_LOGISTICS_H
#define ROAD_LOGISTICS_H

#include "logistics.hpp"
#include "truck.hpp"

class RoadLogistics : public Logistics {
public:
    Transport* createTransport() override;
};

#endif 