//=======================================================================================================//
// File: fn_configEquipment_replaceGear.sqf                                                              //
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

if (count _items > 0) then {
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
