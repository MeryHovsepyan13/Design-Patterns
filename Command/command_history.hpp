#ifndef COMMAND_HISTORY_HPP
#define COMMAND_HISTORY_HPP

#include <stack>
#include "command.hpp"

class CommandHistory {
private:
    std::stack<Command*> history;

public:
    void push(Command* command);
    Command* pop();
};

#endif 
