#include "LoggingListener.hpp"
#include <iostream>

LoggingListener::LoggingListener(const std::string& filename, const std::string& msg)
    : log_filename(filename), message(msg) {}

void LoggingListener::update(const std::string& filename) {
    std::cout << "Logging: " << message << filename << std::endl;
}
