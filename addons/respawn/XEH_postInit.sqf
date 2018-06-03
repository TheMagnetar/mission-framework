#include "script_component.hpp"

if (!hasInterface) exitWith {};

[{CBA_missionTime > 0}, DFUNC(config), [player]] call CBA_fnc_waitUntilAndExecute;

player addEventHandler ["killed", {_this spawn FUNC(onPlayerKilled);}];
player addEventHandler ["Respawn", {_this spawn FUNC(onPlayerRespawn);}];
