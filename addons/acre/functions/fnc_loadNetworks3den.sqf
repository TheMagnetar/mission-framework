#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Loads the defined networks in 3DEN
 *
 * Arguments:
 * 0: Unit <OBJECT> (Default: objNull)
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call mf_acre_fnc_loadNetworks3den
 *
 * Public: No
 */

disableSerialization;
params ["_control", ""];

private _unit = get3DENSelected "object";

private _selectedNetwork = ((_unit select 0) get3DENAttribute QEGVAR(acre,assignedNetworks)) select 0;
private _networkEntries = missionConfigFile >> "CfgAcreNetworks";

private _definedNetworks = [["default", "default"]];
{
    _definedNetworks pushBackUnique [getText (_x >> "displayName"), toLower (configName _x)];
} forEach configProperties [_networkEntries, "isClass _x"];

_definedNetworks sort true;

lbClear _control;

{
    private _index = _control lbAdd (_x select 0);
    _control lbSetData [_index, _x select 1];

    if((_x select 1) isEqualTo _selectedNetwork) then {
        _control lbSetCurSel _index
    };
} forEach _definedNetworks;
