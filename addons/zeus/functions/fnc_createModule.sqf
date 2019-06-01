#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Creates a zeus module and assigns its owner to the administrator.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call mf_zeus_fnc_createModule
 *
 * Public: No
 */

params [["_owner", "#adminLogged"]];

if (!isServer) exitWith {};

// Create the Zeus module.
if (isNil QEGVAR(core,centreSideLogic)) then {
    EGVAR(core,centreSideLogic) = createCenter sideLogic;
    EGVAR(core,groupSideLogic) = createGroup EGVAR(core,centreSideLogic);
};

private _curator = EGVAR(core,groupSideLogic) createUnit ["ModuleCurator_F", [0,0,0], [], 0, "NONE"];
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
