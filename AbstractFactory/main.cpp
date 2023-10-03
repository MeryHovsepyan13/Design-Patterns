#include "abstract_factory.hpp"
#include "modern_factory.hpp"
#include "victorian_factory.hpp"
#include "chair.hpp"
#include "sofa.hpp"
#include "table.hpp"
#include <iostream>

void useFurniture(AbstractFactory* factory) {
    Chair* chair = factory->createChair();
    Sofa* sofa = factory->createSofa();
    Table* table = factory->createTable();

    chair->sitOn();
    sofa->lieOn();
    table->place();

    delete chair;
    delete sofa;
    delete table;
}

int main() {
    // Create a modern furniture factory
    AbstractFactory* modernFactory = new ModernFactory();
    std::cout << "Using Modern Furniture:" << std::endl;
    useFurniture(modernFactory);

    // Create a Victorian furniture factory
    AbstractFactory* victorianFactory = new VictorianFactory();
    std::cout << "\nUsing Victorian Furniture:" << std::endl;
    useFurniture(victorianFactory);

    delete modernFactory;
    delete victorianFactory;

    return 0;
}