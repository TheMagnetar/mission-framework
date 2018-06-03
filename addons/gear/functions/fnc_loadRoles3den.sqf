#include "script_component.hpp"

disableSerialization;
params ["_control", ""];

private _unit = get3DENSelected "object";

private _role = ((_unit # 0) get3DENAttribute QGVAR(role)) select 0;
private _faction = ((_unit # 0) get3DENAttribute QGVAR(faction)) select 0;
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
    private _index = _control lbAdd (_x # 0);
    _control lbSetData [_index, _x # 1];

    if((_x # 1) isEqualTo _role) then {
        _control lbSetCurSel _index
    };
} forEach _definedRoles;
