#include "CompressionDecorator.hpp"
#include <iostream>

CompressionDecorator::CompressionDecorator(DataSource* source) : DataSourceDecorator(source) {}

void CompressionDecorator::writeData(const std::string& data) {
    std::cout << "Compressing data..." << std::endl;
    DataSourceDecorator::writeData(data);
}

std::string CompressionDecorator::readData() {
    std::string data = DataSourceDecorator::readData();
    std::cout << "Decompressing data..." << std::endl;
    return data;
}
