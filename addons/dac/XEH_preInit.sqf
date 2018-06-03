#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

EGVAR(core,dacLoaded) = isClass (configFile >> "CfgPatches" >> "dac_source");          // Check if el DAC is loaded (addon version).

if (EGVAR(core,dacLoaded)) then {
    #include "initSettings.sqf"
};

ADDON = true;
