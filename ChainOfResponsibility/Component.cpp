#include "Component.hpp"

Component::Component() : container(nullptr) {}

void Component::showHelp() {
    if (!tooltipText.empty()) {
        std::cout << "Tooltip: " << tooltipText << std::endl;
    } else if (container != nullptr) {
        container->showHelp();
    }
}

void Component::setContainer(Component* newContainer) {
    container = newContainer;
}
