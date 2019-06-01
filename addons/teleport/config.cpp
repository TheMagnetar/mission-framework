#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"mf_main"};
        authors[] = {"TheMagnetar"};
        author = "TheMagnetar";
        authorUrl = "https://github.com/TheMagnetar/mission-framework/";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
