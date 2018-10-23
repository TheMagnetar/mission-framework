//=======================================================================================================//
// File: fn_jip_savePlayerVariables.sqf                                                                  //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2016/11/12                                                                             //
// Description: This function saves player related variables (BMT and ACE variables) in case a client    //
//              disconnects. The variables are retrieved in the `fn_jip_retrievePlayerVariables.sqf`     //
//              fucntion.                                                                                //
//                                                                                                       //
//              Arguments:                                                                               //
//               - 0: unit that whill have its variables saved <OBJECT>.                                 //
//                                                                                                       //
// Changes: 1.0 (2016/11/12) First public version.                                                       //
//=======================================================================================================//
#include "script_component.hpp"

params ["_unit"];

private _jipPlayerVariables = [];
private _variablesToStore = ["umf", "ace"];
{
    if ((_x select [0, 3]) in _variablesToStore) then {
        // Hack for ace medical
        if (((_x select [0, 11]) isEqualTo "ace_medical") || {(_x select [0, 20]) isEqualTo "ace_advanced_fatigue"}) then {
            if (_x isEqualTo "ace_medical_medicclass") then {
                _jipPlayerVariables pushBack [_x, _unit getVariable _x];
            };
        } else {
            // Do not save initialisation variables
            private _initVariables = [QGVAR(teleportEnabled)];
            if !(_x in _initVariables) then {
                _jipPlayerVariables pushBack [_x, _unit getVariable _x];
            };
        };
    };
} forEach (allVariables _unit);

_jipPlayerVariables

//============================================= END OF FILE =============================================//
