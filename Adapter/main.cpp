#include <iostream>
#include "RoundHole.hpp"
#include "RoundPeg.hpp"
#include "SquarePeg.hpp"
#include "SquarePegAdapter.hpp"

int main() {
    RoundHole hole(5.0);
    RoundPeg peg1(4.0);
    SquarePeg peg2(4.0);
    SquarePegAdapter adapter(&peg2);

    if (hole.fits(&peg1)) {
        std::cout << "Round peg fits into round hole." << std::endl;
    } else {
        std::cout << "Round peg does not fit into round hole." << std::endl;
    }

    if (hole.fits(&adapter)) {
        std::cout << "Square peg fits into round hole after adaptation." << std::endl;
    } else {
        std::cout << "Square peg does not fit into round hole after adaptation." << std::endl;
    }

    return 0;
}