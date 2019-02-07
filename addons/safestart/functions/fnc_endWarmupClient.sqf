#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Ends the warmup phase.
 *
 * Arguments:
 * 0: Unit <OBJECT> (Default: objNull)
 *
 * Return Value:
 * CBA PFH ID <NUMBER>
 *
 * Example:
 * [player] call umf_safestart_fnc_endWarmupClient
 *
 * Public: No
 */

params ["_unit"];

if (!hasInterface) exitWith {};

GVAR(finished) = true;

_unit allowDamage true;
if (GVAR(safeStartPFH) > -1) then {
    [GVAR(safeStartPFH)] call CBA_fnc_removePerFrameHandler;
};

// Remove safe start count down
TIMER_DIALOG_IDD cutFadeOut 0;
TIMER_DIALOG_IDD cutFadeOut 1;
