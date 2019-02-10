#include "script_component.hpp"
/*
 * Author: TheMagnetar
 * Handles changing the debug mode of DAC.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * None
 *
 * Example:
 * [] call umf_dac_fnc_handleChangeDebug
 *
 * Public: No
 */

// Modify DAC output depending whether the debug is activated or not.
switch (GVAR(debugLevel)) do {
    case 0: {
        // Do not display any info.
        DAC_Com_Values = [0,0,0,0];
        DAC_Marker     = 0;
    };

    case 1: {
        // Show initialisation messages (recommended).
        DAC_Com_Values = [0,1,0,0];
        DAC_Marker     = 0;
    };

    case 2: {
        // Show reduction and initialisation messages as well as unit markers on the map.
        DAC_Com_Values = [1,2,0,0];
        DAC_Marker     = 2;
    };

    default {
        LOG("Unrecognised DAC parameter.");
    };
};

// Make the variables public
publicVariable "DAC_Com_Values";
publicVariable "DAC_Marker";
