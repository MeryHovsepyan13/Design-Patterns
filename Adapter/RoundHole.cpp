#include "RoundHole.hpp"
#include "RoundPeg.hpp"

RoundHole::RoundHole(double radius) : radius(radius) {}

bool RoundHole::fits(RoundPeg* peg) {
    return radius >= peg->getRadius();
}