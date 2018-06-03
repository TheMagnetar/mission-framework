#include "script_component.hpp"

params ["_unit", "_uid", "_name"];

private _jipPlayerVariables = [_unit] call FUNC(savePlayerVariables);
private _loadout = getUnitLoadout _unit;
private _jipInformation = [_uid, _name, _jipPlayerVariables, _loadout];

private _jipInformation_List = missionNamespace getVariable [QGVAR(jipInformation), []];

if (_jipInformation_List isEqualTo []) then {
    _jipInformation_List = [_jipInformation];
} else {
    // Check first if an entry for the player already exists.
    private _found = false;
    {
        if ((_x select 0 == _uid) && (_x select 1 == _name)) exitWith {
            _found = true;
            _jipInformation_List set [_forEachIndex, _jipInformation];
            LOG_2("Gear of player %1 with UID %2 already exists. Overwriting it.",_name,_uid);
        };
    } forEach _jipInformation_List;

    if (!_found) then {
        _jipInformation_List pushBack _jipInformation;
    };
};

missionNamespace setVariable [QGVAR(jipInformation), _jipInformation_List, true];

LOG_2("Gear of player %1 with UID %2 saved.",_name, _uid);
LOG_2("Variable with UID %1 and profile name %2.",(_jipInformation_List select 0) select 0,(_jipInformation_List select 0) select 19);
LOG_1("Number of entries %1",count _jipInformation_List);

false
