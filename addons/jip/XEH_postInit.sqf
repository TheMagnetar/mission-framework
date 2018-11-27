#include "script_component.hpp"

[QGVAR(registerPlayer), DFUNC(addAllowedPlayer)] call CBA_fnc_addEventHandler;

if (GVAR(allowedTime) == 0) exitWith { GVAR(isAllowed) = false; };


if (isServer) then {
    GVAR(timePFH) = [{
        private _elapsedTime = GVAR(allowedTime)*60 - CBA_missionTime;

        if (_elapsedTime <= 0) then {
            [GVAR(timePFH)] call CBA_fnc_removePerFrameHandler;
            missionNamespace setVariable [QGVAR(isAllowed), false, true];
        };
    }, 5, []] call CBA_fnc_addPerFrameHandler;

    if (GVAR(saveStatus)) then {
        GVAR(missionEH) = addMissionEventHandler ["HandleDisconnect", {
            [_this select 0, _this select 2, _this select 3, true] call EFUNC(persistence,clientSaveStatus);
        }];

        if (isClass (configFile >> "CfgPatches" >> "ace_advanced_fatigue")) then {
            GVAR(advancedFatigue) = [];
        };
    };
};

if !(hasInterface && {side player != sideLogic}) exitWith {};

LOG_2("Player is JIP: %1. JIP is enabled: %2.",didJip,missionNamespace getVariable [QGVAR(isAllowed), true]);

if (didJiP) then {
    // Check if the player is in the initial player list
    private _initialPlayer = [player] call FUNC(checkAllowedPlayers);

    // Kill the player if JIP is not allowed and exit.
    if (!GVAR(isAllowed) && {!_initialPlayer}) then {
        // Wait a little before killing the player.
        [{
            // Remove any possibility of respawning.
            player setVariable [QEGVAR(respawn,numRespawns), -1, true];
            player setDamage 1;
            [{
                "normal" cutText ["This mission does not support JIP. Be punctual next time!", "PLAIN"];
            }, [player], 5] call CBA_fnc_waitAndExecute;

        }, [player], 1] call CBA_fnc_waitAndExecute;
    } else {
        // Since JIP is still allowed, add the new player to the list of allowed players.
        if (!_initialPlayer) then {
            [QGVAR(registerPlayer), [player]] call CBA_fnc_serverEvent;
            GVAR(advancedFatigue) = [];
        } else {
            // Player is already defined. Therefore, he is reconnecting.
            if (GVAR(savePlayerStatus) >= 1) then {
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
                };

                [player, true] call FUNC(persistence,clientRetrieveStatus);
            };
        };

        [player] call FUNC(handleAllowTeleport);
    };
} else {
    // Initialise a list of all players that initially connect.
    [QGVAR(registerPlayer), [player]] call CBA_fnc_serverEvent;

    // Handle JIP persistence (disconnect/reconnect) for advanced fatigue.
    if ((GVAR(savePlayerStatus) == 2) && {isClass (configFile >> "CfgPatches" >> "ace_advanced_fatigue")}) then {
        GVAR(advancedFatigue) = [];
    };
};

GVAR(configReady) = true;
