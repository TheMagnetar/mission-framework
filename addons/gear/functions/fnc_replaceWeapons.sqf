//=======================================================================================================//
// File: fn_configEquipment_replaceWeapon.sqf                                                            //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2018/05/16                                                                             //
// Description: This function equips the unit according to a specified role and depending on the defined //
//              faction.                                                                                 //
//                                                                                                       //
// Arguments:                                                                                            //
//    - 0: Unit <OBJECT>                                                                                 //
//    - 1: Items <ARRAY>                                                                                 //
//    - 2: Type of item <STRING>                                                                         //
//                                                                                                       //
// Return:                                                                                               //
//      None                                                                                             //
//                                                                                                       //
// Changes: 1.0  (2018/05/16) First public version.                                                      //
//=======================================================================================================//

#include "script_component.hpp"
params ["_unit", "_weapons", "_type"];

private _selectedWeapon = "";

if (count _weapons > 0) then {
    _selectedWeapon = selectRandom _weapons;
};

if  (count _selectedWeapon == 0) exitWith{};

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
    case "secondaryweapon": {
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
            _unit removeWeapon (secondaryWeapon  _unit);
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
