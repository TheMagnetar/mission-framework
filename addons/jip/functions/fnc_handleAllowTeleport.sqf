#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Checks if a unit can be JIP teleported to a friendly unit.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call umf_jip_fnc_handleAllowTeleport
 *
 * Public: No
 */

params ["_unit"];

_unit setVariable [QGVAR(teleportEnabled), true];
hint "Press F11 to teleport to your squad or any other friendly unit. You have 5 minutes.";

GVAR(displayEH) = (findDisplay 46) displayAddEventHandler ["KeyDown", QUOTE([ARR_2(_this, player)] call FUNC(teleport))];

[{
    !(_unit getVariable [QGVAR(teleportEnabled), false]);
}, {
    params ["_unit"];

    if (_unit getVariable [QGVAR(teleportEnabled), false]) then {
        hint "5 minutes have passed. You cannot teleport to your squad anymore.";
        _unit setVariable [QGVAR(teleportEnabled), false];
    };

    (findDisplay 46) displayRemoveEventHandler ["KeyDown", GVAR(displayEH)];

}, [_unit], 300] call CBA_fnc_waitUntilAndExecute;
