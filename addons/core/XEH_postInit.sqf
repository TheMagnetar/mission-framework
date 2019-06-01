#include "script_component.hpp"

// Disable radio chatter: https://community.bistudio.com/wiki/enableSentences
enableSentences false;

[
    "MF",
    QGVAR(handleChat),
    ["Global chat enable", "Enables/disables global chat"],
    "",
    {
        [] call FUNC(handleChat);
    },
    [DIK_PERIOD, [true, true, true]]
] call CBA_fnc_addKeybind;

if !(hasInterface) exitWith {};

// Handles the unit rating of players in order to avoid being shot in case of friendly fire
player addEventHandler ["HandleRating", { 10000 }];

[] call FUNC(checkVersions);
