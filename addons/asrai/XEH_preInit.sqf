#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

EGVAR(core,asrai3Loaded) = isClass (configFile >> "CfgPatches" >> "asr_ai3_main");     // Check if ASR AI 3 is loaded.

if (EGVAR(core,asrai3Loaded)) then {
    #include "initSettings.sqf"

    // Load settings file
    [QPATHTOF(cbaSettings.hpp)] call EFUNC(core,handleCbaSettings);
};

ADDON = true;
