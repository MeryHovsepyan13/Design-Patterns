#include "Tv.hpp"
#include <iostream>

bool Tv::isEnabled() {
    return true; 
}

void Tv::enable() {
    std::cout << "TV is enabled." << std::endl;
}

void Tv::disable() {
    std::cout << "TV is disabled." << std::endl;
}

int Tv::getVolume() {
    return 50; 
}

void Tv::setVolume(int percent) {
    std::cout << "TV volume set to " << percent << "%" << std::endl;
}

int Tv::getChannel() {
    return 6; 
}

void Tv::setChannel(int channel) {
    std::cout << "TV channel set to " << channel << std::endl;
}
