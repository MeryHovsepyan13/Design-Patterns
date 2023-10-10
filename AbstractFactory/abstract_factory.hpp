#pragma once

class Chair;
class Sofa;
class Table;

class AbstractFactory {
public:
    virtual Chair* createChair() = 0;
    virtual Sofa* createSofa() = 0;
    virtual Table* createTable() = 0;
};