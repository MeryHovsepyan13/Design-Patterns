#include "Panel.hpp"

Panel::Panel(const std::string& modalText) : modalHelpText(modalText) {}

void Panel::showHelp() {
    if (!modalHelpText.empty()) {
        std::cout << "Modal Help: " << modalHelpText << std::endl;
    } else {
        for (Component* child : children) {
            child->showHelp();
        }
    }
}
