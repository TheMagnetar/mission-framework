//=======================================================================================================//
// File: fn_ace3_config_instaDeath.sqf                                                                   //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2017/11/10                                                                             //
// Description: This function configures the ACE3 medical feature instant death. After a certain amount  //
//              of game time, instant death will be disabled.                                            //
//                                                                                                       //
//              Arguments:                                                                               //
//               - None                                                                                  //
//                                                                                                       //
// Changes: 1.0 (2017/11/10) First public version.                                                       //
//=======================================================================================================//

#include "script_component.hpp"

if (GVAR(preventInstaDeathTime) == 0) exitWith {};

if (hasInterface) then {
    ace_medical_preventInstaDeath = true;
};

if (isServer) then {
    GVAR(preventInstaDeathPFH) = [{
        private _elapsedTime = GVAR(preventInstaDeathTime) - CBA_missionTime;

        if (_elapsedTime <= 0) then {
            ace_medical_preventInstaDeath = true;
            publicVariable "ace_medical_preventInstaDeath";

            [GVAR(preventInstaDeathPFH)] call CBA_fnc_removePerFrameHandler
        };
    }, 60, 1] call CBA_fnc_addPerFrameHandler;
};

//============================================= END OF FILE =============================================//
