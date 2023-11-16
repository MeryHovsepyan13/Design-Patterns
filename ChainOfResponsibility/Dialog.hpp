#ifndef DIALOG_HPP
#define DIALOG_HPP

#include "Container.hpp"

class Dialog : public Container {
private:
    std::string wikiPageURL;

public:
    Dialog(const std::string& title);

    void setWikiPageURL(const std::string& url);

    void showHelp() override;
};

#endif
