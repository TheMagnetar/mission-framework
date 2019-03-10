#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

GVAR(loaded) = isClass (configFile >> "CfgPatches" >> "acre_main");         // Check if ACRE 2 is loaded.

if (GVAR(loaded)) then {
    #include "initSettings.sqf"

    // Load settings file
    [QPATHTOF(cbaSettings.hpp)] call EFUNC(main,handleCbaSettings);

    DGVAR(radiosConfigured) = false;

    DGVAR(rolesRiflemanRadio) = [];           // List of units with a "Rifleman Radio" (fn_configEquipment.sqf)
    DGVAR(rolesShortRangeRadio) = [];         // List of units with a "Short Range Radio" (fn_configEquipment.sqf)
    DGVAR(rolesLongRangeRadio) = [];          // List of units with a "Long Range Radio" (fn_configEquipment.sqf)

    DGVAR(riflemanRadio) = "";     // Default rifleman radio
    DGVAR(shortRangeRadio) = "";   // Default short range radio
    DGVAR(longRangeRadio) = "";    // Default long range radio

    DGVAR(frequenciesArray) = [];
    DGVAR(groupsArray) = [];
};

ADDON = true;
