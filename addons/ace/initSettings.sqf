[
    QGVAR(aceSpectatorEnabled),
    "CHECKBOX",
    "Enable ACE3 Spectator?",
    "UST-Framework",
    true,
    true,
    {}
] call CBA_Settings_fnc_init;

// Configure radio channels?
[
    QGVAR(preventInstaDeathTime),
    "SLIDER",
    "Prevent InstaDeath Time in min. (0 to disable script)",
    "UST-Framework",
    [0, 300, 45, 0],
    true,
    {}
] call CBA_Settings_fnc_init;
