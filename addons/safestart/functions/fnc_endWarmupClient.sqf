#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Ends the warmup phase.
 *
 * Arguments:
 * 0: Unit <OBJECT> (Default: acre_player)
 *
 * Return Value:
 * CBA PFH ID <NUMBER>
 *
 * Example:
 * [acre_player] call mf_safestart_fnc_endWarmupClient
 *
 * Public: No
 */

params [["_unit", player]];

if (!hasInterface) exitWith {};

GVAR(finished) = true;

// Reenable damage
_unit allowDamage true;

// Allow firing
[_unit] call EFUNC(core,enableFiring);

if (GVAR(safeStartPFH) > -1) then {
    [GVAR(safeStartPFH)] call CBA_fnc_removePerFrameHandler;
};

// Remove safe start count down
TIMER_DIALOG_IDD cutFadeOut 0;
TIMER_DIALOG_IDD cutFadeOut 1;
