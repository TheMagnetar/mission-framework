//===================================================================================================//
// Redistribute radios?                                                                              //
// Radios are distributed to the different units. The radios that are assigned can be controlled by  //
// the variables GVAR(riflemanRadio) and GVAR(rolesRiflemanRadio) for rifleman radios,               //
// GVAR(shortRangeRadio and GVAR(rolesShortRangeRadio for short range radios and                     //
// GVAR(longRangeRadio and GVAR(rolesLongRangeRadio for long range radio.                            //
//   - false: radios are not distributed.                                                            //
//   - true: radios are distributed.                                                                 //
// Default option: true.                                                                             //
//===================================================================================================//
[
    QGVAR(distributeRadios),
    "CHECKBOX",
    "Distribute radios",
    "Mission-Framework",
    true,
    true,
    {}
] call CBA_Settings_fnc_init;

// Configure radio channels?
[
    QGVAR(configureChannels),
    "CHECKBOX",
    "Configure radio channels",
    "Mission-Framework",
    true,
    true,
    {}
] call CBA_Settings_fnc_init;

// Configure babel languages?
[
    QGVAR(configureBabel),
    "CHECKBOX",
    "Configure babel languages",
    "Mission-Framework",
    true,
    true,
    {}
] call CBA_Settings_fnc_init;
