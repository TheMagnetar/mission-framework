#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Starts the warmup phase on the server
 *
 * Arguments:
 * 0: PerFrameHandler arguments <ARRAY> (Not used)
 * 1: PerFrameHandler ID <NUMBER>
 *
 * Return Value:
 * CBA PFH ID <NUMBER>
 *
 * Example:
 * [] call mf_safestart_fnc_warmupServerPFH
 *
 * Public: No
 */

params ["", "_pfhId"];

private _elapsedTime = GVAR(safeStartTime)*60 - CBA_missionTime;

if (_elapsedTime <= 0) then {
    [QGVAR(safeStartFinishEvent), []] call CBA_fnc_globalEventJIP;
    [_pfhId] call CBA_fnc_removePerFrameHandler
};
