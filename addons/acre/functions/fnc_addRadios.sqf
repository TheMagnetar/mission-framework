#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Adds radios to player inventory based on a unit's role.
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

private _unitRole = _unit getVariable [QEGVAR(gear,role), ""];
private _network = _unit getVariable [QGVAR(assignedNetworks), "default"];

if (_unitRole isEqualTo "") exitWith {
    ERROR_1("Undefined role for unit %1",_unit);
};

if (_network isEqualTo "default") exitWith {
    ERROR_1("Undefined network for unit %1",_unit);
};

private _forceBackpackRadio = _unit getVariable [QEGVAR(gear,forceBackpackRadio), false];

{
    private _networkEntry = toLower (configName _x);
    if (_networkEntry isEqualTo _network) then {
        {
            private _roles = getArray (_x >> "roles");
            private _radio = configName _x;

            [_radio, _networkEntry] call acre_api_fnc_setPreset;
            private _isManpack = (getNumber (configFile >> "CfgAcreComponents" >> _radio >> "isPackRadio") == 1);

            if ((_unitRole in _roles) && {_unit canAdd _radio || {_forceBackpackRadio && {_isManpack}}}) then {
                if (_forceBackpackRadio && {_isManpack} && {!(_unit canAdd _radio)}) then {
                    (unitBackpack _unit) addItemCargoGlobal [_radio, 1];
                } else {
                    _unit addItem _radio;
                };
            };
        } forEach (configProperties [_x, "isClass _x", true]);
    };
} forEach (configProperties [missionConfigFile >> "CfgAcreNetworks", "isClass _x", true]);
