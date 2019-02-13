#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Retrieves player variables that are important for persistence, including JIP.
 *
 * Arguments:
 * 0: Unit <OBJECT> (default: objNull)
 * 1: Variables to store <ARRAY> (default: ["umf", "ace"])
 * 2: Variables to exclude <ARRAY> (default: [QGVAR(teleportEnabled), QEGVAR(core,preventFiringEH), QEGVAR(core,preventAction)])
 *
 * Return Value:
 * None
 *
 * Example:
 * [player] call umf_persistence_fnc_getPlayerVariables
 *
 * Public: No
 */

params [
    "_unit",
    ["_variablesToStore", ["umf", "ace"]],
    ["_variablesToExclude", [QGVAR(teleportEnabled), QEGVAR(core,preventFiringEH), QEGVAR(core,preventAction)]]
];

private _playerVariables = [];
{
    if ((_x select [0, 3]) in _variablesToStore) then {
        // Hack for ace medical
        if (((_x select [0, 11]) isEqualTo "ace_medical") || {(_x select [0, 20]) isEqualTo "ace_advanced_fatigue"}) then {
            if (_x isEqualTo "ace_medical_medicclass") then {
                _playerVariables pushBack [_x, _unit getVariable _x];
            };
        } else {
            // Do not save initialisation variables
            if !(_x in _variablesToExclude) then {
                _playerVariables pushBack [_x, _unit getVariable _x];
            };
        };
    };
} forEach (allVariables _unit);

_playerVariables
