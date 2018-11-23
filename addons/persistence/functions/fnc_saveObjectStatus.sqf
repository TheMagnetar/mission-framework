#include "script_component.hpp"

private _searchObjects = (allMissionObjects "WeaponHolder") select {_x getVariable [QGVAR(persist), false]};
_searchObjects append (vehicles select {_x getVariable [QGVAR(persist), false]});

private _objectInformationList = [];
{
    private _mainObject = _x;
    private _objects = [_mainObject];
    _objects append ((everyContainer _mainObject) apply {_x select 1});

    private _pos = getPosASL _mainObject;
    private _items = [];
    {
        private _object = _x;
        if (_object isKindOf "Man") then {
            _items append getUnitLoadout [_object, false];
        } else {
            _items append getItemCargo _object;
        };
    } forEach _objects;

    _objectInformationList pushBack [typeOf _mainObject, _pos, _items];
} forEach _searchObjects;
