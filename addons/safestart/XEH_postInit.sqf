#include "script_component.hpp"

if (GVAR(safeStartTime) == 0) exitWith {};

[QGVAR(safeStartFinishEvent), DFUNC(endWarmupClient)] call CBA_fnc_addEventHandler;

if (isServer) then {
    missionNamespace setVariable [QGVAR(finished), false, true];
};

[{CBA_missionTime > 0}, {
    if (isServer) then {
        [DFUNC(warmupServerPFH), 5] call CBA_fnc_addPerFrameHandler;
    };

    if (hasInterface) then {
        [{!isNil QGVAR(finished)}, {
            if (!GVAR(finished)) then {
                [player] call FUNC(startWarmupClient);
            };
        }, []] call CBA_fnc_waitUntilAndExecute;
    };
}, []] call CBA_fnc_waitUntilAndExecute;
