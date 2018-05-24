//=======================================================================================================//
// File: init.sqf                                                                                        //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2015/02/22                                                                             //
// Description: This file is executed in a multiplayer environment at the end of the initialization      //
//              order of execution. It is used to further configure addons, briefings, radios, etc.      //
// Changes: 1.0 (2015/11/26) First public version.                                                       //
//=======================================================================================================//


//=======================================================================================================//
// Execute briefing scripts.                                                                             //
//=======================================================================================================//
bmt_script_briefing = [] execVM "src\briefing\scripts\bmt_briefing.sqf";

//=======================================================================================================//
// Initialise the T8 Units script if the A3BMT T8Units component is loaded.                              //
//=======================================================================================================//
if (bmt_param_t8units_enabled == 1) then {
    bmt_script_t8units = [] execVM "src\t8units\scripts\bmt_t8units_init.sqf";
};

// Wait until player is initalised in order to execute the rest of the script.
if (hasInterface && {isNull player}) then {
    waitUntil {sleep 0.1; time > 1 && {!isNull player} && {player == player}};
};

//=======================================================================================================//
// This file executes scripts that are especific to a mission.                                           //
//=======================================================================================================//
#include "missionConfig\bmt_init.sqf"

//============================================= END OF FILE =============================================//
