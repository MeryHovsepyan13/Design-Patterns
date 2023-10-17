#include "Application.hpp"
#include "DataSource.hpp"
#include "FileDataSource.hpp"
#include "CompressionDecorator.hpp"
#include "EncryptionDecorator.hpp"
#include <iostream>

void Application::dumbUsageExample() {
    DataSource* source = new FileDataSource("somefile.dat");
    source->writeData("Salary Records");

    source = new CompressionDecorator(source);
    source->writeData("Salary Records");

    source = new EncryptionDecorator(source);
    source->writeData("Salary Records");
}
