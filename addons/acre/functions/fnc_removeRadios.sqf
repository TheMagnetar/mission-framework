/*
 * Author: TheMagnetar
 * Removes all ACRE radios from the inventory.
 *
 * Arguments:
 * 0: Unit <OBJECT> (Default: objNull)
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call umf_acre_fnc_removeRadios
 *
 * Public: Yes
 */
#include "script_component.hpp"

params [["_unit", objNull]];

// Remove all radios from unit's inventory using ACRE 2 API.
{
    _unit removeItem _x;
} forEach ([] call acre_api_fnc_getCurrentRadioList);
