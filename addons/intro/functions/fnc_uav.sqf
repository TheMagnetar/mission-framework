#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Prepares a introduction screen with a UAV feed. This function should not be manually executed, since it
 * is directly called from `missionConfig/intro/scripts/bmt_intro.sqf`.
 *
 * Arguments:
 * 0: Marker where the UAV camera is centered <STRING>
 * 1: Text displayed in the upper left corner <STRING>
 * 2: Configuration of UAV movement <ARRAY>
 * - 0: Altitude in meters of the stablishing shot <NUMBER>
 * - 1: Radius of the circular movement in meters <NUMBER>
 * - 2: Viewing angle in degrees <NUMBER>
 * - 3: Direction of camera movement (0: anti-clockwise, 1: clockwise, default: random) <NUMBER>
 * 3: Sixth parameter of the function BIS_fnc_establishingShot (https://community.bistudio.com/wiki/BIS_fnc_establishingShot) <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * -A random animation is selected from the predefined ones (no night vision):
 * ["Operation Desert Fox", "Iran", "Alpha 1" + name player, false] spawn mf_intro_playerCamera;
 * - A random animation is selected from the given ones (with night vision):
 * ["Operation Desert Fox", "Iran", "Alpha 1" + name player, trye] spawn mf_intro_playerCamera;
 *
 * Public: Yes
 */

params ["_markerName", "_text", "_uavMovement", "_markers"];

// Disable simulation for all units during the UAV feed.
{
    _x enableSimulation false;
} forEach allUnits;

player enableSimulation false;

if (vehicle player != player) then {
    (vehicle player) enableSimulation false;
};

enableEnvironment false;
0 fadeSound 0;

[
    markerPos _markerName,     // Target position/object
    format ["%1", _text],      // Text to display
    _uavMovement select 0,     // Altitude (in meters)
    _uavMovement select 1,     // Radius of the circular movement (in meters)
    _uavMovement select 2,     // Viewing angle (in degrees)
    _uavMovement select 3,     // Direction of camera movement (0: anti-clockwise, 1: clockwise, default: random)
    _markers
] spawn BIS_fnc_establishingShot;

waitUntil {GVAR(initScritpsLoaded)};

// Screen starts.
titleCut ["", "BLACK FADED", 5];

// Reenable simulation for all units.
player enableSimulation true;

if (vehicle player != player) then {
    (vehicle player) enableSimulation true;
};

[] spawn {
    sleep 5;
    titleCut ["", "BLACK IN", 5];
    "dynamicBlur" ppEffectEnable true;
    "dynamicBlur" ppEffectAdjust [6];
    "dynamicBlur" ppEffectCommit 0;
    "dynamicBlur" ppEffectAdjust [0.0];
    "dynamicBlur" ppEffectCommit 5;
    enableEnvironment true;
    5 fadeSound 1;
};

player setVariable [QGVAR(introFinished), true];
