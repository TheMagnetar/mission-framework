//=======================================================================================================//
// File: fn_jip_check_allowedJIPPlayerList.sqf                                                           //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2016/11/12                                                                             //
// Description: This function checks if a JIP player belongs to the allowed JIP players list. It does so //
//              by comparing the stored player UID and profile name with the ones of the given playable  //
//              unit.                                                                                    //
//                                                                                                       //
//              Arguments:                                                                               //
//               - 0: unit to check <OBJECT>.                                                            //
//                                                                                                       //
// Changes: 1.0 (2016/11/12) First public version.                                                       //
//=======================================================================================================//
#include "script_component.hpp"

params ["_unit"];

if (GVAR(allowedPlayers) isEqualTo []) exitWith {
    WARNING_1("Variable %1 is not defined.",QGVAR(allowedPlayers));
};

private _found = false;
{
    if ((_x # 0 == getPlayerUID _unit) && {_x # 1 == name _unit}) exitWith {
        _found =  true;
    };
} forEach GVAR(allowedPlayers);

LOG_3("Player named %1 with UID %2 is in the allowed JIP list: %3.",name _unit,getPlayerUID _unit,_found);

_found

//============================================= END OF FILE =============================================//
