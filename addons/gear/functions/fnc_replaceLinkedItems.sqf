//=======================================================================================================//
// File: fn_configEquipment_replaceLinkedItems.sqf                                                       //
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

params ["_unit", "_items", "_type"];

private _selectedItem = "";

if !(EGVAR(core,acreLoaded) && {_type isEqualTo "radio"}) then {
    if (count _items > 0) then {
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
