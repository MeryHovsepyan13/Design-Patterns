#ifndef TRUCK_H
#define TRUCK_H

#include "transport.hpp"

class Truck : public Transport {
public:
    void deliver() override;
};

#endif 