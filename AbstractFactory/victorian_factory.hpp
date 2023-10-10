#pragma once
#include "abstract_factory.hpp"

class VictorianFactory : public AbstractFactory {
public:
    Chair* createChair() override;
    Sofa* createSofa() override;
    Table* createTable() override;
};