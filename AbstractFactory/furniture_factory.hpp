#pragma once
#include "abstract_factory.hpp"

class FurnitureFactory : public AbstractFactory {
public:
    Chair* createChair() override;
    Sofa* createSofa() override;
    Table* createTable() override;
};