#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Prevents the players from exiting the respawn area for a certain amount of  time.
 *
 * Arguments:
 * 0: Unit <OBJECT> (Default: objNull)
 *
 * Return Value:
 * CBA PFH ID <NUMBER>
 *
 * Example:
 * [player] call umf_safestart_fnc_startWarmupClient
 *
 * Public: No
 */

params ["_unit", "_markerName"];

// Prevent unit from taking damage
_unit allowDamage false;

private _previousPos = getPosASL _unit;
if (_previousPos inArea _markerName) then {
    _previousPos = [_markerName] call CBA_fnc_randPosArea;
};

// Show respawn count down
TIMER_DIALOG_IDD cutRsc [QGVAR(timerDialog), "PLAIN"];

[{
    params ["_params", "_pfhId"];
    _params params ["_unit", "_marker", "_previousPos"];

    // Update the time
    [] call FUNC(timer);

    if (GVAR(respawnAreaTime)*60 - GVAR(killedTime) <= 0) exitWith {
        _unit allowDamage false;

        // Remove respawn count down
        TIMER_DIALOG_IDD cutFadeOut 0;
        TIMER_DIALOG_IDD cutFadeOut 1;

        [_pfhId] call CBA_fnc_removePerFrameHandler;
    };

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
