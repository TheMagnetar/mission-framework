//=======================================================================================================//
// File: fn_respawn_config.sqf                                                                           //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2015/10/02                                                                             //
// Description: This function configures the diffetent parameters of the BMT Respawn system. It is       //
//              executed during the PostInit phase.                                                      //
//                                                                                                       //
//              Arguments:                                                                               //
//               - none                                                                                  //
//                                                                                                       //
// Changes: 1.0 (2015/11/26) First public version.                                                       //
//=======================================================================================================//

#include "script_component.hpp"

params ["_unit"];

if (!local _unit) exitWith {};

// The player is not dead.
_unit setVariable [QGVAR(playerAlive), true, true];

private _numRespawns = 0;

// Make a copy of the old value in case the setting is changed mid mission
if (GVAR(numRespawnsConfig) < 0) then {
    _numRespawns = -99;
} else {
    _numRespawns = GVAR(numRespawnsConfig);
};

LOG("Assigning respawn for players.");
_unit setVariable [QGVAR(numRespawns), _numRespawns, true];

//============================================= END OF FILE =============================================//
