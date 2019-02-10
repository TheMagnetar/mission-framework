/*
 * Author: TheMagnetar
 * Configures the chat.
 *
 * Arguments:
 * Nonee
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call umf_core_fnc_handleChat
 *
 * Public: No
 */
#include "script_component.hpp"

if (GVAR(chatEnabled)) then {
    0 enableChannel false;
} else {
    0 enableChannel [true, false];
};

GVAR(chatEnabled) = !GVAR(chatEnabled);
