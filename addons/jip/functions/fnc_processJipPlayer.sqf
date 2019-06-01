#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Process a JIP player.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call mf_jip_fnc_processJipPlayer
 *
 * Public: No
 */

params [["_playerAllowed", true]];

// Kill the player if JIP is not allowed and exit.
if (!GVAR(isAllowed) && {!_playerAllowed}) exitWith {
    // Wait a little before killing the player.
    [{
        params ["_unit"];

        // Remove any possibility of respawning.
        _unit setVariable [QEGVAR(respawn,numRespawns), -1, true];
        _unit setDamage 1;
        [{
            "normal" cutText [localize LSTRING(jipNotAllowed), "PLAIN"];
        }, [], 5] call CBA_fnc_waitAndExecute;

    }, [player], 1] call CBA_fnc_waitAndExecute;
};

// Since JIP is still allowed, add the new player to the list of allowed players.
if (!_playerAllowed) then {
    [QGVAR(registerPlayer), [player]] call CBA_fnc_serverEvent;
    GVAR(advancedFatigue) = [];
} else {
    // Player is already defined. Therefore, he is reconnecting.
    if (GVAR(savePlayerStatus) >= 1) then {
        /*
        if (GVAR(savePlayerStatus) == 2 && {isClass (configFile >> "CfgPatches" >> "ace_advanced_fatigue")}) then {
            waitUntil {!isNil "ace_advanced_fatigue_ae1Reserve"};
            GVAR(advancedFatigue) = [];

            // Retrieve variable from the server
            [clientOwner, format [QGVAR(advancedFatigue_%1), getPlayerUID player]] remoteExecCall ["publicVariableClient", 2, false];

            waitUntil {
                sleep 1.0;
                call compile format [QUOTE(GVAR(advancedFatigue) = GVAR(advancedFatigue_%1)), getPlayerUID player];
                !(GVAR(advancedFatigue) isEqualTo [])
            };
        };*/
        [QEGVAR(persistence,retrieveStatusFromServer), [player]] call CBA_fnc_serverEvent;
    };
};

[player] call FUNC(handleAllowTeleport);
GVAR(configReady) = true;
