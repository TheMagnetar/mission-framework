/*
 * Author: TheMagnetar
 * Adds an item to the player.
 *
 * Arguments:
 * 0: Unit <OBJECT> (Default: objNull)
 * 1: Item <STRING>
 *
 * Return Value:
 * Adding successfull <BOOL>
 *
 * Example:
 * [player, "ACRE_PRC77"] call umf_core_fnc_addItem
 *
 * Public: Yes
 */
#include "script_component.hpp"

params ["_unit", "_item"];

if (isNull _unit || {_item isEqualTo ""}) exitWith {
    WARNING_2("Cannot add item %1 to unit %2",_item,_unit);
    false
};

private _canAdd = _unit canAdd _item;

if (_canAdd) then {
    _unit addItem _item;
} else {
    WARNING_2("Cannot add item %1 to unit %2",_item,_unit);
};

_canAdd
