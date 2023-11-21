#include "EmailAlertsListener.hpp"
#include <iostream>

EmailAlertsListener::EmailAlertsListener(const std::string& emailAddress, const std::string& msg)
    : email(emailAddress), message(msg) {}

void EmailAlertsListener::update(const std::string& filename) {
    std::cout << "Email Alert: " << message << filename << std::endl;
}
