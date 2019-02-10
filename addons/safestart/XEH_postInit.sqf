#include "script_component.hpp"

if (GVAR(safeStartTime) == 0 && !GVAR(finished)) exitWith {};

[QGVAR(safeStartFinishEvent), DFUNC(endWarmupClient)] call CBA_fnc_addEventHandler;

[{CBA_missionTime > 0}, {
    if (isServer) then {
        [DFUNC(warmupServerPFH), 5] call CBA_fnc_addPerFrameHandler;
    };

    if (hasInterface) then {
        [player] call FUNC(startWarmupClient);
    };
}, []] call CBA_fnc_waitUntilAndExecute;
