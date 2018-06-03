//=======================================================================================================//
// File: fn_jip_addTo_allowedJIPPlayerList.sqf                                                           //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2016/11/12                                                                             //
// Description: This function adds a JIP player that is allowed to join the mission for the rest of it,  //
//              even if it disconnects and JIP is disabled. The UID of the player as well as the profile //
//              name are added as another entry.                                                         //
//                                                                                                       //
//              Arguments:                                                                               //
//               - 0: unit to whitelist <OBJECT>.                                                        //
//                                                                                                       //
// Changes: 1.0 (2016/11/12) First public version.                                                       //
//=======================================================================================================//
#include "script_component.hpp"

params ["_unit"];

GVAR(allowedPlayers) pushBackUnique [getPlayerUID _unit, name _unit];
publicVariable QGVAR(allowedPlayers);

LOG_2("Player named %1 with UID %2 was successfully added to valid JIP players.",name _unit,getPlayerUID _unit);

//============================================= END OF FILE =============================================//
