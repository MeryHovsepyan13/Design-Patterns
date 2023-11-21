#include "Application.hpp"
#include "Editor.hpp"
#include "LoggingListener.hpp"
#include "EmailAlertsListener.hpp"

void Application::config() {
    Editor editor;

    LoggingListener logger("/path/to/log.txt", "Someone has opened the file: %s");
    EmailAlertsListener emailAlerts("admin@example.com", "Someone has changed the file: %s");

    editor.subscribe("open", &logger);
    editor.subscribe("save", &emailAlerts);

    editor.openFile("example.txt");
    editor.saveFile();

    editor.unsubscribe("open", &logger);

    editor.openFile("new_file.txt");
}
