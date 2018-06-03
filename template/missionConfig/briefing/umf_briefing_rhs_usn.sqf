//=======================================================================================================//
// File: umf_briefing_rhs_usn.sqf                                                                        //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2015/06/12                                                                             //
// Description: This document generates the mission briefing for units belonging to the RHS faction      //
//              United States Army "rhs_faction_usn".                                                    //
//              http://class.rhsmods.org/rhsusaf/CfgGroups_West_rhs_faction_usn.html                     //
//                                                                                                       //
//              Arguments:                                                                               //
//               - none                                                                                  //
//                                                                                                       //
// Changes: 1.0 (2015/11/26) First public version.                                                       //
//=======================================================================================================//

//=======================================================================================================//
// NOTES: RADIO. If the player is inside a vehicle or a vehicle is passed as a second argument, the      //
// vehicle radio configurations will also be displayed                                                   //
// Example:                                                                                              //
//     [player, myMRAP] call umf_briefing_radioFrequencies                                               //
//=======================================================================================================//
private _radio = player createDiaryRecord ["diary", ["Radio frequencies", [player] call umf_briefing_fnc_radioFrequencies]];

//=======================================================================================================//
// NOTES: ADMINISTRATION/LOGISTICS.                                                                      //
//=======================================================================================================//
private _adminLog = player createDiaryRecord ["diary", ["Administration/Logistics","
<font color='#FF0000' size='18'>Support</font>
<br/>
*** Description, if they exist, of support units like CAS, field artillery, medevac, ... ***
<br/><br/>
<font color='#FF0000' size='18'>Supply</font>
<br/>
*** Troop supply: additional ammunition, ... ***
"]];

//=======================================================================================================//
// NOTES: INTEL.                                                                                         //
//=======================================================================================================//
private _intel = player createDiaryRecord ["diary", ["Intel","
*** Intelligence information. ***
<br/><br/>
<font color='#FF0000' size='18'>Enemy forces</font>
<br/>
*** Description of enemy forces.***
<br/><br/>
<font color='#FF0000' size='18'>Allied forces</font>
<br/>
*** Description of allied forces. ***
"]];

//=======================================================================================================//
// NOTES: MISSION AND EXECUTION.                                                                         //
//=======================================================================================================//
private _missionExecution = player createDiaryRecord ["diary", ["Mission and Execution","
<font color='#FF0000' size='18'>Mission</font>
<br/>
*** Mission description. ***
<br/><br/>
<font color='#FF0000' size='18'>Main tasks</font>
<br/>
- <font color='#00FFFF'>Main task 1</font>: *** Brief description ***.
<br/>
- <font color='#00FFFF'>Main task 2</font>: *** Brief description ***.
<br/><br/>
<font color='#FF0000' size='18'>Secondary tasks</font>
<br/>
- <font color='#00FFFF'>Secondary task 1</font>: *** Brief description ***.
<br/>
- <font color='#00FFFF'>Secondary task 2</font>: *** Brief description ***.
<br/><br/>
<font color='#FF0000' size='18'>Execution</font>
<br/>
*** Description, using bullet points, of how to execute the mission. ***
"]];

//=======================================================================================================//
// NOTES: SITUATION.                                                                                     //
//=======================================================================================================//
private  _situation = player createDiaryRecord ["diary", ["SITREP","
*** Brief description of the situation.***
"]];

//============================================= END OF FILE =============================================//
