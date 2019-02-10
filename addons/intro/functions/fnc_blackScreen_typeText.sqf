#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * A black screen with a citation initially appears. It fades slowly using a blur effect while showing the
 * mission name, mission location and mission date. This function should not be manually executed, since it is
 * directly called from `missionConfig/intro/scripts/bmt_intro.sqf`.
 *
 * Arguments:
 * 0: Mission name <STRING>.
 * 1: Mission location <STRING>.
 * 2: Text displayed in the center of the screen <STRING>.
 * 3: Date and Time <STRING> (default: "default")
 *
 * Return Value:
 * None
 *
 * Example:
 * ["Operation Desert Fox", "Iran","Soldiers live. And wonder why.\nGlen Cook"] spawn umf_intro_fnc_blackScreen_typeText
 *
 * Public: Yes
 */

params ["_missionName", "_missionLocation", "_introText", ["_dateAndTime", "default"]];

// Show a black screen.
titleCut ["", "BLACK FADED", 999];

// Disable simulation for all units during the black screen.
player enableSimulation false;

if (vehicle player != player) then {
    (vehicle player) enableSimulation false;
};

// Citation display.
titleText [_introText,"PLAIN"];

waitUntil {initScritpsLoaded};
titleFadeOut 5;

if (_dateAndTime isEqualTo "default") then {
    _dateAndTime = ([([daytime] call BIS_fnc_TimeToString),0,4] call BIS_fnc_trimString) + " " + str(date select 2) + "." + str(date select 1) + "." + str(date select 0)
};

// Mision name, mission location and mission date.
[
    [
        [_missionName,"<t color = '#F70D1A' align = 'right' shadow = '1' size = '1.2'>%1</t><br/>"],
        [_dateAndTime,"<t align = 'right' shadow = '1' size = '1.0'>%1</t><br/>"],
        [_missionLocation,"<t align = 'right' shadow = '1' size = '1.0'>%1</t>"]
    ],-safeZoneX,-safeZoneY
] spawn BIS_fnc_typeText;

sleep 5;
"dynamicBlur" ppEffectEnable true;
"dynamicBlur" ppEffectAdjust [6];
"dynamicBlur" ppEffectCommit 0;
"dynamicBlur" ppEffectAdjust [0.0];
"dynamicBlur" ppEffectCommit 5;

titleCut ["", "BLACK IN", 5];

player enableSimulation true;

if (vehicle player != player) then {
    (vehicle player) enableSimulation true;
};

player setVariable [QGVAR(introFinished), true];
