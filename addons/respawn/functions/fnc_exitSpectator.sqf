//=======================================================================================================//
// File: fn_respawn_exitSpectator.sqf                                                                    //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2015/10/02                                                                             //
// Description: This function exits spectator mode.                                                      //
//                                                                                                       //
//              Arguments:                                                                               //
//               - none                                                                                  //
//                                                                                                       //
// Changes: 1.0 (2015/11/26) First public version.                                                       //
//=======================================================================================================//
#include "script_component.hpp"

params ["_unit"];

if (EGVAR(core,aceLoaded) && {EGVAR(ace,aceSpectatorEnabled)}) then {
    [false] call ace_spectator_fnc_setSpectator;
} else {

    // Exit spectator mode depending on which radio system is used.
    // Task Force Arrowhead Radio (TFAR)
    if (EGVAR(core,tfarLoaded)) then {
        [_unit, false] call TFAR_fnc_forceSpectator;
    };

    // Advanced Combat Radio Environment 2 (ACRE 2)
    if (EGVAR(core,acreLoaded)) then {
        [false] call acre_api_fnc_setSpectator;
    };

    BIS_fnc_feedback_allowPP = true;  // Enable dying effects.
    // Exit the End Game Spectator mode.
    ["Terminate"] call BIS_fnc_EGSpectator;
};

//============================================= END OF FILE =============================================//
