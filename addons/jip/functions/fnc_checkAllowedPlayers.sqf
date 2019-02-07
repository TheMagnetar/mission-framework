#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * checks if a JIP player belongs to the allowed JIP players list. It does so by comparing the stored player
 * UID and profile name with the ones of the given playable unit.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call umf_jip_fnc_checksAllowedPlayer
 *
 * Public: No
 */

params ["_unit"];

if (GVAR(allowedPlayers) isEqualTo []) exitWith {
    WARNING_1("Variable %1 is not defined.",QGVAR(allowedPlayers));
};

private _found = false;
{
    _x params ["_uid", "_name"];
    if ((_uid == getPlayerUID _unit) && {_name == name _unit}) exitWith {
        _found =  true;
    };
} forEach GVAR(allowedPlayers);

LOG_3("Player named %1 with UID %2 is in the allowed JIP list: %3.",name _unit,getPlayerUID _unit,_found);

_found

//============================================= END OF FILE =============================================//
