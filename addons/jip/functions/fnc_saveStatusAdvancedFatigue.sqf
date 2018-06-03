//=======================================================================================================//
// File: fn_jip_saveStatus_AdvancedFatigue.sqf                                                           //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2016/11/12                                                                             //
// Description: This function stores global client variables related to ACE advanced fatigue in order to //
//              persist them.                                                                            //
//                                                                                                       //
//              Arguments:                                                                               //
//               - 0: unit that whill have its ACE advanced fatigue.                                     //
//                                                                                                       //
// Changes: 1.0 (2016/11/12) First public version.                                                       //
//=======================================================================================================//
#include "script_component.hpp"

params ["_unit"];

private _aceAdvancedFatigue = [];
_aceAdvancedFatigue pushback [QGVAR(ae1Reserve), ace_advanced_fatigue_ae1Reserve];
_aceAdvancedFatigue pushback [QGVAR(ae2Reserve), ace_advanced_fatigue_ae2Reserve];
_aceAdvancedFatigue pushback [QGVAR(anReserve), ace_advanced_fatigue_anReserve];
_aceAdvancedFatigue pushback [QGVAR(anFatigue), ace_advanced_fatigue_anFatigue];
_aceAdvancedFatigue pushback [QGVAR(muscleDamage), ace_advanced_fatigue_muscleDamage];

call compile format [QUOTE(GVAR(advancedFatigue_%1) = _aceAdvancedFatigue;), getPlayerUID _unit];
publicVariableServer (format [QGVAR(advancedFatigue_%1), getPlayerUID _unit]);

//============================================= END OF FILE =============================================//
