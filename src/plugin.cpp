//plugin.cpp
#include "plugin.hpp"

// Define the plugin instance (only here)
Plugin* pluginInstance;

void init(Plugin* p) {
    pluginInstance = p;

    // Register modules
    p->addModel(modelMyModule);
}