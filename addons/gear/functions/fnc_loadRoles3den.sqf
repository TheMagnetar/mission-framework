#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Loads the list of roles in 3DEN.
 *
 * Arguments:
 * 0: Control <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [1] call mf_gear_fnc_loadRoles3den
 *
 * Public: No
 */

disableSerialization;
params ["_control", ""];

private _unit = get3DENSelected "object";

private _entity = _unit select 0;
private _role = (_entity get3DENAttribute QGVAR(role)) select 0;
private _faction = (_entity get3DENAttribute QGVAR(faction)) select 0;
private _rolesEntries = missionConfigFile >> "CfgLoadouts" >> _faction;

if (_role isEqualTo "") then {
    _role = "rfl";
};

if (!isClass _rolesEntries) then {
    _rolesEntries = configFile >> "CfgLoadouts" >> _faction;
};

private _definedRoles = [];
{
    _definedRoles pushBackUnique [getText (_x >> "displayName"), configName _x];
} forEach configProperties [_rolesEntries, "isClass _x"];

_definedRoles sort true;

lbClear _control;

{
    private _index = _control lbAdd (_x select 0);
    _control lbSetData [_index, _x select 1];

    if((_x select 1) isEqualTo _role) then {
        _control lbSetCurSel _index
    };
} forEach _definedRoles;
