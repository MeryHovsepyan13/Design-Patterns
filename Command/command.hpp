#ifndef COMMAND_HPP
#define COMMAND_HPP

#include "editor.hpp"

class Command {
protected:
    Editor* editor;
    std::string backup;

public:
    Command(Editor* editor);
    void saveBackup();
    void undo();
    virtual bool execute() = 0;
};

class CopyCommand : public Command {
public:
    CopyCommand(Editor* editor);
    bool execute() override;
};

class CutCommand : public Command {
public:
    CutCommand(Editor* editor);
    bool execute() override;
};

class PasteCommand : public Command {
public:
    PasteCommand(Editor* editor);
    bool execute() override;
};

class UndoCommand : public Command {
public:
    UndoCommand(Editor* editor);
    bool execute() override;
};

#endif 
