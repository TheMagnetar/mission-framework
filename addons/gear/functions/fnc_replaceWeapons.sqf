#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Replaces a certain type of weapon from the unit's inventory.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Array of weapons (it will be randomly selected) <ARRAY>
 * 2: Type of weapon <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, ["weaponxX", "weaponY"], "primaryWeapon"] call umf_gear_fnc_replaceWeapons
 *
 * Public: No
 */

#include "script_component.hpp"
params ["_unit", "_weapons", "_type"];

private _selectedWeapon = "";
if !(_weapons isEqualTo []) then {
    _selectedWeapon = selectRandom _weapons;
};

if (_selectedWeapon isEqualTo [] || {_selectedWeapon isEqualTo ""}) exitWith {
    switch (toLower _type) do {
        case "primaryweapon": {
             _unit removeWeapon (primaryWeapon _unit);
        };
        case "handgun": {
            _unit removeWeapon (handgunWeapon _unit);
        };
        case "launcher": {
            _unit removeWeapon (secondaryWeapon _unit);
        };
    };
};

switch (toLower _type) do {
    case "primaryweapon": {
        if (primaryWeapon _unit != _selectedWeapon select 0) then {
            _unit removeWeapon (primaryWeapon _unit);
            _unit addWeapon (_selectedWeapon select 0);
        };

        removeAllPrimaryWeaponItems _unit;
        // Remove all primary weapon magazines
        {
            _unit removePrimaryWeaponItem _x;
        } forEach (primaryWeaponMagazine _unit);

        {
            private _attachment = _x;
            if (_x isEqualType []) then {
                _attachment = selectRandom _x;
            };
            _unit addPrimaryWeaponItem _attachment;
        } forEach _selectedWeapon select [1, count _selectedWeapon -1];
    };
    case "handgun": {
        if (handgunWeapon _unit != _selectedWeapon select 0) then {
            _unit removeWeapon (handgunWeapon _unit);
            _unit addWeapon (_selectedWeapon select 0);
        };

        removeAllHandgunItems _unit;
        // Remove all primary weapon magazines
        {
            _unit removeHandgunItem _x;
        } forEach (handgunMagazine _unit);

        {
            private _attachment = _x;
            if (_x isEqualType []) then {
                _attachment = selectRandom _x;
            };
            _unit addHandgunItem _attachment;
        } forEach _selectedWeapon select [1, count _selectedWeapon -1];
    };
    case "launcher": {
        if (secondaryWeapon  _unit != _selectedWeapon select 0) then {
            _unit removeWeapon (secondaryWeapon _unit);
            _unit addWeapon (_selectedWeapon select 0);
        };

        {
            _unit removeSecondaryWeaponItem _x;
        } forEach (secondaryWeaponItems _unit);

        // Remove all primary weapon magazines
        {
            _unit removeSecondaryWeaponItem _x;
        } forEach (secondaryWeaponMagazine _unit);

        {
            private _attachment = _x;
            if (_x isEqualType []) then {
                _attachment = selectRandom _x;
            };
            _unit addSecondaryWeaponItem  _attachment;
        } forEach _selectedWeapon select [1, count _selectedWeapon -1];
    };
};
