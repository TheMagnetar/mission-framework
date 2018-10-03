//=======================================================================================================//
// File: fn_misc_teleport_toFriendly.sqf                                                                 //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2015/10/02                                                                             //
// Description: This function teleports the given object close to the highest ranking friendly unit in   //
//              the given list. If the target unit is inside the vehicle, it will teleport the  unit if  //
//              there is a free place.                                                                   //
//              Arguments:                                                                               //
//               - 0: unit to teleport <OBJECT>.                                                         //
//               - 1: unit <ARRAY> of objects. Possible teleport candidates.                             //
// Changes: 1.0 (2015/11/26) First public version.                                                       //
//=======================================================================================================//

#include "script_component.hpp"

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

//============================================= END OF FILE =============================================//
