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
 * [] call umf_core_fnc_checkVersions
 *
 * Public: Yes
 */
#include "script_component.hpp"

private _templateVersion = getText (missionConfigFile >> "CfgUmfConfig" >> "templateVersion");

if !(_templateVersion == REQUIRED_VERSION) then {
    ERROR_2("Outdated template version detected. Required version is %1 while mission has %2. Please update the mission template", REQUIRED_VERSION, _templateVersion);
};
