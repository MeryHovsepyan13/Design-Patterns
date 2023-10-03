#ifndef HOUSE_DIRECTOR_H
#define HOUSE_DIRECTOR_H

#include "Builder.hpp"

class HouseDirector {
public:
    HouseDirector(Builder* builder);
    House* construct();

private:
    Builder* builder_;
};

#endif 