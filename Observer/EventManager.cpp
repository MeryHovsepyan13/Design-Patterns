#include "EventManager.hpp"
#include <algorithm> 

void EventManager::subscribe(const std::string& eventType, EventListener* listener) {
    listeners[eventType].push_back(listener);
}

void EventManager::unsubscribe(const std::string& eventType, EventListener* listener) {
    auto& eventListeners = listeners[eventType];
    eventListeners.erase(std::remove(eventListeners.begin(), eventListeners.end(), listener), eventListeners.end());
}

void EventManager::notify(const std::string& eventType, const std::string& data) {
    for (auto& listener : listeners[eventType]) {
        listener->update(data);
    }
}
