#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Handles on player killed event.
 *
 * Arguments:
 * 0: Unit that was killed <OBJECT> (default: objNull)
 * 1: Unit that made he kill <OBJECT> (default: objNull)
 * 2: Respawn type <NUMBER> (not used)
 * 3: Number of seconds until respawn <NUMBER> (not used)
 *
 * Return Value:
 * None
 *
 * Example:
 * [acre_player, s1] spawn mf_respawn_onPlayerKilled
 *
 * Public: No
 */

// Parameters passed when onPlayerKilled.
params [["_unit", objNull], ["_killer", objNull], "", ""];

// Substract tickets from player's pool or player's side pool.
private _numRespawns = [_unit, "substract"] call FUNC(manageTickets);
if (_numRespawns == -1) then {
    _unit setVariable [QGVAR(playerAlive), false, true];
    setPlayerRespawnTime 1e10;
    [false] call FUNC(respawnCounter);
};

if ((allPlayers findIf {_x getVariable [QGVAR(playerAlive), true]}) == -1) exitWith {
    sleep 1;
    // Execute the respawn effects.
    if (GVAR(killCamEnabled) && {!isNull _killer}) then {
        GVAR(respawnCameraScript) = [_killer] spawn FUNC(effects);
    } else {
        GVAR(respawnCameraScript) = [_unit] spawn FUNC(effects);
    };

    sleep 6;
    [QEGVAR(missionFlow,finishMission), []] call CBA_fnc_globalEvent;
};

if (GVAR(saveGear)) then {
    _unit setVariable [QGVAR(savedLoadout), getUnitLoadout _unit];
    if (EGVAR(ace,loaded)) then {
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
    GVAR(killedTime) = CBA_missionTime;
    [true] call FUNC(respawnCounter);
} else {

    sleep 3;
    cutText [localize LSTRING(enterSpectator), "PLAIN DOWN"];
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
