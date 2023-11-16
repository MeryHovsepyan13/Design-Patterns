#include "Dialog.hpp"

Dialog::Dialog(const std::string& title) : Container(), wikiPageURL("") {}

void Dialog::setWikiPageURL(const std::string& url) {
    wikiPageURL = url;
}

void Dialog::showHelp() {
    if (!wikiPageURL.empty()) {
        std::cout << "Wiki Help: Open URL " << wikiPageURL << std::endl;
    } else {
        for (Component* child : children) {
            child->showHelp();
        }
    }
}
