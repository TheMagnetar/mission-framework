#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Checks that the latest template version is the correct one.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call mf_core_fnc_checkVersions
 *
 * Public: No
 */

private _templateVersion = getText (missionConfigFile >> "CfgUmfConfig" >> "templateVersion");

if !(_templateVersion isEqualTo TEMPLATE_REQUIRED_VERSION) then {
    systemChat format [localize LSTRING(templateError), TEMPLATE_REQUIRED_VERSION, _templateVersion];
};

private _respawn = getMissionConfigValue ["respawn", 3];
if (_respawn isEqualType "") then {
    switch (_respawn) do {
        case "NONE": {_respawn = 0;};
        case "BIRD": {_respawn = 1;};
        case "INSTANT": {_respawn = 2;};
        case "BASE": {_respawn = 3;};
        case "GROUP": {_respawn = 4;};
        case "SIDE": {_respawn = 5;};
    };
};

if (_respawn != 3) then {
    ERROR_1("Invalid respawn type selected %1. It should be either 3 or BASE",_respawn);
};
