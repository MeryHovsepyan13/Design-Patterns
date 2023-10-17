#ifndef SALARYMANAGER_HPP
#define SALARYMANAGER_HPP

#include "DataSource.hpp"

class SalaryManager {
private:
    DataSource* source;

public:
    SalaryManager(DataSource* source);

    void load();

    void save(const std::string& data);
};

#endif 
