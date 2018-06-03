#include "script_component.hpp"

["CBA_loadingScreenDone", {
    GVAR(introScript) = [] execVM "missionConfig\intro.sqf";
}] call CBA_fnc_addEventHandler;

if (!hasInterface) exitWith {};

[{
    EGVAR(gear,gearAssigned) && {EGVAR(acre,radiosConfigured)} && {EGVAR(jip,configReady)}
}, {
    GVAR(initScritpsLoaded) = true
}, []] call CBA_fnc_waitUntilAndExecute;



