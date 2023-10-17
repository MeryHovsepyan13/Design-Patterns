#include "SalaryManager.hpp"
#include "DataSource.hpp"

SalaryManager::SalaryManager(DataSource* source) : source(source) {}

void SalaryManager::load() {
    source->readData();
}

void SalaryManager::save(const std::string& data) {
    source->writeData(data);
}
