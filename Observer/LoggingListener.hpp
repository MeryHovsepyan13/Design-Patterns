#ifndef LOGGINGLISTENER_HPP
#define LOGGINGLISTENER_HPP

#include "EventListener.hpp"
#include <string>

class LoggingListener : public EventListener {
private:
    std::string log_filename;
    std::string message;

public:
    LoggingListener(const std::string& filename, const std::string& msg);
    void update(const std::string& filename) override;
};

#endif 
