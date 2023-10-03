#include "victorian_factory.hpp"
#include "victorian_chair.hpp"
#include "victorian_sofa.hpp"
#include "victorian_table.hpp"

Chair* VictorianFactory::createChair() {
    return new VictorianChair();
}

Sofa* VictorianFactory::createSofa() {
    return new VictorianSofa();
}

Table* VictorianFactory::createTable() {
    return new VictorianTable();
}