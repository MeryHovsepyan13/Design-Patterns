#ifndef PANEL_HPP
#define PANEL_HPP

#include "Container.hpp"

class Panel : public Container {
private:
    std::string modalHelpText;

public:
    Panel(const std::string& modalText);

    void showHelp() override;
};

#endif 
