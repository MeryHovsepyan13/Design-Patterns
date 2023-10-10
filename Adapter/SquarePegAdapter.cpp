#include "SquarePegAdapter.hpp"
#include <cmath> 

SquarePegAdapter::SquarePegAdapter(SquarePeg* squarePeg) : squarePeg(squarePeg), RoundPeg(squarePeg->getWidth() * sqrt(2) / 2) {}

double SquarePegAdapter::getRadius() {
    return RoundPeg::getRadius();
}