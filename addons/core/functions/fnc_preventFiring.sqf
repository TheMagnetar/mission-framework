#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Prevents a unit from firing.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call umf_core_fnc_preventFiring;
 *
 * Public: No
 */

params ["_unit"];

if (_unit getVariable [QGVAR(preventFiringEH), -1] != -1) exitWith {};

private _action = _unit addAction ["", {
    [player, currentWeapon player] call ace_safemode_fnc_playChangeFiremodeSound;
    PREVENTFIRING_DIALOG_IDD cutRsc [QGVAR(preventFiring), "PLAIN"];
}, "", 0, false, true, "DefaultAction", "true"];

// Prevent firing
ace_advanced_throwing_enabled = false;

// Prevent firing
private _preventFiring = _unit addEventHandler ["Fired", {
    params ["_unit", "_weapon", "", "", "_ammo", "", "_projectile", ""];

    deleteVehicle _projectile;

    if((toLower _weapon) isEqualTo "throw") then {
        player addMagazine _ammo;
        playSound3D ["a3\sounds_f\weapons\Other\dry9.wss", _unit];
        PREVENTFIRING_DIALOG_IDD cutRsc [QGVAR(preventFiring), "PLAIN"];
    };
}];

_unit setVariable [QGVAR(preventFiringEH), _preventFiring];
_unit setVariable [QGVAR(preventAction), _action];
