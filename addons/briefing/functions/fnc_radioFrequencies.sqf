//=======================================================================================================//
// File: fn_briefing_listRadioFrequencies.sqf                                                            //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 17/16/2016                                                                             //
// Description: Function to list radio frequencies in the briefing.                                      //
//                                                                                                       //
//              Arguments:                                                                               //
//               - none                                                                                  //
//                                                                                                       //
// Changes:  1.0 (2016/12/17) First public version.                                                      //
//=======================================================================================================//
#include "script_component.hpp"

params ["_unit", ["_vehicle", objNull]];

private _assignedNetworks = _unit getVariable [QEGVAR(acre,assignedNetworks), "default"];
if (_assignedNetworks isEqualTo "default") exitWith {""};

private _getNetList = {
    params ["_networkId"];

    private _radioText = "";
    {
        private _networkEntry = toLower (configName _x);
        private _networkText = getText (_x >> "displayName");
        if (_networkEntry isEqualTo _networkId) then {
            _radioText = format ["<font color='#FF0000' size='18'>Radio Network: %1</font><br/><br/>", _networkText];
            {
                private _channel = 1; private _block = 1;
                private _radio = toUpper (configName _x);
                _radioText = format ["%1<font color='#00FFFF'>%2</font><br/>", _radioText, _radio];
                private _netConfig = getArray (_x >> "networkConfiguration");
                {
                    if (_radio isEqualTo "ACRE_PRC343") then {
                        _radioText = format ["%1     <font color='#00FFFF'>%4</font>: block %2 channel %3.<br/>", _radioText, _block, _channel, _x # 0];
                        _channel = _channel + 1;
                        if (_channel > 16) then {
                            _channel = 1; _block = _block + 1;
                        };
                    } else {
                        _radioText = format ["%1     <font color='#00FFFF'>%2:</font> %3 MHz.<br/>", _radioText, _x # 0, _x # 1];
                    };
                } forEach _netConfig;
                _radioText = format ["%1<br/>", _radioText];
            } forEach (configProperties [_x, "isClass _x", true]);
        };
    } forEach (configProperties [missionConfigFile >> "CfgAcreNetworks", "isClass _x", true]);

    _radioText;
};

private _radioText = [_assignedNetworks] call _getNetList;
private _rackText = "";

if (isNull _vehicle) then {_vehicle = vehicle _unit};
if (_vehicle != _unit) then {
    private _netId = [_vehicle] call acre_api_fnc_getVehicleRacksPreset;
    if !(_netId isEqualTo "") then {
        _rackText = [_netId] call _getNetList;
    };
};

_radioText = format["%1%2", _radioText, _rackText];

_radioText
