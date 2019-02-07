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
 * [player] call umf_persistence_fnc_copyMissionStatus
 *
 * Public: No
 */

private _missionInformation = missionNamespace getVariable [QGVAR(persistence), []];

private _profileInformation = profileNamespace getVariable [QGVAR(persistence), []];
private _campaignInformation = _profileInformation getVariable [GVAR(campaignName), []];
private _playerInformation = [_campaignInformation, "player"] call CBA_fnc_hashGet;

{
    _x params ["_missionUid", "_missionName"];
    private _found = false;
    {
        _x params ["_uid", "_name"];

        if ((_uid isEqualTo _missionUid) && {_missionName isEqualTo _name}) exitWith {
            _found = true;
            _playerInformation set [_forEachIndex, _x];
        };
    } forEach _playerInformation;

    if (!_found) then {
        _playerInformation pushBack [_x];
    };
} forEach _missionInformation;

[_campaignInformation, "player", _playerInformation] call CBA_fnc_hashSet;
profileNamespace setVariable [QGVAR(persistence), _profileInformation];
