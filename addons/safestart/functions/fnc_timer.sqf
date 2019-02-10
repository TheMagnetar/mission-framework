#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Safe start timer. It shows minutes and seconds until safe start finishes.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call umf_safestart_fnc_timer
 *
 * Public: No
 */

private _timeLeft = GVAR(safeStartTime)*60 - CBA_missionTime;
private _formatTime = {
    params ["_val"];

    if (_val < 10) then {
        _val = format ["0%1", _val];
    } else {
        _val = str _val;
    };

    _val
};

private _minutes = floor (_timeLeft / 60);
private _seconds = [floor (_timeLeft - (_minutes * 60))] call _formatTime;
_minutes = [_minutes] call _formatTime;

private _ctrl = ((uiNamespace getVariable [QGVAR(timerDisplay), displayNull]) displayCtrl TIMER_DIALOG_IDC);

if (_seconds == "00" && {_minutes == "00"}) then {
    _ctrl ctrlSetText (localize LSTRING(safeStartOver));
}  else {
    _ctrl ctrlSetText (format [localize LSTRING(safestartTime), _minutes, _seconds]);
};
