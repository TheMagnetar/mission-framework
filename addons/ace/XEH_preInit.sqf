#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

EGVAR(core,aceLoaded) = isClass (configFile >> "CfgPatches" >> "ace_common");         // Check if ACE 3 is loaded.
EGVAR(core,aceMedicalLoaded) = isClass (configFile >> "CfgPatches" >> "ace_medical"); // Check if ACE 3 (medical system) is loaded.
EGVAR(core,aceBallisticsLoaded) = isClass (configFile >> "CfgPatches" >> "ace_advanced_ballistics"); // Check if ACE 3 (advanced ballistics) is loaded.

if (EGVAR(core,aceLoaded)) then {
    // Load settings file
    [QPATHTOF(cbaSettings.hpp)] call EFUNC(core,handleCbaSettings);

    #include "initSettings.sqf"
};

ADDON = true;
