#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Does some tasks on the client before finishing the mission .
 *
 * Arguments:
 * 0: Unit <OBJECT> (Default: objNull)
 * 1: Item <STRING>
 *
 * Return Value:
 * Adding successfull <BOOL>
 *
 * Example:
 * [player, "ACRE_PRC77"] call umf_persistence_fnc_serverSaveObject
 *
 * Public: No
 */

private _searchObjectsFnc = {
    params ["_objectList", "_isVehicle"];

    private _informationList = [];
    {
        private _mainObject = _x;
        private _items = getItemCargo _mainObject;
        private _pos = getPosASL _mainObject;
        private _subObjects = everyContainer _mainObject;
        if !(_subObjects isEqualTo []) then {
            {
                _x params ["_class", "_object"];
                _items deleteAt (_items find _class);
                _items pushBack [_class, getItemCargo _object];
            } forEach _subObjects;
        };
        private _crew = [];
        private _damage = [];

        if (_isVehicle) then {
            {
                _crew pushBack [getPlayerUID (_x select 0), _x select 1, _x select 2, _x select 3];
            } forEach (fullCrew _mainObject);

            _damage = getAllHitPointsDamage _mainObject;
        };

        _informationList pushBack [typeOf _mainObject, _pos, _items, [_crew, _damage]];
    } forEach _objectList;

    _informationList
};

private _profileInformation = profileNamespace getVariable [QGVAR(persistence), objNull];
private _informationList = _profileInformation getVariable [GVAR(campaignName), []];

private _searchObjects = (allMissionObjects "WeaponHolder") select {_x getVariable [QGVAR(persist), false]};
private _informationList = [_searchObjects, false] call _searchObjectsFnc;
[_informationList, "objects", _informationList] call CBA_fnc_hashSet;

_searchObjects = vehicles select {_x getVariable [QGVAR(persist), false] && {alive _x}};
_informationList = [_searchObjects, true] call _searchObjectsFnc;
[_informationList, "vehicles", _informationList] call CBA_fnc_hashSet;

profileNamespace setVariable [QGVAR(persistence), _profileInformation];
