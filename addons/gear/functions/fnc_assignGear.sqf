//=======================================================================================================//
// File: fn_configEquipment.sqf                                                                          //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2018/05/16                                                                             //
// Description: This function equips the unit according to a specified role and depending on the defined //
//              faction.                                                                                 //
//                                                                                                       //
// Arguments:                                                                                            //
//    - 0: Unit <OBJECT>                                                                                 //
//    - 1: Unit role <STRING><OPTIONAL>                                                                  //
//    - 2: Unit faction <STRING><OPTIONAL>                                                               //
//                                                                                                       //
// Return:                                                                                               //
//      None                                                                                             //
//                                                                                                       //
// Changes: 1.0  (2015/11/26) First public version.                                                      //
//          2.0  (2018/05/16) Rewrite.                                                                   //
//=======================================================================================================//

#include "script_component.hpp"

params ["_unit", ["_role", ""], ["_faction", ""]];

if (_role isEqualTo "") then {
    _role = _unit getVariable [QGVAR(role), "rfl"];
} else {
    _unit setVariable [QGVAR(role), _role, true];
};

if (_faction isEqualTo "") then {
    _faction = _unit getVariable [QGVAR(faction), faction _unit];
} else {
    _unit setVariable [QGVAR(faction), _faction, true];
};

// Begin gear assignement depending on unit's role.
private _configEntry = missionConfigFile >> "CfgLoadouts" >> _faction;

if (!isClass _configEntry) then {
    _configEntry = configFile >> "CfgLoadouts" >> _faction;

    if (!isClass _configEntry) exitWith {
        WARNING_1("Faction not found %1",_faction);
    };
};

_configEntry = _configEntry >> _role;

if (!isClass _configEntry) exitWith {
    WARNING_1("Role not found %1",_role);
};

private _forceItems = getNumber (_configEntry >> "forceItems");
_unit setVariable [QGVAR(forceItems), _forceItems == 1, true];

[_unit] call compile (getText (_configEntry >> "preLoadout"));

{
    if (isArray (_configEntry >> _x)) then {
        [_unit, getArray (_configEntry >> _x), _x] call FUNC(replaceGear);
    };
} forEach ["uniform", "vest", "backpack", "headgear", "goggles", "binoculars", "nightvision"];

{
    if (isArray (_configEntry >> _x)) then {
        [_unit, getArray (_configEntry >> _x), _x] call FUNC(replaceWeapons);
    };
} forEach ["primaryWeapon", "secondaryWeapon", "launcher"];


private _backpackItems = getArray (_configEntry >> "backpackItems");
{
    if (isArray (_configEntry >> _x)) then {
        _backpackItems append ([_unit, getArray (_configEntry >> _x), _x] call FUNC(replaceItem));
    };
} forEach ["magazines", "items"];

private _couldNotAdd = [_unit, _backpackItems, "backpackitems"] call FUNC(replaceItem);

if !(_couldNotAdd isEqualTo []) then {
    WARNING_1("The following items could not be added %1",_couldNotAdd);
};

{
    if (isArray (_configEntry >> _x)) then {
        [_unit, getArray (_configEntry >> _x), _x] call FUNC(replaceLinkedItems);
    };
} forEach ["map", "radio", "gps", "compass", "watch"];

// Select the primary weapon
_unit selectWeapon (primaryWeapon _unit);

// Set unit rank
private _rank = getArray (_configEntry >> "rank");
if !(_rank isEqualTo []) then {
    _unit setUnitRank (selectrandom _rank);
};

// Set unit Insignia
private _insignia = getArray (_configEntry >> "insignia");
if !(_insignia isEqualTo []) then {
    [_unit, selectRandom _insignia] call bis_fnc_setUnitInsignia;
};

// Configure languages
private _languages = getArray (_configEntry >> "languages");
_unit setVariable [QEGVAR(acre,languages), _languages, true];

[_unit] call compile (getText (_configEntry >> "postLoadout"));

//============================================= END OF FILE =============================================//
