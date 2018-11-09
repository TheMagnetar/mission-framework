/*
 * Author: Astur
 *
 * Description: Modern warfare USAF Navy Seals (Jungle version)
 */

class baseMan {                                        // Weaponless baseclass
    displayName = "Unarmed";                           // Identificador en el editor 3D

    uniform[] = {"CFP_U_Crye_AOR2"};                   // Uniform: randoom {uniform1, uniform2}
    vest[] = {"CFP_LBT6094_operator_multicamTropic"};  // Vest randoom {vest1, vest2}
    backpack[] = {};                                   // Backpack randoom {backpack1, backpack2}
    headgear[] = {"CFP_BoonieHat_AOR2"};               // Helmet randoom {helmet1, helmet2}
    goggles[] = {};                                    // Goggles randoom {goggle1, google2}
    binoculars[] = {"rhsusf_bino_m24_ARD"};            // Binoculars randoom {binocular1, binocular2}
    nightVision[] = {};                                // Nightvision randoom {nvg1, nvg2}

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
    displayName = "SEAL";
    primaryWeapon[] = {
        {"rhs_weap_m4a1_blockII_wd", "rhsusf_acc_nt4_tan", "rhsusf_acc_anpeq15_bk", {"rhsusf_acc_EOTECH", "rhsusf_acc_eotech_xps3"}}
    };
    handgun[] = {
        {"hgun_Pistol_heavy_01_F"}
    };
    magazines[] = {
        EXPAND_8("rhs_mag_30Rnd_556x45_M855A1_PMAG"),
        EXPAND_3("11Rnd_45ACP_Mag"),
        "ACE_M84",
        EXPAND_2("rhs_mag_m67"),
        EXPAND_2("rhs_mag_an_m8hc"),
        "rhs_mag_m18_yellow",
        "rhs_mag_an_m14_th3"
    };

    items[] = {
        "ACE_EarPlugs", "ACE_tourniquet", EXPAND_4("ACE_packingBandage"), EXPAND_2("ACE_CableTie"),"ACE_DAGR"
    };
};

class rflat : rfl {
    displayName = "AT";
    vest[] = {"CFP_LBT6094_breacher_multicamTropic"};
    launcher[] = {
        {"rhs_weap_M136"}
    };
};

class exp : rfl {
    displayName = "Especialista Demoliciones";
    handgun[] = {
        {"rhs_weap_M320"}
    };
    backpack[] = {"CFP_Carryall_Multicam"};
    vest[] = {"CFP_LBT6094_breacher_multicamTropic"};
    magazines[] = {
        EXPAND_8("rhs_mag_30Rnd_556x45_M855A1_PMAG"),
        "ACE_M84",
        EXPAND_2("rhs_mag_m67"),
        EXPAND_2("rhs_mag_an_m8hc"),
        "rhs_mag_m18_yellow",
        "rhs_mag_an_m14_th3",
        EXPAND_2("SatchelCharge_Remote_Mag"),
        EXPAND_4("rhs_mag_M441_HE")
    };
    items[] += {
        "ACE_M26_Clacker"
    };
};

class tl : rfl {
    displayName = "Teniente";
    binoculars[] = {"rhsusf_bino_lerca_1200_black"};
    items[] += {
        "ALIVE_Tablet"
    };
};

class me : rfl {
    displayName = "corpsman";
    backpack[] = {"B_AssaultPack_tna_F"};
    items[] += {
        EXPAND_8("ACE_packingBandage"), EXPAND_5("ACE_elasticBandage"), EXPAND_2("ACE_tourniquet"), EXPAND_4("ACE_morphine"), EXPAND_2("ACE_epinephrine"), EXPAND_3("ACE_salineIV"), EXPAND_2("ACE_salineIV_500"), EXPAND_2("ACE_bodyBag"), "ACE_surgicalKit"
    };
    postLoadout = "_unit setVariable ['ace_medical_medicClass', 1, true];";
};

class rto : rfl {
    displayName = "RTO";
    backpack[] = {"B_AssaultPack_tna_F"};
};

class gr : rfl {
    displayName = "Granadero";
    vest[] = {"CFP_LBT6094_breacher_multicamTropic"};
    launcher[] = {
        {"rhs_weap_M136"}};
    primaryWeapon[] = {
        {"rhs_weap_m4a1_blockII_M203_wd", "rhsusf_acc_nt4_tan", "rhsusf_acc_anpeq15_bk", {"rhsusf_acc_EOTECH", "rhsusf_acc_eotech_xps3"}}
    };
    magazines[] += {
        EXPAND_6("rhs_mag_M397_HET"),
    };
};

class mg : rfl {
    displayName = "Machine Gunner";
    vest[] = {"CFP_LBT6094_MG_multicamTropic"};
    primaryWeapon[] = {
        {"rhs_weap_m249_pip_L_vfg", "rhsusf_acc_grip1", {"rhsusf_acc_g33_xps3", "rhsusf_acc_eotech_552"}}
    };
    handgun[] = {
        {"hgun_Pistol_heavy_01_F"}
    };
    magazines[] = {
        EXPAND_3("rhsusf_200Rnd_556x45_box"),
        EXPAND_2("11Rnd_45ACP_Mag"),
        EXPAND_2("rhs_mag_m67"),
        EXPAND_2("rhs_mag_an_m8hc")
    };
};

class dm : rfl {
    displayName = "Tirador";
    binoculars[] = {"ACE_VectorDay"};
    primaryWeapon[] = {
        {"rhs_weap_sr25", "rhsusf_acc_SR25S", "rhsusf_acc_anpeq15A", "rhsusf_acc_premier", "rhsusf_acc_harris_bipod"},
    };
    magazines[] = {
        EXPAND_4("rhsusf_20Rnd_762x51_SR25_m993_Mag"),
        EXPAND_3("11Rnd_45ACP_Mag"),
        EXPAND_2("rhs_mag_m67"),
        EXPAND_2("rhs_mag_an_m8hc"),
    };
    items[] += {
        "ACE_MapTools", "ACE_RangeCard"
    };
};
