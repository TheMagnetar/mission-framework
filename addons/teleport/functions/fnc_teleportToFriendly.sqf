#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Teleports the given unit close to the highest ranking friendly unit in the given list. If the target unit
 * is inside the vehicle, it will teleport the unit if there is a free place.
 *
 * Arguments:
 * 0: Unit to Teleport <OBJECT>
 * 1: Group of target units <ARRAY>
 *
 * Return Value:
 * Unit successfully teleported <BOOL>
 *
 * Example:
 * [] call mf_teleport_fnc_teleport
 *
 * Public: No
 */

params["_unit", "_groupUnits"];

private _targetUnit = objNull;
private _rank = -1;
private _couldTeleport = false;

{
    if (alive _x && {rankId _x > _rank} && {(vehicle _x == _x) || {[vehicle _x] call FUNC(hasEmptyPositions)}}) then {
        _rank = rankId _x;
        _targetUnit = _x;
    };
} forEach _groupUnits;

if (!isNull _targetUnit) then {
    if ((vehicle _targetUnit) != _targetUnit) then {
        _unit moveInAny (vehicle _targetUnit);
    } else {
        private _position = (getPos _targetUnit) findEmptyPosition [0, 10];
        _unit setPos _position;
    };
    _couldTeleport = true;
};

_couldTeleport
