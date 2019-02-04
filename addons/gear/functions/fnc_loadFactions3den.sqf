#include "script_component.hpp"

disableSerialization;
params ["_control", ""];

// Get the selected unit
private _unitSelection = get3DENSelected "object";
private _selectedFaction = "";
if !(_unitSelection isEqualTo []) then {
    _selectedFaction = ((_unitSelection select 0) get3DENAttribute QGVAR(faction)) select 0;
    if (isNil "_selectedFaction") then { _selectedFaction = "";};
};

_selectedFaction = toLower _selectedFaction;

// Load the defined unit factions in defined in Mission (priority) or addon
private _definedFactions = [];
private _factions = [];
private _configProperties = configProperties [missionConfigFile >> "CfgLoadouts", "isClass _x"];
_configProperties append (configProperties [configFile >> "CfgLoadouts", "isClass _x"]);

{
    private _factionId = toLower (configName _x);
    if !(_factionId in _factions) then {
        _definedFactions pushBack [getText (_x >> "displayName"), toLower _factionId];
        _factions pushBack _factionId;
    };
} forEach _configProperties;

_definedFactions sort true;
// Clear control
lbClear _control;

{
    private _index = _control lbAdd (_x select 0);
    _control lbSetData [_index, _x select 1];
    if ((_x select 1) isEqualTo _selectedFaction) then {
        _control lbSetCurSel _forEachIndex;
    }
} forEach _definedFactions;
