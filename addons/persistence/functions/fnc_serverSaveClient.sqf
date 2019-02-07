#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Does some tasks on the client before finishing the mission .
 *
 * Arguments:
 * 0: Unit <OBJECT> (Default: objNull)
 * 1: Item <STRING>
 *
 * Return Value:
 * Adding successfull <BOOL>
 *
 * Example:
 * [player, "ACRE_PRC77"] call umf_core_fnc_addItem
 *
 * Public: Yes
 */

params ["_information", ["_jip", false]];

_information params ["_uid", "_name"];
if (_uid isEqualTo "" || {_name isEqualTo ""}) exitWith {
    ERROR_2("Received invalid information. Unit %1, UID %2 and profile name %3",_uid,_name);
};

private _informationList = [];
private _profileInformation = objNull;

private _informationList = if (_jip) then {
    missionNamespace getVariable [QGVAR(persistence), []]
} else {
    _profileInformation = profileNamespace getVariable [QGVAR(persistence), objNull];
    _profileInformation getVariable [GVAR(campaignName), []]
};

private _playerInformation = [_informationList, "player"] call CBA_fnc_hashGet;

private _found = false;
{
    params ["_uidX", "_nameX"];

    if ((_uidX isEqualTo _uid) && {_nameX isEqualTo _name}) exitWith {
        _found = true;
        _playerInformation set [_forEachIndex, _information];
    }
} forEach _informationList;

if (!_found) then {
    _informationList pushBack [_information];
};

[_informationList, "player", _informationList] call CBA_fnc_hashSet;

if (!_jip) then {
    profileNamespace setVariable [QGVAR(persistence), _profileInformation];
};
