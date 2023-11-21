#include "Editor.hpp"

void Editor::subscribe(const std::string& eventType, EventListener* listener) {
    events.subscribe(eventType, listener);
}

void Editor::unsubscribe(const std::string& eventType, EventListener* listener) {
    events.unsubscribe(eventType, listener);
}

void Editor::openFile(const std::string& path) {
    file = path;
    events.notify("open", file);
}

void Editor::saveFile() {
    events.notify("save", file);
}
