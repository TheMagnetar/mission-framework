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

private _profileInformation = profileNamespace getVariable [QGVAR(persistence), objNull];
_profileInformation setVariable [GVAR(campaignName), nil];

if (allVariables _profileInformation isEqualTo []) then {
    profileNamespace setVariable [QGVAR(presistence), nil];
} else {
    profileNamespace setVariable [QGVAR(persistence), _profileInformation];
};
