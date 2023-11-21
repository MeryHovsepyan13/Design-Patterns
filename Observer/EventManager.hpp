#ifndef EVENTMANAGER_HPP
#define EVENTMANAGER_HPP

#include "EventListener.hpp"
#include <unordered_map>
#include <vector>

class EventManager {
private:
    std::unordered_map<std::string, std::vector<EventListener*>> listeners;

public:
    void subscribe(const std::string& eventType, EventListener* listener);
    void unsubscribe(const std::string& eventType, EventListener* listener);
    void notify(const std::string& eventType, const std::string& data);
};

#endif 
