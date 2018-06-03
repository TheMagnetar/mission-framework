//=======================================================================================================//
// File: fn_acre2_addRadios.sqf                                                                          //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2015/04/28                                                                             //
// Description: This function adds the defined radios to a unit's inventory in case the default radios   //
//              that are assigned are not suficient. Advanced Combat Radio Environment 2 (ACRE2)         //
//              http://gitlab.idi-systems.com/idi-systems/acre2-public/wikis/home                        //
//                                                                                                       //
//              Arguments:                                                                               //
//               - 0: unit whose radios must be configured <OBJECT>.                                     //
//                                                                                                       //
// Changes: 1.0 (2015/11/26) First public version.                                                       //
//          1.1 (2018/05/15) Ported to CBA                                                               //
//=======================================================================================================//
#include "script_component.hpp"

params ["_unit"];

_unit setVariable [QGVAR(teleportEnabled), true];
hint "Press F11 to teleport to your squad or any other friendly unit. You have 5 minutes.";

GVAR(displayEH) = (findDisplay 46) displayAddEventHandler ["KeyDown","[_this, player] call bmt_fnc_jip_teleport"];

[{
    !(_unit getVariable [QGVAR(teleportEnabled), false]);
}, {
    params ["_unit"];

    if (_unit getVariable [QGVAR(teleportEnabled), false]) then {
        hint "5 minutes have passed. You cannot teleport to your squad anymore.";
        _unit setVariable [QGVAR(teleportEnabled), false];
    };

    (findDisplay 46) displayRemoveEventHandler ["KeyDown", GVAR(displayEH)];
    
}, [_unit], 300] call CBA_fnc_waitUntilAndExecute;
