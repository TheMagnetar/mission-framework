// Dynamic-AI-Creator: Use DAC-AI-Creator routines?
[
    QGVAR(enabled),
    "CHECKBOX",
    "Enable DAC",
    "Mission-Framework",
    EGVAR(core,dac),
    true,
    {}
] call CBA_Settings_fnc_init;

// Configures DAC Debug level
[
    QGVAR(debugLevel),
    "LIST",
    "DAC Debug Level",
    "Mission-Framework",
    [[0, 1, 2], ["Disabled", "Simplified", "Full"], 0],
    true,
    {
        [] call FUNC(handleChangeDebug);
    }
] call CBA_Settings_fnc_init;
