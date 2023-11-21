#ifndef EDITOR_HPP
#define EDITOR_HPP

#include "EventManager.hpp"
#include <string>

class Editor {
private:
    EventManager events;
    std::string file;

public:
    void subscribe(const std::string& eventType, EventListener* listener);
    void unsubscribe(const std::string& eventType, EventListener* listener);
    void openFile(const std::string& path);
    void saveFile();
};

#endif 
