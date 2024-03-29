#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Replaces a certain type of item from the unit's inventory.
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
 * [player, ["itemxxx", "itemyyy"], "items"] call mf_gear_fnc_replaceItem
 *
 * Public: No
 */

params ["_unit", "_items", "_type"];

private _couldNotAdd = [];

_type = toLower _type;

if (_type == "magazines") then {
    { _unit removeMagazineGlobal _x; } forEach (magazines _unit);
};

if (_type == "items") then {
    removeAllItems _unit;
};

private _compatibleMagazines = [];
private _compatibleMagazinesAttachment = [];
private _weapons = [primaryWeapon _unit, handgunWeapon _unit, secondaryWeapon _unit];

if (_type == "magazines") then {
    { _unit removeMagazineGlobal _x; } forEach (magazines _unit);

    {
        _compatibleMagazines pushBack ((getArray (configFile >> "CfgWeapons" >> _x >> "magazines")) apply {toLower _x});
        private _muzzles = getArray (configFile >> "CfgWeapons" >> _x >> "muzzles");
        private _muzzle = "";
        if (count _muzzles > 1) then {
            _muzzle = _muzzles select 1;
        };

        if (_muzzle != "") then {
            _compatibleMagazinesAttachment pushBack (getArray (configFile >> "CfgWeapons" >> _x >> _muzzle >> "magazines") apply {toLower _x});
        } else {
            _compatibleMagazinesAttachment pushBack [""];
        };
    } forEach _weapons;
};

{
    private _selectedItem = _x;

    private _loadedMagazines = [];
    private _conditionMagazine = false;
    private _conditionMagazineAttachment = false;
    private _weapon = "";
    if (_type == "magazines") then {
        _loadedMagazines = [primaryWeaponMagazine _unit, handgunMagazine _unit, secondaryWeaponMagazine _unit];

        {
            private _loadMag = (_loadedMagazines select _forEachIndex);
            if !(_loadMag isEqualTo []) then {
                _loadMag = _loadMag apply {toLower _x};
            };

            if ((toLower _selectedItem) in _x && {(_loadMag arrayIntersect _x) isEqualTo []}) exitWith {
                _conditionMagazine = true;
                _weapon = _weapons select _forEachIndex;
            };
        } forEach _compatibleMagazines;

        if (!_conditionMagazine) then {
            {
                private _loadMag = (_loadedMagazines select _forEachIndex);
                if !(_loadMag isEqualTo []) then {
                    _loadMag = _loadMag apply {toLower _x};
                };

                if ((toLower _selectedItem) in _x && {(_loadMag arrayIntersect _x) isEqualTo []}) exitWith {
                    _conditionMagazineAttachment = true;
                    _weapon = _weapons select _forEachIndex;
                };
            } forEach _compatibleMagazinesAttachment;
        };
    };

    switch (true) do {
        case (_conditionMagazine || {_conditionMagazineAttachment}): {_unit addWeaponItem [_weapon, _selectedItem];};
        case (_unit canAddItemToUniform _selectedItem): {_unit addItemToUniform _selectedItem;};
        case (_unit canAddItemToVest _selectedItem): {_unit addItemToVest _selectedItem;};
        case ((_unit canAddItemToBackpack _selectedItem) && {_type isEqualTo "backpackitems"}): {
            _unit addItemToBackpack _selectedItem;
        };
        default {_couldNotAdd pushBack _selectedItem;};
    };
} forEach _items;

_couldNotAdd
