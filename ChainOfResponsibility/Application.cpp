#include "Application.hpp"
#include "Dialog.hpp"
#include "Panel.hpp"
#include "Button.hpp"

void Application::createUI() {
    Dialog* dialog = new Dialog("Budget Reports");
    dialog->setWikiPageURL("http://...");

    Panel* panel = new Panel("This panel does...");
    Button* ok = new Button("This is an OK button that...");
    Button* cancel = new Button("This is a Cancel button that...");

    panel->add(ok);
    panel->add(cancel);
    dialog->add(panel);

    dialog->showHelp();
}
