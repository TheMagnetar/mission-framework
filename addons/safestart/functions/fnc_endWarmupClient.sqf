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
 * [player] call umf_safestart_fnc_startWarmup
 *
 * Public: No
 */

params ["_unit"];

if (!hasInterface) exitWith {};

GVAR(safeStartFinished) = true;

_unit allowDamage true;
if (GVAR(safePosPFH) > -1) then {
    [GVAR(safePosPFH)] call CBA_fnc_removePerFrameHandler;
};
