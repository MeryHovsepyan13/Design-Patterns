#include "modern_factory.hpp"
#include "modern_chair.hpp"
#include "modern_sofa.hpp"
#include "modern_table.hpp"

Chair* ModernFactory::createChair() {
    return new ModernChair();
}

Sofa* ModernFactory::createSofa() {
    return new ModernSofa();
}

Table* ModernFactory::createTable() {
    return new ModernTable();
}