#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include <vector>
#include "editor.hpp"
#include "command_history.hpp"

class Application {
private:
    std::vector<Editor*> editors;
    Editor* activeEditor;
    CommandHistory history;

public:
    void createUI();
    void executeCommand(Command* command);
    void undo();
};

#endif 
