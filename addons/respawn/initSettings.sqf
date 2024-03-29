[
    QGVAR(saveGear),
    "CHECKBOX",
    "Save Gear on respawn?",
    "Mission-Framework",
    true,
    true,
    {}
] call CBA_Settings_fnc_init;

// Configure radio channels?
[
    QGVAR(killCamEnabled),
    "CHECKBOX",
    "Kill Cam",
    "Mission-Framework",
    true,
    true,
    {}
] call CBA_Settings_fnc_init;

/*
[
    QGVAR(respawnTicketsFor),
    "LIST",
    "Respawn tickets for",
    "Mission-Framework",
    [[0, 1], ["Player", "Side"], 0],
    true,
    {}
] call CBA_Settings_fnc_init;*/

[
    QGVAR(numRespawnsConfig),
    "SLIDER",
    ["Number of respawns (-1 for infinite respawns)", "-1: unlimited respawns, 0: respawn disabled, >0: number of respawns"],
    "Mission-Framework",
    [-1, 50, 0, 0],
    true,
    {}
] call CBA_Settings_fnc_init;

[
    QGVAR(respawnAreaTime),
    "SLIDER",
    "Respawn area time (min)",
    "Mission-Framework",
    [0, 20, 0, 0],
    true,
    {}
] call CBA_Settings_fnc_init;
