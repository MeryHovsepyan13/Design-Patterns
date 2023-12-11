#include "command.hpp"

Command::Command(Editor* editor) : editor(editor) {}

void Command::saveBackup() {
    backup = editor->getText();
}

void Command::undo() {
    editor->setText(backup);
}

CopyCommand::CopyCommand(Editor* editor) : Command(editor) {}

bool CopyCommand::execute() {
    editor->setClipboard(editor->getSelection());
    std::cout << "Copied selection to clipboard.\n";
    return false;
}

CutCommand::CutCommand(Editor* editor) : Command(editor) {}

bool CutCommand::execute() {
    saveBackup();
    editor->setClipboard(editor->getSelection());
    editor->deleteSelection();
    std::cout << "Cut selection and saved to clipboard.\n";
    return true;
}

PasteCommand::PasteCommand(Editor* editor) : Command(editor) {}

bool PasteCommand::execute() {
    saveBackup();
    editor->replaceSelection(editor->getClipboard());
    std::cout << "Pasted content from clipboard.\n";
    return true;
}

UndoCommand::UndoCommand(Editor* editor) : Command(editor) {}

bool UndoCommand::execute() {
    editor->undo();
    std::cout << "Undoing last command.\n";
    return false;
}
