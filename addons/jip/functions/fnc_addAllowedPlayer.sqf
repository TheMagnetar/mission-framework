#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Adds a JIP player that is allowed to join the mission for the rest of it, even if it disconnects and
 * JIP is disabled. The UID of the player as well as the profile name are added as another entry.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call umf_jip_fnc_addAllowedPlayer
 *
 * Public: No
 */

params ["_unit"];

GVAR(allowedPlayers) pushBackUnique [getPlayerUID _unit, name _unit];

LOG_2("Player named %1 with UID %2 was successfully added to valid JIP players.",name _unit,getPlayerUID _unit);
