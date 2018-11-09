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

if !(_templateVersion isEqualTo TEMPLATE_REQUIRED_VERSION) then {
    systemChat format [localize LSTRING(templateError), TEMPLATE_REQUIRED_VERSION, _templateVersion];
};
