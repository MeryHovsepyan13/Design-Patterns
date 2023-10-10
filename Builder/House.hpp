#ifndef HOUSE_H
#define HOUSE_H

#include <string>

class House {
public:
    void setWalls(const std::string& walls);
    void setRoof(const std::string& roof);
    void setFloor(const std::string& floor);
    void setSwimmingPool(bool hasSwimmingPool);
    void setGarden(bool hasGarden);

    void showHouseDetails() const;

private:
    std::string walls_;
    std::string roof_;
    std::string floor_;
    bool hasSwimmingPool_;
    bool hasGarden_;
};

#endif 