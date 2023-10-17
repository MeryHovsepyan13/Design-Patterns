#ifndef DATASOURCEDECORATOR_HPP
#define DATASOURCEDECORATOR_HPP

#include "DataSource.hpp"

class DataSourceDecorator : public DataSource {
protected:
    DataSource* wrappee;

public:
    DataSourceDecorator(DataSource* source);

    void writeData(const std::string& data) override;

    std::string readData() override;
};

#endif 
