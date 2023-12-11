#include "application.hpp"
#include "command.hpp"

int main() {
    Editor editor;
    Application app;
    app.createUI();

    CopyCommand copyCommand(&editor);
    app.executeCommand(&copyCommand);

    CutCommand cutCommand(&editor);
    app.executeCommand(&cutCommand);

    PasteCommand pasteCommand(&editor);
    app.executeCommand(&pasteCommand);

    app.undo();

    return 0;
}
