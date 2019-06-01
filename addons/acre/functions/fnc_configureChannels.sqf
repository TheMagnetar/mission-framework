#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Configures the channels on the different radios.
 *
 * Arguments:
 * 0: Unit <OBJECT> (Default: objNull)
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call mf_acre_fnc_addRadios
 *
 * Public: No
 */

// Variable declarations.
params [["_unit", objNull]];

private _group = _unit getVariable [QEGVAR(gear,group), ""];

if (_group isEqualTo "") exitWith {
    ERROR_1("Channels cannot be configured since variable %1 is empty: [%1,%2].",QEGVAR(gear,group));
};

private _assignedNetworks = _unit getVariable [QGVAR(assignedNetworks), "default"];

if (_assignedNetworks isEqualTo "default") exitWith {
    ERROR_1("Channels cannot be configured since unit %1 has no network assigned",_unit);
};

// Get unit's radios.
private _radioList = [] call acre_api_fnc_getCurrentRadioList;
private _baseRadioList = [];
{
    _baseRadioList pushBackUnique (toUpper ([_x] call acre_api_fnc_getBaseRadio));
} forEach _radioList;

private _findChannelIndex = {
    params ["_netConfig", "_channelName"];

    private _channelIndex = 1;
    if ((_channelName isEqualTo "") || {_netConfig isEqualTo []}) exitWith {_channelIndex};

    {
        if (toLower (_x select 0) isEqualTo _channelName) exitWith {
            _channelIndex = _forEachIndex + 1;
        };
    } forEach _netConfig;

    _channelIndex;
};

{
    private _networkEntry = toLower (configName _x);
    if (_networkEntry isEqualTo _assignedNetworks) then {
        {
            private _radio = toUpper (configName _x);
            private _netConfig = getArray (_x >> "networkConfiguration");
            if (_radio in _baseRadioList) then {
                private _channel = 1;
                switch (_radio) do {
                    case "ACRE_PRC343": {
                        _channel = [_netConfig, toLower (_unit getVariable [QGVAR(riflemanChannel), ""])] call _findChannelIndex;
                    };
                    case "ACRE_PRC152": {
                        _channel = [_netConfig, toLower (_unit getVariable [QGVAR(shortRangeChannel), ""])] call _findChannelIndex;
                    };
                    case "ACRE_PRC148": {
                        _channel = [_netConfig, toLower (_unit getVariable [QGVAR(shortRangeChannel), ""])] call _findChannelIndex;
                    };
                    case "ACRE_PRC117F": {
                        _channel = [_netConfig, toLower (_unit getVariable [QGVAR(longRangeChannel), ""])] call _findChannelIndex;
                    };
                    case "ACRE_SEM52SL": {
                        _channel = [_netConfig, toLower (_unit getVariable [QGVAR(shortRangeChannel), ""])] call _findChannelIndex;
                    };
                };

                {
                    if ([_x, _radio] call acre_api_fnc_isKindOf && {_radio != "ACRE_PRC77"}) then {
                        [_x, _channel] call acre_api_fnc_setRadioChannel;
                    };
                } forEach _radioList;
            };
        } forEach (configProperties [_x, "isClass _x", true]);
    };
} forEach (configProperties [missionConfigFile >> "CfgAcreNetworks", "isClass _x", true]);
