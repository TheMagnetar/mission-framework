// Configures DAC Debug level
[
    QGVAR(debugEnabled),
    "CHECKBOX",
    "Enable DAC",
    "UST-Framework",
    false,
    true,
    {
        asr_ai3_main_debug = GVAR(debugEnabled);
        publicVariable "asr_ai3_main_debug";
    }
] call CBA_Settings_fnc_init;
