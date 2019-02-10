#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Wait in respawn timer. It shows minutes and seconds until a player can leave the respawn area.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call umf_respawn_fnc_timer
 *
 * Public: No
 */

private _timeLeft = GVAR(respawnAreaTime)*60 - GVAR(killedTime);
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
    _ctrl ctrlSetText (localize LSTRING(areaRespawnOver));
}  else {
    _ctrl ctrlSetText (format [localize LSTRING(respawnAreaTime), _minutes, _seconds]);
};
