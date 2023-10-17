#ifndef DATASOURCE_HPP
#define DATASOURCE_HPP

#include <string>

class DataSource {
public:
    virtual void writeData(const std::string& data) = 0;
    virtual std::string readData() = 0;
};

#endif 
