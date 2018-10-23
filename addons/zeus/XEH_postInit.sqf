#include "script_component.hpp"

[{CBA_missionTime > 0},
{
    if (GVAR(createModule) && {isServer}) then {
        [] call FUNC(createModule);
    };
},[]] call CBA_fnc_waitUntilAndExecute;

[QGVAR(assignZeus), DFUNC(createModule)] call CBA_fnc_addEventHandler;

["zeus", {
    params ["_name"];
    _name = toLower _name;
    {
        if (((toLower name _x) find _name) != -1) exitWith {
            systemChat format ["Zeus given to %1", name _x];
            [QGVAR(assignZeus), [_x]] call CBA_fnc_serverEvent;
        };

    } forEach allPlayers;
}, "adminLogged"] call CBA_fnc_registerChatCommand;
