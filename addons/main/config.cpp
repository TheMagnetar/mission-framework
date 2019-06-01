#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Data_F_Tank_Loadorder",
            // CBA
            "cba_main",
            "cba_xeh"
        };
        author = ECSTRING(core,MFTeam);
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@umf";
        name = "Mission Framework";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
        actionName = "Website";
        action = CSTRING(URL);
        description = "Issue Tracker: https://github.com/TheMagnetar/mission-framework/issues";
    };
};

#include "CfgSettings.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgEden.hpp"
