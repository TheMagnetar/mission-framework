#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Configures the ACE3 medical feature instant death. After a certain amount of game time, instant death will be disabled.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call mf_ace_fnc_preventInstantDeath
 *
 * Public: No
 */

if (GVAR(preventInstaDeathTime) == 0) exitWith {};

if (hasInterface) then {
    ace_medical_preventInstaDeath = true;
};

if (isServer) then {
    GVAR(preventInstaDeathPFH) = [{
        private _elapsedTime = GVAR(preventInstaDeathTime) - CBA_missionTime;

        if (_elapsedTime <= 0) then {
            ace_medical_preventInstaDeath = true;
            publicVariable "ace_medical_preventInstaDeath";

            [GVAR(preventInstaDeathPFH)] call CBA_fnc_removePerFrameHandler
        };
    }, 60, 1] call CBA_fnc_addPerFrameHandler;
};
