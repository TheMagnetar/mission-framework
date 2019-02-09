#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Handles entering the spectator mode. It supports both ACE and EG Spectator modes.
 *
 * Arguments:
 * 0: Unit entering the spectator mode <OBJECT>
 * 1: Unit where the spectator camera will be initially focusing onto <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, player] call umf_respawn_enterSpectator
 *
 * Public: No
 */

params [["_respawnUnit", objNull], ["_spectableUnit", objNull]];

// If ACE 3 is loaded use the spectator mode of ACE3. Use the vanila one otherwise (End Game Spectator).
if (EGVAR(core,aceLoaded) && {EGVAR(ace,aceSpectatorEnabled)}) then {

    // Hide seagull body.
    if (_respawnUnit isKindOf "seagull") then {
        [_respawnUnit] call ace_spectator_fnc_stageSpectator;
    };

    LOG("Using ACE3 spectator mode.");

    // Configure ACE3 spectator camera.
    [2, _spectableUnit] call ace_spectator_fnc_setCameraAttributes;
    [true] call ace_spectator_fnc_setSpectator;
} else {
    LOG("Using vanila spectator mode.");

    // Advanced Combat Radio Environment 2 (ACRE 2)
    if (EGVAR(core,acreLoaded)) then {
        [true] call acre_api_fnc_setSpectator;
    };

    BIS_fnc_feedback_allowPP = false;  // Disable dying effects.
    // Start the End Game Spectator.
    // - All sides can be viewed.
    // - The AI cannot be observed.
    ["Initialize", [player, [], false, true, true, true, true, true, true, true]] call BIS_fnc_EGSpectator;
};
