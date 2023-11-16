#ifndef COMPONENT_HPP
#define COMPONENT_HPP

#include <iostream>
#include <string>

class ComponentWithContextualHelp {
public:
    virtual void showHelp() = 0;
};

class Component : public ComponentWithContextualHelp {
protected:
    std::string tooltipText;
    Component* container;

public:
    Component();
    
    void showHelp() override;

    void setContainer(Component* newContainer);
};

#endif 
