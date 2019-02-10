#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Checks if a vehicle has an empty position
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call umf_teleport_fnc_hasEmptyPositions
 *
 * Public: No
 */

params ["_vehicle"];

private _isFree = false;

{
    if ((_vehicle emptyPositions _x) > 0) exitWith {
        _isFree = true;
    };
} forEach ["driver", "gunner", "commander", "cargo"];

_isFree
