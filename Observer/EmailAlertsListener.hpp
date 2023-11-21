#ifndef EMAILALERTSLISTENER_HPP
#define EMAILALERTSLISTENER_HPP

#include "EventListener.hpp"
#include <string>

class EmailAlertsListener : public EventListener {
private:
    std::string email;
    std::string message;

public:
    EmailAlertsListener(const std::string& emailAddress, const std::string& msg);
    void update(const std::string& filename) override;
};

#endif 
