#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Configures spoken languages (BABEL).
 *
 * Arguments:
 * 0: Unit <OBJECT> (Default: objNull)
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call umf_acre_fnc_addRadios
 *
 * Public: No
 */

// Variable declarations.
params [["_unit", objNull]];

private _allLanguages = [];
{
    _allLanguages pushBackUnique (_x select 0);
} forEach GVAR(definedLanguages);

if ((side _unit) isEqualTo sideLogic) exitWith {
    [_allLanguages] call acre_api_fnc_babelSetSpokenLanguages;
    [_allLanguages select 0] call acre_api_fnc_babelSetSpeakingLanguage;

    LOG_2("Using languages %1 for virtual unit %2",_allLanguages,_unit);
};

private _error = false;
private _languages = _unit getVariable[QGVAR(languages),[]];
{
    if !(_x in _allLanguages) then {
        WARNING_1("language %1 not found",_x);
        _error = true;
    };
} forEach _languages;

if (!_error) then {
    _languages call acre_api_fnc_babelSetSpokenLanguages;
    [_languages select 0] call acre_api_fnc_babelSetSpeakingLanguage;

    LOG_2("Using languages %1 for unit %2",_allLanguages,_unit);
};
