#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Configures the presets for the different radios.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call mf_acre_fnc_configurePresets
 *
 * Public: No
 */

private _networkEntries = missionConfigFile >> "CfgAcreNetworks";

{
    private _networkName = toLower (configName _x);
    private _side = getText (_x >> "side");

    private _presetName = switch (_side) do {
        case "east": {"default2"};
        case "west": {"default3"};
        case "independent": {"default4"};
        default {"default"};
    };

    {
        // Copy the preset
        private _baseRadio = configName _x;
        private _channelCount = switch (_baseRadio) do {
            case "ACRE_PRC152": {100};
            case "ACRE_PRC148": {32};
            case "ACRE_PRC117F": {100};
            case "ACRE_PRC343": {80};
            case "ACRE_SEM52SL": {12};
            case "ACRE_PRC77": {2};
            default {0};
        };

        // Copy the preset
        [_baseRadio, _presetName, _networkName] call acre_api_fnc_copyPreset;

        {
            if (_forEachIndex + 1 > _channelCount) exitWith {
                ERROR_1("Too many channels for radio %1",_baseRadio);
            };

            private _numEntries = count _x;
            switch (_numEntries) do {
                case 1: {
                    private _channelName = _x select 0;
                    //[_baseRadio, _presetName, _forEachIndex, "label", _channelName] call acre_api_fnc_setPresetChannelField;
                };
                case 2: {
                    private _channelName = _x select 0;
                    private _frequency = _x select 1;

                    private _name = switch (_baseRadio) do {
                        case "ACRE_PRC152": {"description"};
                        case "ACRE_PRC148": {"label"};
                        case "ACRE_PRC117F": {"name"};
                        default {""};
                    };

                    [_baseRadio, _networkName, _forEachIndex + 1, "label", _channelName] call acre_api_fnc_setPresetChannelField;
                    [_baseRadio, _networkName, _forEachIndex + 1, "frequencyTX", _frequency] call acre_api_fnc_setPresetChannelField;
                    [_baseRadio, _networkName, _forEachIndex + 1, "frequencyRX", _frequency] call acre_api_fnc_setPresetChannelField;
                };
            };
        } forEach (getArray (_x >> "networkConfiguration"));
    } forEach (configProperties [_x, "isClass _x", true]);
} forEach (configProperties [_networkEntries, "isClass _x", true]);
