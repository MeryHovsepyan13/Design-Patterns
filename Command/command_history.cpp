#include "command_history.hpp"

void CommandHistory::push(Command* command) {
    history.push(command);
}

Command* CommandHistory::pop() {
    if (!history.empty()) {
        Command* command = history.top();
        history.pop();
        return command;
    }
    return nullptr;
}
