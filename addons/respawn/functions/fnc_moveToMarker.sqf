//=======================================================================================================//
// File: fn_respawn_moveToMarker.sqf                                                                     //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2015/10/02                                                                             //
// Description: This function enters spectator mode. The spectator mode that is used, ACE3 spectator or  //
//              BI's End Game Spectator, depends on mission parameters.                                  //
//                                                                                                       //
//              Arguments:                                                                               //
//               - none                                                                                  //
//                                                                                                       //
// Changes: 1.0 (2015/11/26) First public version.                                                       //
//=======================================================================================================//
#include "script_component.hpp"

params ["_unit"];

private _unitGroup = _unit getVariable [QEGVAR(gear,role), toLower (groupId (group _unit))];
private _unitFaction = _unit getVariable [QEGVAR(gear,faction), toLower (faction _unit)];

// Use leader faction if unit's faction is different.
private _factionLeader = (leader group _unit) getVariable [QEGVAR(gear,faction), faction (leader group _unit)];

if !(_unitFaction isEqualTo _factionLeader) then {
    _unitFaction = _factionLeader;
};

private _unitSide = tolower format ["%1", side _unit];

// Try first if there is a specific marker for respawning the group, next try if there is a specific
// faction marker for respawning, and last try if there is a side marker (respawn_west, respawn_east, ...)
private _couldRespawn = false;
{
    private _marker = format ["respawnArea_%1", _x];
    if (getMarkerColor _marker != "") exitWith {
        _unit setPosATL ([_marker] call CBA_fnc_randPosArea);
        [_unit, _marker] call FUNC(waitInRespawnArea);
        _couldRespawn = true;
    };
    _marker = format ["respawn_%1", _x];
    if (getMarkerColor _marker != "") exitWith {
        _unit setPosATL ([_marker, 5] call CBA_fnc_randPos);
        _couldRespawn = true;
    };
} forEach [_unitGroup, _unitFaction, _unitSide];

// If it is not possible to respawn, kill the player and disable further respawn.
if (!_couldRespawn) then {
    _unit setVariable [QGVAR(numRespawns), -1, true];
    _unit setDamage 1;
    [{"normal" cutText [localize LSTRING(noMarkers), "PLAIN"];}, [], 2] call CBA_fnc_waitAndExecute;
};

_couldRespawn
//============================================= END OF FILE =============================================//
