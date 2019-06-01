#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Allows a unit to fire again.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call mf_core_fnc_enableFiring;
 *
 * Public: No
 */

params ["_unit"];

private _preventFiringEH = _unit getVariable [QGVAR(preventFiringEH), -1];
private _preventAction = _unit getVariable [QGVAR(preventAction), -1];

if (_preventFiringEH == -1 || _preventAction == -1) exitWith {};

_unit removeEventHandler ["Fired", _preventFiringEH];
_unit removeAction _preventAction;

// Reenable ACE Advanced Throwing
ace_advanced_throwing_enabled = true;
