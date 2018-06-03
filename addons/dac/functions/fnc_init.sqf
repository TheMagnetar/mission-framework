//=======================================================================================================//
// File: fn_dac_init.sqf                                                                                 //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2015/09/29                                                                             //
// Description: This funtion has the purpose of initialising the addon version of the addon, created by  //
//              Silola, Dynamic-AI-Creator (DAC) (http://www.armaholic.com/page.php?id=25550). It        //
//              automatically creates a Logic Module "DAC_Source_Extern" (there is no need to place it   //
//              using the editor) and initialises the variable "DAC_STRPlayers" with the playable units' //
//              names in order to avoid having to introduce them in the file "DAC_Config_Creator.sqf".   //
//                                                                                                       //
//              Arguments:                                                                               //
//               - none                                                                                  //
//                                                                                                       //
// Changes: 1.0 (2015/11/26) First public version.                                                       //
//=======================================================================================================//
#include "script_component.hpp"

if (!EGVAR(core,dacLoaded) || {GVAR(enabled)}) exitWith {};

if (!isServer) exitWith { };

// Create DAC necessary "DAC_Source_Extern" logic module.
if (isNil EGVAR(core,centreSideLogic)) then {
    EGVAR(core,centreSideLogic) = createCenter sideLogic;
    EGVAR(core,groupSideLogic) = createGroup EGVAR(core,centreSideLogic);
};

GVAR(dacModule) = EGVAR(core,groupSideLogic) createUnit ["DAC_Source_Extern", [0,0,0],[], 1,"NONE"];
publicVariable QGVAR(dacModule);

// Initialise the variable "DAC_STRPlayers" with the names of all playable units. It is necessary that
// all playable units have an associated name.
DAC_STRPlayers = [];
{
    DAC_STRPlayers pushBack format ["%1",_x];
} forEach playableUnits;
publicVariable "DAC_STRPlayers";

LOG_1("%1", DAC_STRPlayers);

//============================================= END OF FILE =============================================//
