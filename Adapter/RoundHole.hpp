#pragma once

class RoundPeg; 

class RoundHole {
public:
    RoundHole(double radius);
    bool fits(RoundPeg* peg);

private:
    double radius;
};