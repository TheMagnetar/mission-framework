#include "script_component.hpp"

[QGVAR(registerPlayer), DFUNC(addAllowedPlayer)] call CBA_fnc_addEventHandler;
[QGVAR(processJipPlayer), DFUNC(processJipPlayer)] call CBA_fnc_addEventHandler;
[QGVAR(checkAllowedPlayers), DFUNC(checkAllowedPlayers)] call CBA_fnc_addEventHandler;

if (GVAR(allowedTime) == 0) exitWith { GVAR(isAllowed) = false; };

if (isServer) then {
    GVAR(timePFH) = [{
        private _elapsedTime = GVAR(allowedTime)*60 - CBA_missionTime;

        if (_elapsedTime <= 0) then {
            [GVAR(timePFH)] call CBA_fnc_removePerFrameHandler;
            missionNamespace setVariable [QGVAR(isAllowed), false, true];
        };
    }, 5, []] call CBA_fnc_addPerFrameHandler;

    if (GVAR(savePlayerStatus) > 0) then {
        addMissionEventHandler ["HandleDisconnect", {
            params ["_unit", "", "_uid", "_name"];
            [_unit, _uid, _name, true] call EFUNC(persistence,clientSaveStatus);
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

    [{EGVAR(gear,gearAssigned)}, {
        [QGVAR(checkAllowedPlayers), [player]] call CBA_fnc_serverEvent;
    }] call CBA_fnc_waitUntilAndExecute;
} else {
    // Initialise a list of all players that initially connect.
    [QGVAR(registerPlayer), [player]] call CBA_fnc_serverEvent;

    // Handle JIP persistence (disconnect/reconnect) for advanced fatigue.
    if ((GVAR(savePlayerStatus) == 2) && {isClass (configFile >> "CfgPatches" >> "ace_advanced_fatigue")}) then {
        GVAR(advancedFatigue) = [];
    };

    GVAR(configReady) = true;
};
