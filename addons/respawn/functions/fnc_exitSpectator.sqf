#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Handles exiting the spectator mode. It supports both ACE and EG Spectator modes.
 *
 * Arguments:
 * 0: Unit entering the spectator mode <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call umf_respawn_exitSpectator
 *
 * Public: No
 */

if (EGVAR(core,aceLoaded) && {EGVAR(ace,aceSpectatorEnabled)}) then {
    [false] call ace_spectator_fnc_setSpectator;
} else {
    // Advanced Combat Radio Environment 2 (ACRE 2)
    if (EGVAR(core,acreLoaded)) then {
        [false] call acre_api_fnc_setSpectator;
    };

    BIS_fnc_feedback_allowPP = true;  // Enable dying effects.
    // Exit the End Game Spectator mode.
    ["Terminate"] call BIS_fnc_EGSpectator;
};
