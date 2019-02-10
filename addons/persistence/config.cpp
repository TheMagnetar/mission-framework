#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"umf_main"};
        authors[] = {"TheMagnetar"};
        author = "UST101";
        authorUrl = "http://www.ust101.com/";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "Cfg3DEN.hpp"
