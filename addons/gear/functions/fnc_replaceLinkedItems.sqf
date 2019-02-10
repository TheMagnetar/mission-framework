#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Replaces a certain type of linked item from the unit's inventory.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Array of items (it will be randomly selected) <ARRAY>
 * 2: Type of item <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, ["gpsxxx", "gpsyyy"], "gps"] call umf_gear_fnc_replaceLinkedItems
 *
 * Public: No
 */

params ["_unit", "_items", "_type"];

private _selectedItem = "";

if !(EGVAR(core,acreLoaded) && {_type isEqualTo "radio"}) then {
    if !(_items isEqualTo []) then {
        _selectedItem = selectRandom _items;
    };
};

switch (toLower _type) do {
    case "map": {
        _unit unlinkItem "ItemMap";
        if (_selectedItem != "") then {
            _unit linkItem _selectedItem;
        };
    };
    case "radio": {
        if (EGVAR(core,acreLoaded)) then {
            {
                _unit addItem _x;
            } forEach _items;
        } else {
            _unit linkItem _selectedItem;
        };
    };
    case "gps": {
        _unit unlinkItem "ItemGPS";
        if !(_selectedItem isEqualTo "") then {
            _unit linkItem _selectedItem;
        };
    };
    case "compass": {
        _unit unlinkItem "ItemCompass";
        if (_selectedItem != "") then {
            _unit linkItem _selectedItem;
        };
    };
    case "watch": {
        _unit unlinkItem "ItemWatch";
        if (_selectedItem != "") then {
            _unit linkItem _selectedItem;
        };
    };
};
