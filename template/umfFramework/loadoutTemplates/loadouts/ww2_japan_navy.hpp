class baseMan {// Weaponless baseclass
    displayName = "Unarmed";                // Identificador en el editor 3D

    uniform[] = {"fow_u_ija_type98_snlf"};  // Uniform: randoom {uniform1, uniform2}
    vest[] = {"fow_v_ija_rifle"};           // Vest randoom {vest1, vest2}
    backpack[] = {};                        // Backpack randoom {backpack1, backpack2}
    headgear[] = {"fow_h_ija_type90_snlf"}; // Helmet randoom {helmet1, helmet2}
    goggles[] = {};                         // Goggles randoom {goggle1, google2}
    binoculars[] = {};                      // Binoculars randoom {binocular1, binocular2}
    nightVision[] = {};                     // Nightvision randoom {nvg1, nvg2}

    // Weapons
    primaryWeapon[] = {{""}};   // Randoom weapon with randoom attachments 1a,1b + 2,2a + 3 + 4
                                // {
                                //    {weaponName1, {attachment1a, attachment1a}, {attachment2, attachment2a}, attachment3, attachment4},
                                //    {weaponName2, {attachment1a, attachment1a}, {attachment2, attachment2a}, attachment3, attachment4},
                                // }
    secondaryWeapon[] = {{""}};     // Handgun
    launcher[] = {{""}};            // Launcher

    // Items and magazines
    magazines[] = {};      // Magazines. The first suitable magazine will be added to the corresponding weapon
    items[] = {};          // Items in uniform and vest. Items that do not fit will be added to the backpack
    backpackItems[] = {};  // Items in the backpack

    // These are added directly into their respective slots
    map[] = {"ItemMap"};          // Randoom selection of map item
    radio[] = {};                 // Randoom selection of radio item. If ACRE2 is active, all radios in the list will be added
    gps[] = {};                   // Randoom selection of gps item
    compass[] = {"ItemCompass"};  // Randoom selection of compass item
    watch[] = {"ItemWatch"};      // Randoom selection of watch item

    rank[] = {"private"};  // Unit rank
    insignia[] = {};       // Unit insignia

    preLoadout = "";       // Code executed before applying the loadout. Arguments: _unit.
    postLoadout = "";      // Code executed after applying the loadout. Arguments: _unit.

    languages[] = {"japanese"};  // Array with spoken languages (ACRE2)
};

class rfl : baseMan {
    displayName = "Rifleman";
    backpack[] = {"fow_b_ija_backpack"};
    primaryWeapon[] = {
        {"fow_w_type99"}
    };

    magazines[] = {
        EXPAND_18("fow_5Rnd_77x58"),
        EXPAND_2("fow_e_type97")
    };

    items[] = {
        "ACE_EarPlugs","fow_w_acc_type30_bayo","ACE_tourniquet", EXPAND_4("ACE_packingBandage"), EXPAND_4("ACE_elasticBandage")
    };
};

class rflat : rfl {
    displayName = "Rifleman (LAT)";

    magazines[] += {
        EXPAND_2("fow_e_type99_at")
    };
};

class gr : rfl {
    displayName = "Grenadier";

    magazines[] += {
        EXPAND_6("fow_1Rnd_type2_40")
    };
};

class tl : rfl {
    displayName = "Team Leader";

    uniform[] = {"fow_u_ija_type98_snlf"};
    vest[] = {"fow_v_ija_nco"};
    headgear[] = {"fow_h_ija_fieldcap_marine_neck"};
    binoculars[] = {"fow_i_dienstglas"};

    primaryWeapon[] = {
        {"fow_w_type100"}
    };
    secondaryWeapon[] = {
        {"fow_w_type14"}
    };
    magazines[] = {
        EXPAND_10("fow_32Rnd_8x22"),
        EXPAND_2("fow_8Rnd_8x22"),
        EXPAND_2("fow_e_type97"),
        EXPAND_2("SmokeShell")

    };

    rank[] = {"corporal"};
};

class sl : tl {
    displayName = "Squad Leader";

    headgear[] = {"fow_h_ija_fieldcap_marine"};
    vest[] = {"fow_v_ija_officer"};

    rank[] = {"sergeant"};
    postLoadout = "";
};

class pl : sl {
    displayName = "Platoon Leader";

    rank[] = {"lieutenant"};
};

class rto : gr {
    displayName = "RTO";

    forceItems = 1;
};

class rto_pl : rto {
    displayName = "Platton Leader (with radio)";

    headgear[] = {"fow_h_ija_fieldcap_marine"};
    vest[] = {"fow_v_ija_officer"};
};

class me : rfl {
    displayName = "Combat Medic";

    vest[] = {"fow_v_ija_medic"};
    items[] += {
        EXPAND_15("ACE_packingBandage"), EXPAND_15("ACE_elasticBandage"), EXPAND_4("ACE_quikclot"), "ACE_tourniquet", EXPAND_10("ACE_morphine"), EXPAND_5("ACE_epinephrine"), "ACE_bloodIV", EXPAND_2("ACE_bloodIV_250"), "ACE_bloodIV_500"
    };
    postLoadout = "_unit setVariable ['ace_medical_medicClass', 1, true];";
};

class mg : rfl {
    displayName = "Machine Gunner";

    vest[] = {"fow_v_ija_mg"};
    primaryWeapon[] = {
        {"fow_w_type99_lmg"}
    };
    secondaryWeapon[] = {
        {"fow_w_type14"}
    };
    magazines[] = {
        EXPAND_7("fow_30Rnd_77x58"),
        EXPAND_2("fow_8Rnd_8x22")
    };
};

class amg : rfl {
    displayName = "Assitant MG";

    magazines[] += {
        EXPAND_4("fow_30Rnd_77x58")
    };
};

class exp : rfl {
    displayName = "Explosives Specialist";

    magazines[] += {
        EXPAND_4("LIB_Ladung_Small_MINE_mag"), EXPAND_2("LIB_Ladung_Big_MINE_mag")
    };
    postLoadout = "_unit setVariable ['ACE_IsEOD', 1, true];";
};

class sn : rfl {
    displayName = "Snipper";

    primaryWeapon[] = {
        {"fow_w_type99_sniper"}
    };
};

class jplt : baseMan {
    displayName = "Jet Pilot";

    uniform[] = {"fow_u_ija_pilot"};
    vest[] = {};
    headgear[] = {"fow_h_ija_flight_helmet","fow_h_ija_hakimachi"};

    primaryWeapon[] = {{""}};
    secondaryWeapon[] = {
        {"fow_w_type14"}
    };
    magazines[] = {
        EXPAND_3("fow_8Rnd_8x22")
    };
};

class ccrw : jplt {
    displayName = "Tank Crew";

    uniform[] = {"fow_u_ija_type98_short"};
    vest[] = {};
    headgear[] = {"fow_h_ija_tank_helmet","fow_h_ija_hakimachi"};
};
