#include "Application.hpp"
#include "ApplicationConfigurator.hpp"

int main() {
    Application app;
    app.dumbUsageExample();

    ApplicationConfigurator configurator;
    configurator.configurationExample(true, true);

    return 0;
}
