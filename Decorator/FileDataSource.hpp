#ifndef FILEDATASOURCE_HPP
#define FILEDATASOURCE_HPP

#include <string>
#include "DataSource.hpp"

class FileDataSource : public DataSource {
private:
    std::string filename;

public:
    FileDataSource(const std::string& filename);

    void writeData(const std::string& data) override;

    std::string readData() override;
};

#endif 
