//=======================================================================================================//
// File: fn_jip_teleport.sqf                                                                             //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2016/11/12                                                                             //
// Description: This function teleports a JIP unit to the highest ranking in the squad, faction or side. //
//              If the highest ranking unit is inside a vehicle, and there is a free position, the unit  //
//              will be teleported inside the vehicle.                                                   //
//              Arguments:                                                                               //
//               - 0: displayEventHandler <ARRAY>.                                                       //
//               - 1: unit to teleport <OBJECT>.                                                         //
// Changes: 1.0 (2016/11/12) First public version.                                                       //
//=======================================================================================================//
#include "script_component.hpp"

params ["_displayEvent", "_unit"];

private _canTeleport = _unit getVariable [QGVAR(teleportEnabled), false];

if (_canTeleport && {_displayEvent select 1 == 87}) then {

    // Try first, teleporting to the other members of the squad.
    private _unitList = [];
    {
        if (isPlayer  _x) then { _unitList pushBack _x; };
    } forEach (units group _unit) - [_unit];

    private _couldTeleport = [_unit, _unitList] call EFUNC(teleport,teleportToFriendly);

    // If not, try with any unit of the same faction.
    // Identify which faction the unit belongs to.
    private _unitFaction = _unit getVariable [QEGVAR(gear,faction), toLower (faction _unit)];

    if (!_couldTeleport) then {
        _unitList = [];
        {
            private _remoteFaction = _x getVariable [QEGVAR(gear,faction), toLower (faction _x)];

            if ((isPlayer _x) && {_remoteFaction isEqualTo _unitFaction}) then { _unitList pushBack _x; };
        } forEach ([] call CBA_fnc_players - [_unit]);

        _couldTeleport = [_unit, _unitList] call EFUNC(teleport,teleportToFriendly);
    };

    // If not, try with any unit of the same side.
    if (!_couldTeleport) then {
        _unitList = [];
        {
            if ((isPlayer  _x) && {side _x == side _unit}) then { _unitList pushBack _x; };
        } forEach ([] call CBA_fnc_players - [_unit]);

        _couldTeleport = [_unit, _unitList] call EFUNC(teleport,teleportToFriendly);
    };

    // Delete the KeyDown displayEventHandler if the teleport was successfull.
    if (_couldTeleport) then {
        _unit setVariable [QGVAR(teleportEnabled), false];
    } else {
        "normal" cutText ["It was not possible to teleport. Everybody is dead and/or all vehicles are occupied! Try again later.", "PLAIN"];
    };
};

// Return value
false

//============================================= END OF FILE =============================================//
