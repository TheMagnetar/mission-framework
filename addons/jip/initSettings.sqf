[
    QGVAR(jipAllowedTime),
    "SLIDER",
    "JIP allowed time (min)",
    "UST-Framework",
    [-1, 600, 15, 0],
    true,
    {}
] call CBA_Settings_fnc_init;

[
    QGVAR(savePlayerStatus),
    "LIST",
    "Save player status",
    "UST-Framework",
    [[0, 1, 2], ["No", "Yes", "Yes + A.Fatigue"], 0],
    true,
    {
        if (!hasInterface) exitWith {};
        if ((GVAR(savePlayerStatus) == 2) && {isClass (configFile >> "CfgPatches" >> "ace_advanced_fatigue")}) then {
            if (GVAR(saveAdvancedFatiguePFH) == -1) then {
                //GVAR(saveAdvancedFatiguePFH) = [DFUNC(saveStatusAdvancedFatigue), 1, player] call CBA_fnc_addPerFrameHandler;
            };
        } else {
            if (GVAR(saveAdvancedFatiguePFH) > -1) then {
                //[GVAR(saveAdvancedFatiguePFH)] call CBA_fnc_removePerFrameHandler;
                //GVAR(saveAdvancedFatiguePFH) = -1;
            };
        };
    }
] call CBA_Settings_fnc_init;
