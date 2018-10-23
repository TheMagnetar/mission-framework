//=======================================================================================================//
// File: fn_jip_retrieveStatus.sqf                                                                       //
// Author: TheMagnetar                                                                                   //
// Version: 1.0                                                                                          //
// File creation: 2016/11/12                                                                             //
// Description: This function applies a gear previously stored in the profileNamespace variable          //
//              "bmt_arrayProfile_savedLoadout". This is only true if the current mission name is equal  //
//              to the one stored in "bmt_varProfile_missionName". See also the script:                  //
//              "function/jip/fn_jip_retrieveStatus.sqf".                                                //
//              Arguments:                                                                               //
//               - 0: unit to equip <OBJECT>.                                                            //
// Changes: 1.0 (2016/11/12) First public version.                                                       //
//=======================================================================================================//
#include "script_component.hpp"

params ["_unit"];

private _jipInformation = missionNamespace getVariable [QGVAR(jipInformation), ""];

if (_jipInformation isEqualTo "") exitWith {
    WARNING("Variable bmt_arrayMission_jipInformation is not defined.");
};

private _found = false;

{
    if ((_x select 0 == getPlayerUID _unit) && {_x select 1 == profileName}) exitWith {
        [_unit, _x select 2] call FUNC(retrievePlayerVariables);
        if (_unit getVariable [QEGVAR(respawn,playerAlive), true]) then {
            private _loadout = _x select 3;

            if (EGVAR(core,acreLoaded)) then {
                _loadout =+ [_loadout] call EFUNC(acre,replaceUniqueRadios);
            };

            _unit setUnitLoadout [_loadout, false];
        } else {
            _unit setDamage 1;

            [{
                "normal" cutText ["You were dead when you disconnected. Therefore, you are dead when reconnecting!", "PLAIN"];
            }, [_unit], 5] call CBA_fnc_waitAndExecute;
        };
        _found =  true;
    };
} forEach _jipInformation;

if (!_found) then {
    WARNING("Could not find your previous gear!!");
} else {
    LOG_2("Gear of player %1 with UID %2 retrieved.",profileName,getPlayerUID _unit);
};

//============================================= END OF FILE =============================================//
