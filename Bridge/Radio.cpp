#include "Radio.hpp"
#include <iostream>

bool Radio::isEnabled() {
    return false; 
}

void Radio::enable() {
    std::cout << "Radio is enabled." << std::endl;
}

void Radio::disable() {
    std::cout << "Radio is disabled." << std::endl;
}

int Radio::getVolume() {
    return 24; 
}

void Radio::setVolume(int percent) {
    std::cout << "Radio volume set to " << percent << "%" << std::endl;
}

int Radio::getChannel() {
    return 12; 
}

void Radio::setChannel(int channel) {
    std::cout << "Radio channel set to " << channel << std::endl;
}
