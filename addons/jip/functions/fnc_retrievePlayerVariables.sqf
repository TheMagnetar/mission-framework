//=======================================================================================================//
// File: fn_jip_retrievePlayerVariables.sqf                                                                //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2016/11/12                                                                             //
// Description: This function retrieves player related variables that were stored once a player          //
//              disconnected. In this way information regarding medical status, role (medic, engineer),  //
//              number or respawns, ... is preserved if a player drops but can rejoin later due to       //
//              connection problems. The variables are stored in the `fn_jip_savePlayerVariables.sqf`    //
//              fucntion.                                                                                //
//                                                                                                       //
//              Arguments:                                                                               //
//               - 0: unit that whill have its player variables restored <OBJECT>       .                //
//               - 1: List containing the values of the player variables <ARRAY>.                        //
//                                                                                                       //
// Changes: 1.0 (2016/11/12) First public version.                                                       //
//=======================================================================================================//
#include "script_component.hpp"

params ["_unit", "_jipPlayerVariables"];

{
    _unit setVariable [_x # 0, _x # 1, true];
} forEach _jipPlayerVariables;

// Handle advanced fatigue
if ((GVAR(saveStatus) == 2) && {EGVAR(core,aceLoaded)}) then {
    {
        call compile format ["%1 = %2;", _x # 0, _x # 1];
    } forEach GVAR(advancedFatigue);
};

LOG("Previous status successfully restored");

_unit setVariable [QGVAR(statusRetrieved), true];

//============================================= END OF FILE =============================================//
