#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Configures the number of respawns of a unit.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, s1] call mf_respawn_config
 *
 * Public: No
 */

params ["_unit"];

if (!local _unit) exitWith {};

// The player is not dead.
_unit setVariable [QGVAR(playerAlive), true, true];

private _numRespawns = 0;

// Make a copy of the old value in case the setting is changed mid mission
if (GVAR(numRespawnsConfig) < 0) then {
    _numRespawns = -99;
} else {
    _numRespawns = GVAR(numRespawnsConfig);
};

LOG("Assigning respawn for players.");
_unit setVariable [QGVAR(numRespawns), _numRespawns, true];
