#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Retrieves player variables that are important for persistence.
 *
 * Arguments:
 * 0: Unit <OBJECT> (default: objNull)
 * 1: Variables to store <ARRAY> (default: ["umf", "ace"])
 * 2: Variables to exclude <ARRAY> (default: [QGVAR(teleportEnabled)])
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call umf_acre_fnc_getPlayerVariables
 *
 * Public: No
 */

private _campaignName = getText (missionConfigFile >> "CfgCampaign" >> "campaignName");

GVAR(campaignName) = format [QGVAR(camapignName_%1),_campaignName];
GVAR(isFirstMission) = getNumber (missionConfigFile >> "CfgCampaign" >> "isFirstMission") == 1;
GVAR(isLastMission) = getNumber (missionConfigFile >> "CfgCampaign" >> "isLastMission") == 1;
GVAR(persistenceEnabled) = GVAR(isLastMission) && {getNumber (missionConfigFile >> "CfgCampaign" >> "enableCampaign") == 1};

if (GVAR(isFirstMission)) then {
    private _profileInformation = profileNamespace getVariable [QGVAR(persistence), objNull];
    if (isNull _profileInformation) then {
        _profileInformation = [] call CBA_fnc_createNamespace;
    };

    // Create the hash
    private _hashInformation = [] call CBA_fnc_hashCreate;
    {
        [_hashInformation, _x, []] call CBA_fnc_hashSet;
    } forEach ["player", "vehicles", "objects"];

    _profileInformation setVariable [GVAR(campaignName), _hashInformation];
    profileNamespace setVariable [QGVAR(persistence), _profileInformation];
};
