#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Replaces a certain type of gear from the unit's inventory.
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
 * [player, ["uniformxxx", "uniformyyy"], "uniform"] call umf_gear_fnc_replaceGear
 *
 * Public: No
 */

params ["_unit", "_items", "_type"];

private _selectedItem = "";

if !(_items isEqualTo []) then {
    _selectedItem = selectRandom _items;
};

switch (toLower _type) do {
    case "uniform": {
        if (uniform _unit != _selectedItem) then {
            removeUniform _unit;
            if !(_selectedItem isEqualTo "") then {
                _unit forceAddUniform _selectedItem;
            };
        };
    };
    case "vest": {
        if (vest _unit != _selectedItem) then {
            removeVest _unit;
            if !(_selectedItem isEqualTo "") then {
                _unit addVest _selectedItem;
            };
        };
    };
    case "backpack": {
        if (backpack _unit != _selectedItem) then {
            removeBackpack _unit;
            if !(_selectedItem isEqualTo "") then {
                _unit addBackpack _selectedItem;
            };
        };
    };
    case "headgear": {
        if (headgear _unit != _selectedItem) then {
            removeHeadgear _unit;
            if !(_selectedItem isEqualTo "") then {
                _unit addHeadgear _selectedItem;
            };
        };
    };
    case "nightvision": {
        if (hmd _unit != _selectedItem) then {
            _unit unlinkItem (hmd _unit);
            if !(_selectedItem isEqualTo "") then {
                _unit linkItem _selectedItem;
            };
        };
    };
    case "goggles": {
        if (goggles _unit != _selectedItem) then {
            removeGoggles _unit;
            if !(_selectedItem isEqualTo "") then {
                _unit addGoggles  _selectedItem;
            };
        };
    };
    case "binoculars": {
        if (binocular _unit != _selectedItem) then {
            _unit removeWeapon (binocular _unit);
            if !(_selectedItem isEqualTo "") then {
                _unit addWeapon _selectedItem;
            };
        };
    };
};
