#include "script_component.hpp"

// Disable Saving and Automatic Saving. https://community.bistudio.com/wiki/enableSaving
enableSaving [false, false];

// Disable radio chatter: https://community.bistudio.com/wiki/enableSentences
enableSentences false;

[QGVAR(finishMission),{
    [] execVM "missionConfig\endMission.sqf"
}] call CBA_fnc_addEventHandler;

[
    "UMF",
    QGVAR(handleChat),
    ["Global chat enable", "Enables/disables global chat"],
    "",
    {
        [] call FUNC(handleChat);
    },
    [DIK_PERIOD, [true, true, true]]
] call CBA_fnc_addKeybind;

// Disable all channels
{
    _x enableChannel [false, false];
} forEach [0, 1, 2, 3, 4, 5, 6];
