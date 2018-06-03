//=======================================================================================================//
// File: bmt_respawn_onPlayerKilled.sqf                                                                  //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2015/10/02                                                                             //
// Description: This document configures the onPlayerKilled event. For the moment ACE3 spectator mode    //
//              (http://ace3mod.com/wiki/feature/spectator.html) in case it is available, defaulting to  //
//              the vanila one if ACE3 is not loaded.                                                    //
//                                                                                                       //
//              Arguments:                                                                               //
//               - 0: unit that has been killed <OBJECT>.                                                //
//               - 1: unit that made he kill <OBJECT>.                                                   //
//               - 2: respawn type <SCALAR>.                                                             //
//               - 3: number of seconds until respawn <SCALAR>.                                          //
//                                                                                                       //
// Changes: 1.0 (2015/11/26) First public version.                                                       //
//=======================================================================================================//
#include "script_component.hpp"

// Parameters passed when onPlayerKilled.
params [["_unit",objNull], ["_killer",objNull], "", ""];

private _respawn = getMissionConfigValue ["respawn", 3];
if (_respawn isEqualType "") then {
    switch (_respawn) do {
        case "NONE": {_respawn = 0;};
        case "BIRD": {_respawn = 1;};
        case "INSTANT": {_respawn = 2;};
        case "BASE": {_respawn = 3;};
        case "GROUP": {_respawn = 4;};
        case "SIDE": {_respawn = 5;};
    };
};

// Substract tickets from player's pool or player's side pool.
private _numRespawns = [_unit, "substract"] call FUNC(manageTickets);

if ((_numRespawns == -1) or (_respawn == 0)) then {
    _unit setVariable [QGVAR(playerAlive), false, true];
    setPlayerRespawnTime 1e10;
};

if (((_respawn == 3) || (_respawn == 0)) && {{_x getVariable [QGVAR(playerAlive), true]} count allPlayers <= 0}) exitWith {

    sleep 1;
    // Execute the respawn effects.
    if (GVAR(killCamEnabled) && {!isNull _killer}) then {
        GVAR(respawnCameraScript) = [_killer] spawn FUNC(effects);
    } else {
        GVAR(respawnCameraScript) = [_unit] spawn FUNC(effects);
    };

    sleep 6;
    [QEGVAR(core,finishMission), []] call CBA_fnc_globalEvent;
};

if (GVAR(saveGear)) then {
    _unit setVariable[QGVAR(savedLoadout),getUnitLoadout _unit];
    if (EGVAR(core,aceLoaded)) then {
        _unit setVariable [QGVAR(hasEarPlugs), _unit getVariable ["ACE_hasEarPlugsin", false]];
    };
};

//  Do not enter spectator mode if respawn time is less than 1 second.
if (playerRespawnTime <= 1) exitWith {};

sleep 1;

// Execute the respawn effects.
if (GVAR(killCamEnabled) && {!isNull _killer}) then {
    GVAR(respawnCameraScript) = [_killer] spawn FUNC(effects);
} else {
    GVAR(respawnCameraScript) = [_unit] spawn FUNC(effects);
};

sleep 1;

// Do not enter spectator mode if there are still tickets available.
if ((_numRespawns >= 0) or (_numRespawns == -99)) then {
    [true] call FUNC(respawnCounter);
} else {

    sleep 3;
    cutText ["You are dead! Entering spectator mode.", "PLAIN DOWN"];
    sleep 5;

    // If there was no killer or the kill cam is disabled then pass it as a random playable unit.
    if (isNull _killer || {GVAR(killCamEnabled)}) then {
        if ({alive _x} count allUnits > 0 ) then {
            _killer = selectRandom playableUnits;
        } else {
            _killer = _unit;
        };
    };

    // Enter spectator mode.
    GVAR(camera) = false;

    sleep 0.2;

    [_unit, _killer] call FUNC(enterSpectator);
};


//============================================= END OF FILE =============================================//
