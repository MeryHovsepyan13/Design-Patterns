#ifndef LOGISTICS_H
#define LOGISTICS_H

#include "transport.hpp"

class Logistics {
public:
    virtual Transport* createTransport() = 0;
    virtual ~Logistics() {}
};

#endif 