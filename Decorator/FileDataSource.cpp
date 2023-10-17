#include "FileDataSource.hpp"
#include <iostream>

FileDataSource::FileDataSource(const std::string& filename) : filename(filename) {}

void FileDataSource::writeData(const std::string& data) {
    std::cout << "Writing data to " << filename << std::endl;
}

std::string FileDataSource::readData() {
    std::cout << "Reading data from " << filename << std::endl;
    return "Salary Records";
}
