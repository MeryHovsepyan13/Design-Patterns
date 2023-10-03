#ifndef SEA_LOGISTICS_H
#define SEA_LOGISTICS_H

#include "logistics.hpp"
#include "ship.hpp"

class SeaLogistics : public Logistics {
public:
    Transport* createTransport() override;
};

#endif 