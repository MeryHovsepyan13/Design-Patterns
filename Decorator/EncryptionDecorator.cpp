#include "EncryptionDecorator.hpp"
#include <iostream>

EncryptionDecorator::EncryptionDecorator(DataSource* source) : DataSourceDecorator(source) {}

void EncryptionDecorator::writeData(const std::string& data) {
    std::cout << "Encrypting data..." << std::endl;
    DataSourceDecorator::writeData(data);
}

std::string EncryptionDecorator::readData() {
    std::string data = DataSourceDecorator::readData();
    std::cout << "Decrypting data..." << std::endl;
    return data;
}
