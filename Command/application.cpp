#include "application.hpp"

void Application::createUI() {
}

void Application::executeCommand(Command* command) {
    if (command->execute()) {
        history.push(command);
    }
}

void Application::undo() {
    Command* command = history.pop();
    if (command != nullptr) {
        command->undo();
    }
}
