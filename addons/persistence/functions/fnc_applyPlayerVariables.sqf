#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Saves a list of variables that are important for persistence into the unit object.
 *
 * Arguments:
 * 0: Unit <OBJECT> (default: objNull)
 * 1: Variables to save <ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call umf_acre_fnc_applyPlayerVariables
 *
 * Public: Yes
 */

params ["_unit", "_variables"];

{
    _x params ["_name", "_value"];

    _unit setVariable [_name, _value, true];
} forEach _variables;

// Handle advanced fatigue
if ((GVAR(saveStatus) == 2) && {EGVAR(core,aceLoaded)}) then {
    {
        _x params ["_name", "_value"];
        call compile format ["%1 = %2;", _name, _value];
    } forEach GVAR(advancedFatigue);
};

LOG("Previous status successfully restored");

_unit setVariable [QGVAR(statusRetrieved), true];
