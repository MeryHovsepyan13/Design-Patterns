#ifndef COMPRESSIONDECORATOR_HPP
#define COMPRESSIONDECORATOR_HPP

#include "DataSourceDecorator.hpp"

class CompressionDecorator : public DataSourceDecorator {
public:
    CompressionDecorator(DataSource* source);

    void writeData(const std::string& data) override;

    std::string readData() override;
};

#endif 
