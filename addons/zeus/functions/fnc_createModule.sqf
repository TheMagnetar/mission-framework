//=======================================================================================================//
// File: fn_zeus_createModule.sqf                                                                        //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2015/12/07                                                                             //
// Description: This function creates a zeus module and assigns its owner to the administrator.          //
//                                                                                                       //
//              Arguments:                                                                               //
//               - none                                                                                  //
//                                                                                                       //
// Changes: 1.0 (2015/11/26) First public version.                                                       //
//=======================================================================================================//
#include "script_component.hpp"

params [["_owner", "#adminLogged"]];

if (!isServer) exitWith {};

// Create the Zeus module.
if (isNil QEGVAR(core,centreSideLogic)) then {
    EGVAR(core,centreSideLogic) = createCenter sideLogic;
    EGVAR(core,groupSideLogic) = createGroup EGVAR(core,centreSideLogic);
};

private _curator = EGVAR(core,groupSideLogic) createUnit ["ModuleCurator_F",[0,0,0] , [], 0, "NONE"];
_curator setVariable ["showNotification", false, true];
_curator setVariable ["birdType", "", true];

if (_owner isEqualType "") then {
    _curator setVariable ["Owner", _owner, true];
} else {
    _owner assignCurator _curator;
};

_curator addCuratorEditableObjects [allMissionObjects "", true];
_curator setVariable ["Addons", 3, true];
_curator setVariable ["Forced", 0, true];


//============================================= END OF FILE =============================================//
