#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Parses and sets a CBA settings file..
 *
 * Arguments:
 * 0: File path <STRING>
 *
 * Return Value:
 * Adding successfull <BOOL>
 *
 * Example:
 * ["cbaSettings.hpp"] call umf_core_fnc_handleCbaSettings
 *
 * Public: No
 */

params ["_fileName"];

diag_log format ["calling is %1", _this];
// Load settings file
private _settingsFile = preprocessFile _fileName;
{
    _x params ["_setting", "_value", "_priority"];

    [_setting, _value, _priority, "server"] call CBA_settings_fnc_set;
} forEach ([_settingsFile, true] call CBA_settings_fnc_parse);
