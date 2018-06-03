//=======================================================================================================//
// File: fn_respawn_manageTickets.sqf                                                                    //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2015/10/02                                                                             //
// Description: This function substracts or adds tickets depending on the mission parameters: from the   //
//              player (_unit) pool of from the side pool.                                               //
//                                                                                                       //
//              Arguments:                                                                               //
//               - 0: unit or unit's side whose respawns needs to be modified                            //
//               - 1: operation to perform (0 substract, 1 add) <SCALAR>                                 //
//               - 2: amount to add or substract <SCALAR><OPTIONAL>.                                     //
// Changes: 1.0 (2015/11/26) First public version.                                                       //
//=======================================================================================================//
#include "script_component.hpp"

params ["_unit", "_operation", ["_amount", 1]];

private _numRespawns = _unit getVariable [QGVAR(numRespawns), -1];

if (_numRespawns >= 0) then {
    switch (_operation) do {
        case "substract": { _numRespawns = _numRespawns - _amount; };
        case "add": { _numRespawns = _numRespawns + _amount; };
        default {
            LOG_1("Operation not recognised. It should be substract or add and not %1",_operation);
        };
    };
    _unit setVariable [QGVAR(numRespawns), _numRespawns, true];
};

// Return value
_numRespawns

//============================================= END OF FILE =============================================//
