#include "script_component.hpp"

[QGVAR(clientSaveStatus), DFUNC(clientSaveStatus)] call CBA_fnc_addEventHandler;
[QGVAR(clientRetrieveStatus), DFUNC(clientRetrieveStatus)] call CBA_fnc_addEventHandler;
[QGVAR(serverSaveClient), DFUNC(serverSaveClient)] call CBA_fnc_addEventHandler;

[QGVAR(retrieveStatusFromServer), {
    params ["_player"];

    [QGVAR(clientRetrieveStatus), [_player, true, GVAR(persistence)], _player] call CBA_fnc_targetEvent;
}] call CBA_fnc_addEventHandler;
