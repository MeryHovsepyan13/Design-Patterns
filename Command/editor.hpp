#ifndef EDITOR_HPP
#define EDITOR_HPP

#include <iostream>
#include <vector>
#include <stack>

class Editor {
private:
    std::string text;
    std::string clipboard;

public:
    std::string getText() const;
    void setText(const std::string& newText);
    std::string getSelection() const;
    void deleteSelection();
    void replaceSelection(const std::string& replacement);
    std::string getClipboard() const;
    void setClipboard(const std::string& newClipboard);
    void undo();
};

#endif
