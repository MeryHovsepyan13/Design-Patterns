#pragma once
#include "RoundPeg.hpp"
#include "SquarePeg.hpp"

class SquarePegAdapter : public RoundPeg {
public:
    SquarePegAdapter(SquarePeg* squarePeg);
    double getRadius();

private:
    SquarePeg* squarePeg;
};