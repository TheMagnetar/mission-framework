#include "script_component.hpp"

if (!hasInterface) exitWith {};

private _enabled = player getVariable [QGVAR(enabled), false];
if (_enabled) then {
    private _role = player getVariable [QGVAR(role), ""];
    private _faction = player getVariable [QGVAR(faction), ""];

    [player, _role, _faction] call FUNC(assignGear);
};

if (player isEqualTo (leader player)) then {
    (group player) setGroupIdGlobal [player getVariable[QGVAR(group), ""], [side player, true] call BIS_fnc_sideColor];
};

GVAR(gearAssigned) = true;
