#ifndef SHIP_H
#define SHIP_H

#include "transport.hpp"

class Ship : public Transport {
public:
    void deliver() override;
};

#endif 