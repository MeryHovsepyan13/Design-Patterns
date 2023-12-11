#include "editor.hpp"

std::string Editor::getText() const {
    return text;
}

void Editor::setText(const std::string& newText) {
    text = newText;
}

std::string Editor::getSelection() const {
    return "Selected Text";
}

void Editor::deleteSelection() {
    std::cout << "Deleted selected text.\n";
}

void Editor::replaceSelection(const std::string& replacement) {
    std::cout << "Replaced selection with: " << replacement << "\n";
}

std::string Editor::getClipboard() const {
    return clipboard;
}

void Editor::setClipboard(const std::string& newClipboard) {
    clipboard = newClipboard;
}

void Editor::undo() {
    std::cout << "Undoing last operation.\n";
}
