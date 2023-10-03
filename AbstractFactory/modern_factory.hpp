#pragma once
#include "abstract_factory.hpp"

class ModernFactory : public AbstractFactory {
public:
    Chair* createChair() override;
    Sofa* createSofa() override;
    Table* createTable() override;
};