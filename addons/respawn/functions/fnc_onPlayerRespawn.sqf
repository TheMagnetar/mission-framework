//=======================================================================================================//
// File: bmt_respawn_onPlayerRespawn.sqf                                                                 //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2015/10/02                                                                             //
// Description: This document configures the onPlayerRespawn event. For the moment ACE3 spectator mode   //
//              (http://ace3mod.com/wiki/feature/spectator.html) in case it is available, defaulting to  //
//              the vanila one if ACE3 is not loaded.                                                    //
//                                                                                                       //
//              Arguments:                                                                               //
//               - 0: unit to be respawned <OBJECT>.                                                     //
//               - 1: old unit that was killed <OBJECT>.                                                 //
//               - 2: respawn type <SCALAR>.                                                             //
//               - 3: number of seconds until respawn <SCALAR>.                                          //
//                                                                                                       //
// Changes: 1.0 (2015/11/26) First public version.                                                       //
//=======================================================================================================//
#include "script_component.hpp"

// Parameters passed when onPlayerRespawn.
params [["_unit",objNull], ["_oldUnit",objNull]];

private _respawn = getMissionConfigValue ["respawn", 3];
if (_respawn isEqualType "") then {
    switch (_respawn) do {
        case "NONE": {_respawn = 0;};
        case "BIRD": {_respawn = 1;};
        case "INSTANT": {_respawn = 2;};
        case "BASE": {_respawn = 3;};
        case "GROUP": {_respawn = 4;};
        case "SIDE": {_respawn = 5;};
    };
};

// If there is respawn of type BIRD.
if (_respawn == 1) then {
    _unit setVariable [QGVAR(playerAlive), false, true];

    sleep 1;

    GVAR(respawnCameraScript) = [_oldUnit] spawn FUNC(effects);

    sleep 6;
    if ({_x getVariable [QGVAR(playerAlive), true]} count allPlayers <= 0) then {
        // End the mission if there are no alive units and respawn of type "BIRD".
        [] remoteExecCall ["bmt_fnc_endMission", 0, true];
    } else {
        cutText ["You are dead! Entering spectator mode.", "PLAIN DOWN"];
        sleep 5;

        GVAR(camera) = false;
        sleep 0.2;
        [_oldUnit] call FUNC(enterSpectator);
    };
} else {

    // Hide custom respawn counter and terminate camera.
    [false] call FUNC(respawnCounter);
    GVAR(camera) = false;

    [_unit] call FUNC(exitSpectator);

    [_unit] call FUNC(moveToMarker);

    // Assign equipment before death or default one depending on the role
    if (GVAR(saveGear)) then {
        private _savedLoadout = _unit getVariable [QGVAR(savedLoadout), []];
        if (EGVAR(core,acreLoaded)) then {
                _savedLoadout =+ [_savedLoadout] call EFUNC(acre,replaceUniqueRadios);
            };
        _unit setUnitLoadout(_savedLoadout);
        if (EGVAR(core,aceLoaded)) then {
            _unit setVariable ["ACE_hasEarPlugsin", _unit getVariable [QGVAR(hasEarPlugs), false]];
            _unit setVariable [QGVAR(hasEarPlugs), nil];
        };

        // Configure active channels.
        if (EGVAR(acre,configureChannels)) then {
            [DEFUNC(acre,configureChannels), [_unit], 0.5] call CBA_fnc_waitAndExecute;
        };
    } else {
        private _role = _unit getVariable [QEGVAR(gear,role), ""];
        private _faction = _unit getVariable [QEGVAR(gear,faction), ""];
        [_unit, _role, _faction] call EFUNC(gear,assignGear);

        // Remove and distribute ACRE 2 radios.
        if (EGVAR(core,acreLoaded)) then {
            // Distribute radios
            if (EGVAR(acre,distributeRadios)) then {
                // Remove radios
                [_unit] call EFUNC(acre2,removeRadios);

                [_unit] call EFUNC(acre,addRadios);
            };

            // Configure active channels.
            if (EGVAR(acre,configureChannels)) then {
                [DEFUNC(acre,configureChannels), [_unit], 0.5] call CBA_fnc_waitAndExecute;
            };
        };

        // Remove and distribute TFAR radios.
        if (EGVAR(core,tfarLoaded)) then {
            // Remove radios
            [_unit] call EFUNC(tfar,removeRadios);

            // Distribute radios
            if (EGVAR(tfar,distributeRadios)) then {
                [_unit] call EFUNC(tfar,addRadios);
            };

            // Configure active channels.
            if (EGVAR(tfar,configureChannels)) then {
                [_unit] call EFUNC(tfar,configureChannels);
            };

            // Configure stereo.
            if (EGVAR(tfar,configureStereo)) then {
                [_unit] call EFUNC(tfar,configureStereo);
            };
        };
    };
};

//============================================= END OF FILE =============================================//
