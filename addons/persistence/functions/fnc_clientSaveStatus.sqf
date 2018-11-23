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

params [["_unit", player], ["_uid", ""], ["_name", ""], ["_jip", false]];

if (_uid isEqualTo "") then {_uid = getPlayerUID _unit};
if (_name isEqualTo "") then {_name = name _unit};

private _variables = [_unit] call FUNC(getPlayerVariables);
private _loadout = getUnitLoadout _unit;
private _position = getPosASL _unit;
private _information = [_uid, _name, _position, _variables, _loadout];

if (!isServer) then {
    [QGVAR(saveClient), [_information, _jip]] call CBA_fnc_serverEvent;
} else {
    [_information, _jip] call FUNC(serverSaveClient);
};
