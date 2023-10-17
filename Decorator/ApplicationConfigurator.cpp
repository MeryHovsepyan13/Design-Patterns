#include "ApplicationConfigurator.hpp"
#include "FileDataSource.hpp"
#include "CompressionDecorator.hpp"
#include "EncryptionDecorator.hpp"
#include "SalaryManager.hpp"

std::string ApplicationConfigurator::configurationExample(bool enabledEncryption, bool enabledCompression) {
    DataSource* source = new FileDataSource("salary.dat");

    if (enabledEncryption) {
        source = new EncryptionDecorator(source);
    }
    if (enabledCompression) {
        source = new CompressionDecorator(source);
    }

    SalaryManager logger(source);
    logger.load();
    return "Salary records loaded.";
}
