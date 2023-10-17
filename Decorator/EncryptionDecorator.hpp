#ifndef ENCRYPTIONDECORATOR_HPP
#define ENCRYPTIONDECORATOR_HPP

#include "DataSourceDecorator.hpp"

class EncryptionDecorator : public DataSourceDecorator {
public:
    EncryptionDecorator(DataSource* source);

    void writeData(const std::string& data) override;

    std::string readData() override;
};

#endif 
