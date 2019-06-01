#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"mf_main", "acre_sys_core"};
        authors[] = {"TheMagnetar"};
        author = "TheMagnetar";
        authorUrl = "https://github.com/TheMagnetar/mission-framework/";
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "Cfg3DEN.hpp"
