#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Handles showing/hiding the respawn counter display.
 *
 * Arguments:
 * 0: Show (true) or hide (false) the respawn counter display <BOOL> (default: true)
 *
 * Return Value:
 * None
 *
 * Example:
 * [true] call umf_respawn_respawnCounter
 *
 * Public: No
 */

params [["_enter", true]];

if (_enter) then {
    private _layer = "BIS_fnc_respawnCounter" call bis_fnc_rscLayer;
    _layer cutText ["", "plain"];

    missionnamespace setvariable ["RscRespawnCounter_description", format ["<t size='1' align='center'>%1</t>", localize LSTRING(respawning)]];
    missionnamespace setvariable ["RscRespawnCounter_colorID", 0];

    if (GVAR(respawnAreaTime) > 0) then {
        missionnamespace setvariable ["RscRespawnCounter_Custom", GVAR(respawnAreaTime)*60];
    } else {
        missionnamespace setvariable ["RscRespawnCounter_Custom", playerRespawnTime];
    };
    _layer cutRsc ["RscRespawnCounter", "plain"];
} else {
    private _layer = "BIS_fnc_respawnCounter" call bis_fnc_rscLayer;
    _layer cutText ["", "plain"];
};
