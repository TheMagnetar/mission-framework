#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Starts the warmup phase by preventing taking damage and leaving the designated area.
 *
 * Arguments:
 * 0: Unit <OBJECT> (Default: objNull)
 *
 * Return Value:
 * CBA PFH ID <NUMBER>
 *
 * Example:
 * [player] call mf_safestart_fnc_startWarmupClient
 *
 * Public: No
 */

params ["_unit"];

if (isNull _unit) exitWith {
    ERROR("Null unit as input parameter.");
};

// Prevent damage
_unit allowDamage false;

// Prevent firing
[_unit] call EFUNC(core,preventFiring);

// Show safestart count down
TIMER_DIALOG_IDD cutRsc [QGVAR(timerDialog), "PLAIN"];

private _markerName = format ["safeStartArea_%1", side _unit];
// Check if there is a safe area
if (getMarkerColor _markerName == "") exitWith {
    ERROR_1("Marker %1 does not exist",_markerName);
    GVAR(safeStartPFH) = [DFUNC(timer), 1] call CBA_fnc_addPerFrameHandler;
};

private _previousPos = getPosASL _unit;
if (_previousPos inArea _markerName) then {
    _previousPos = [_markerName] call CBA_fnc_randPosArea;
};

GVAR(safeStartPFH) = [{
    params ["_params", ""];
    _params params ["_unit", "_marker", "_previousPos"];

    // Update the time
    [] call FUNC(timer);

    private _vehicle = objectParent _unit;
    if (isNull _vehicle) then {
        if !(_unit inArea _marker) then {
            hint localize LSTRING(cannotLeaveZone);
            _unit setPosASL _previousPos;
        } else {
            _params set [2, getPosASL _unit];
        };
    } else {
        // Do nothing if the vehicle is not local
        if !(_vehicle inArea _marker) then {
            hint localize LSTRING(cannotLeaveZone);
            if (local _vehicle) then {
                _vehicle setPosASL _previousPos;
            };
        } else {
            _params set [2, getPosASL _vehicle];
        };
    };
}, 1, [_unit, _markerName, _previousPos]] call CBA_fnc_addPerFrameHandler;
