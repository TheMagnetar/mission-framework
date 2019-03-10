#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

GVAR(loaded) = isClass (configFile >> "CfgPatches" >> "asr_ai3_main");     // Check if ASR AI 3 is loaded.

if (GVAR(loaded)) then {
    #include "initSettings.sqf"

    // Load settings file
    [QPATHTOF(cbaSettings.hpp)] call EFUNC(main,handleCbaSettings);
};

ADDON = true;
