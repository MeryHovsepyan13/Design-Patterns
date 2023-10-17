#include "DataSourceDecorator.hpp"

DataSourceDecorator::DataSourceDecorator(DataSource* source) : wrappee(source) {}

void DataSourceDecorator::writeData(const std::string& data) {
    wrappee->writeData(data);
}

std::string DataSourceDecorator::readData() {
    return wrappee->readData();
}
