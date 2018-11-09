/*
 * Author: Astur
 *
 * Description: Modern warfare USAF Delta Force (Jungle version)
 */

class baseMan {                             // Weaponless baseclass
    displayName = "Unarmed";                // Identificador en el editor 3D

    uniform[] = {"CFP_U_Crye_Multicam2"};   // Uniform: Random {uniform1, uniform2}
    vest[] = {                              // Vest Random {vest1, vest2}
        "rhsusf_spcs_ocp_rifleman",
        "rhsusf_spcs_ocp_rifleman_alt"
    };
    backpack[] = {};                        // Backpack Random {backpack1, backpack2}
    headgear[] = {                          // Helmet Random {helmet1, helmet2}
        "rhsusf_mich_bare_norotos_arc_alt_semi",
        "rhsusf_mich_bare_norotos_arc_alt_semi_headset"
    };
    goggles[] = {};                         // Goggles Random {goggle1, google2}
    binoculars[] = {"rhsusf_bino_m24_ARD"}; // Binoculars Random {binocular1, binocular2}
    nightVision[] = {};                     // Nightvision Random {nvg1, nvg2}

    // Weapons
    primaryWeapon[] = { // Random weapon with Random attachments 1a,1b + 2,2a + 3 + 4
        {""}            // {
    };                  //    {weaponName1, {attachment1a, attachment1a}, {attachment2, attachment2a}, attachment3, attachment4},
                        //    {weaponName2, {attachment1a, attachment1a}, {attachment2, attachment2a}, attachment3, attachment4},
                        // }

    handgun[] = {       // Handgun
        {""}
    };

    launcher[] = {      // Launcher
        {""}
    };

    // Items and magazines
    magazines[] = {};      // Magazines. The first suitable magazine will be added to the corresponding weapon
    items[] = {};          // Items in uniform and vest. Items that do not fit will be added to the backpack
    backpackItems[] = {};  // Items in the backpack

    // These are added directly into their respective slots
    map[] = {"ItemMap"};           // Random selection of map item
    radio[] = {};                  // Random selection of radio item. If ACRE2 is active, all radios in the list will be added
    gps[] = {};                    // Random selection of gps item
    compass[] = {"ItemCompass"};   // Random selection of compass item
    watch[] = {"ItemWatch"};       // Random selection of watch item

    rank[] = {"private"};  // Unit rank
    insignia[] = {};       // Unit insignia

    preLoadout = "";       // Code executed before applying the loadout. Arguments: _unit.
    postLoadout = "";      // Code executed after applying the loadout. Arguments: _unit.

    languages[] = {"english"};  // Array with spoken languages (ACRE2)
};

class rfl : baseMan {
    displayName = "Operador";
    primaryWeapon[] = {
        {"rhs_weap_hk416d145", {"rhsusf_acc_eotech_552", "rhsusf_acc_eotech_xps3"}},
        {"rhs_weap_hk416d145_wd_2", {"rhsusf_acc_EOTECH", "rhsusf_acc_eotech_xps3"}}
    };
    handgun[] = {
        {"rhsusf_weap_m9"}
    };

    magazines[] = {
        EXPAND_8("rhs_mag_30Rnd_556x45_M855A1_PMAG"),
        EXPAND_2("rhsusf_mag_15Rnd_9x19_JHP"),
        EXPAND_2("rhs_mag_m67"),
        EXPAND_2("rhs_mag_an_m8hc"),
        "ACE_M84"
    };

    items[] = {
        "ACE_EarPlugs", "rhsusf_acc_nt4_black", "ACE_tourniquet", EXPAND_4("ACE_packingBandage"), EXPAND_2("ACE_CableTie")
    };
};

class exp : rfl {
    displayName = "Operador Demoliciones";
    backpack[] = {"B_TacticalPack_mcamo"};
    magazines[] += {
        EXPAND_2("SatchelCharge_Remote_Mag")
    };
    items[] += {
        "ACE_M26_Clacker"
    };
};

class gr : rfl {
    displayName = "Operador Granadero";
    vest[] = {"rhsusf_spcs_ocp_grenadier"};
    primaryWeapon[] = {
        {"rhs_weap_hk416d145_m320", {"rhsusf_acc_eotech_552", "rhsusf_acc_eotech_xps3"}}
    };
    magazines[] += {
        EXPAND_6("rhs_mag_M397_HET")
    };
};

class psg : rfl {
    displayName = "Sargento Mayor";
    binoculars[] = {"rhsusf_bino_lerca_1200_black"};
    vest[] = {"rhsusf_spcs_ocp_squadleader"};
    items[] += {"ACE_DAGR", "ALIVE_Tablet"};
 };

class pl : psg {
    displayName = "Líder de Pelotón";
    backpack[] = {"B_AssaultPack_dgtl"};
    headgear[] = {"rhsusf_mich_bare_norotos_alt_tan"};
};

class rto : rfl {
    displayName = "RTO";
    backpack[] = {"B_AssaultPack_dgtl"};
};

class me : rfl {
    displayName = "Operator corpsman";
    backpack[] = {"B_TacticalPack_mcamo"};
    items[] += {
        EXPAND_8("ACE_packingBandage"),
        EXPAND_5("ACE_elasticBandage"),
        EXPAND_2("ACE_tourniquet"),
        EXPAND_4("ACE_morphine"),
        EXPAND_2("ACE_epinephrine"),
        EXPAND_3("ACE_salineIV"),
        EXPAND_2("ACE_salineIV_500"),
        EXPAND_2("ACE_bodyBag"),
        "ACE_surgicalKit"
    };
    postLoadout = "_unit setVariable ['ace_medical_medicClass', 1, true];";
};

class mg : rfl {
    displayName = "Operador MG";
    vest[] = {"rhsusf_spcs_ocp_machinegunner"};
    primaryWeapon[] = {
        {"rhs_weap_m249_pip_L_vfg","rhsusf_acc_grip1", {"rhsusf_acc_g33_xps3", "rhsusf_acc_eotech_552"}}
    };
    magazines[] = {
        EXPAND_3("rhsusf_200Rnd_556x45_box"),
        EXPAND_2("rhsusf_mag_15Rnd_9x19_JHP"),
        EXPAND_2("rhs_mag_m67"),
        EXPAND_2("rhs_mag_an_m8hc")
    };
    items[] = {
        "ACE_EarPlugs", "ACE_tourniquet", EXPAND_4("ACE_packingBandage"), EXPAND_2("ACE_CableTie")
    };
};
