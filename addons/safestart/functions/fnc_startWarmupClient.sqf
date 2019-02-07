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
 * [player] call umf_safestart_fnc_startWarmup
 *
 * Public: No
 */

params ["_unit"];

if (isNull _unit) exitWith {
    ERROR("Null unit as input parameter.");
};

_unit allowDamage false;
private _markerName = format ["respawnArea_%1", side _unit];

if (getMarkerColor _markerName == "") exitWith {
    ERROR_1("Marker %1 does not exist",_markerName);
};

private _previousPos = getPosASL _unit;
if (_previousPos inArea _markerName) then {
    _previousPos = [_markerName] call CBA_fnc_randPosArea;
};

GVAR(safePosPFH) = [{
    params ["_params", ""];
    _params params ["_unit", "_marker", "_previousPos"];

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
