#include "script_component.hpp"

if (GVAR(safeStartTime) == 0 && !GVAR(safeStartFinished)) exitWith {};

if (hasInterface) then {
    [player] call FUNC(startWarmupClient);
};

[QGVAR(safeStartFinishEvent), DFUNC(endWarmupClient)] call CBA_fnc_addEventHandler;

if (!isServer) exitWith {};

[{CBA_missionTime > 0},
{
    GVAR(safeStartPFH) = [{
        private _elapsedTime = GVAR(safeStartTime)*60 - CBA_missionTime;

        if (_elapsedTime <= 0) then {
            [QGVAR(safeStartFinishEvent), []] call CBA_fnc_globalEventJIP;
            [GVAR(safeStartPFH)] call CBA_fnc_removePerFrameHandler
        };
    }, 5] call CBA_fnc_addPerFrameHandler;
}, []] call CBA_fnc_waitUntilAndExecute;
