#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Equips the unit according to a specified role and depending on the defined faction.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Unit role <STRING> (default: "")
 * 2: Unit faction <STRING> (default: "")
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call mf_gear_fnc_assignGear
 *
 * Public: No
 */

params ["_unit", ["_role", ""], ["_faction", ""]];

if (_role isEqualTo "") then {
    _role = _unit getVariable [QGVAR(role), ""];
    if (_role isEqualTo "") then {
        _unit setVariable [QGVAR(role), "rfl", true];
        _role = "rfl";
    };
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

private _forceBackpackRadio = getNumber (_configEntry >> "forceBackpackRadio");
_unit setVariable [QGVAR(forceBackpackRadio), _forceBackpackRadio == 1, true];

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
} forEach ["primaryWeapon", "handgun", "launcher"];


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
