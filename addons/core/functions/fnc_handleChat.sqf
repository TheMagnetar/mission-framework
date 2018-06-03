/*
 * Author: TheMagnetar
 * Adds an item to the player.
 *
 * Arguments:
 * 0: Unit <OBJECT> (Default: objNull)
 * 1: Item <STRING>
 *
 * Return Value:
 * Adding successfull <BOOL>
 *
 * Example:
 * [player, "ACRE_PRC77"] call umf_core_fnc_addItem
 *
 * Public: Yes
 */
#include "script_component.hpp"

if (GVAR(chatEnabled)) then {
    0 enableChannel false;
} else {
    0 enableChannel [true, false];
};

GVAR(chatEnabled) = !GVAR(chatEnabled);
