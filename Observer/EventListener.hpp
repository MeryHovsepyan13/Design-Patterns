#ifndef EVENTLISTENER_HPP
#define EVENTLISTENER_HPP

#include <string>

class EventListener {
public:
    virtual void update(const std::string& filename) = 0;
};

#endif 
