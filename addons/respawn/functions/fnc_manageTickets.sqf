#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Substracts or adds respawn tickets from the given unit pool.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Operation to perform: "substract" or "add" <STRING> (default: "substract")
 * 2: Amount to add or substract <NUMBER> (default: 1)
 *
 * Return Value:
 * Number of respawns left <NUMBER>
 *
 * Example:
 * [player] call umf_respawn_manageTickets
 *
 * Public: No
 */

params ["_unit", ["_operation", "substract"], ["_amount", 1]];

private _numRespawns = _unit getVariable [QGVAR(numRespawns), -1];

if (_numRespawns < 0) exitWith {_numRespawns};

switch (_operation) do {
    case "substract": { _numRespawns = _numRespawns - _amount; };
    case "add": { _numRespawns = _numRespawns + _amount; };
    default {
        ERROR_1("Operation not recognised. It should be substract or add and not %1",_operation);
    };
};
_unit setVariable [QGVAR(numRespawns), _numRespawns, true];

// Return value
_numRespawns
