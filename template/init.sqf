//=======================================================================================================//
// File: init.sqf                                                                                        //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2015/02/22                                                                             //
// Description: This file is executed in a multiplayer environment at the end of the initialization      //
//              order of execution. It is used to further configure addons, briefings, radios, etc.      //
// Changes: 1.0 (2015/11/26) First public version.                                                       //
//=======================================================================================================//

// It may be necessary for some scripts to wait until player is initalised in order to execute the rest
// of the init file.
if (hasInterface && {isNull player}) then {
    waitUntil {sleep 0.1; time > 1 && {!isNull player} && {player == player}};
};

//============================================= END OF FILE =============================================//
