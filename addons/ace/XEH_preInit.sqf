#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

GVAR(loaded) = isClass (configFile >> "CfgPatches" >> "ace_common");         // Check if ACE 3 is loaded.

if (GVAR(loaded)) then {
    // Load settings file
    [QPATHTOF(cbaSettings.hpp)] call EFUNC(main,handleCbaSettings);

    #include "initSettings.sqf"
};

ADDON = true;
