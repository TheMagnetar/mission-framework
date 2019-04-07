#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

GVAR(loaded) = isClass (configFile >> "CfgPatches" >> "asr_ai3_main");     // Check if ASR AI 3 is loaded.

if (GVAR(loaded)) then {
    #include "initSettings.sqf"

    // Load settings file
    private _settingsFile = preprocessFile QPATHTOF(cbaSettings.hpp);
    {
        _x params ["_setting", "_value", "_priority"];

        [_setting, _value, _priority, "server"] call CBA_settings_fnc_set;
    } forEach ([_settingsFile, true] call CBA_settings_fnc_parse);
};

ADDON = true;
