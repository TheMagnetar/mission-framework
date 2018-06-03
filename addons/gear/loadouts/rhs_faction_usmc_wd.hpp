class baseMan {// Weaponless baseclass
    displayName = "Unarmed";                // Identificador en el editor 3D

    uniform[] = {"rhs_uniform_cu_ucp"};     // Uniform: randoom {uniform1, uniform2}
    vest[] = {"rhsusf_iotv_ucp_rifleman"};  // Vest randoom {vest1, vest2}
    backpack[] = {};                        // Backpack randoom {backpack1, backpack2}
    headgear[] = {"rhsusf_ach_helmet_ucp"}; // Helmet randoom {helmet1, helmet2}
    goggles[] = {"rhs_googles_black"};      // Goggles randoom {goggle1, google2}
    binoculars[] = {};                      // Binoculars randoom {binocular1, binocular2}
    nightVision[] = {};                     // Nightvision randoom {nvg1, nvg2}

    // Weapons
    primaryWeapon[] = {};       // Randoom weapon with randoom attachments 1a,1b + 2,2a + 3 + 4
                                // {
                                //    {weaponName1, {attachment1a, attachment1a}, {attachment2, attachment2a}, attachment3, attachment4},
                                //    {weaponName2, {attachment1a, attachment1a}, {attachment2, attachment2a}, attachment3, attachment4},
                                // }
    secondaryWeapon[] = {};     // Handgun
    launcher[] = {};            // Launcher

    // Items and magazines
    magazines[] = {};      // Magazines. The first suitable magazine will be added to the corresponding weapon
    items[] = {};          // Items in uniform and vest. Items that do not fit will be added to the backpack
    backpackItems[] = {};  // Items in the backpack

    // These are added directly into their respective slots
    map[] = {};       // Randoom selection of map item
    radio[] = {};     // Randoom selection of radio item. If ACRE2 is active, all radios in the list will be added
    gps[] = {};       // Randoom selection of gps item
    compass[] = {};   // Randoom selection of compass item
    watch[] = {};     // Randoom selection of watch item

    rank[] = {"private"};  // Unit rank
    insignia[] = {};       // Unit insignia

    preLoadout = "";       // Code executed before applying the loadout. Arguments: _unit.
    postLoadout = "";      // Code executed after applying the loadout. Arguments: _unit.

    languages[] = {"english"};  // Array with spoken languages (ACRE2)
};

class rfl : baseMan {
    displayName = "Rifleman";
    primaryWeapon[] = {
            {"rhs_weap_m4a1_pmag", "rhsusf_acc_compm4"}
        };
    secondaryWeapon[] = {
        {"rhsusf_weap_m9"}
    };
    magazines[] = {
        EXPAND_7("rhs_mag_30Rnd_556x45_M855_Stanag"),
        "rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red",
        EXPAND_5("SmokeShell"),
        EXPAND_4("rhs_mag_m67"),
        EXPAND_2("rhsusf_mag_15Rnd_9x19_FMJ")
    };
    items[] = {
        "ACE_EarPlugs", EXPAND_4("ACE_packingBandage"), EXPAND_5("ACE_elasticBandage"), EXPAND_5("ACE_CableTie")
    };
};

class rflat : rfl {
    displayName = "Rifleman (AT)";
    launcher[] = {
        {"rhs_weap_M136_hedp"}
    };
    magazines[] += {
        "rhs_m136_hedp_mag"
    };
};

class rfluav : rfl {
    displayName = "UAV Operator";
    backpack[] = {"B_rhsusf_B_BACKPACK"};
};

class gr : rfl {
    displayName = "Grenadier";
    vest[] = {"rhsusf_iotv_ucp_Grenadier"};
    primaryWeapon[] = {
        {"rhs_weap_m4a1_m320"}
    };
    magazines[] += {
        EXPAND_2("rhsusf_mag_15Rnd_9x19_FMJ"),
        EXPAND_6("rhs_mag_M433_HEDP"),
        EXPAND_4("rhs_mag_m713_Red"),
        EXPAND_3("ACE_HuntIR_M203")
    };
};

class tl : rfl {
    displayName = "Team Leader";
    vest[] = {"rhsusf_iotv_ucp_Teamleader"};
    binoculars[] = {"Binocular"};
    rank[] = {"corporal"};

    test[] = {"test1"};
};

class sl : tl {
    displayName = "Squad Leader";
    headgear[] = {"rhsusf_ach_helmet_ESS_ucp"};
    primaryWeapon[] = {
        {"rhs_weap_m4a1_m203s", {"rhsusf_acc_eotech_552"}}
    };
    items[] += {"ACE_DAGR"};
    magazines[] += {
        "1Rnd_HE_Grenade_shell", "ACE_HuntIR_M203", EXPAND_2("rhs_mag_m713_Red")
    };

    rank[] = {"sergeant"};
    postLoadout = "";
};

class pl : sl {
    displayName = "Platoon Leader";
    rank[] = {"lieutenant"};
};

class psg : sl {
    displayName = "Platoon Sergeant";
};

class rto : rfl {
    displayName = "Radiotelephone Operator";
};

class fo : rto {
    displayName = "Forward Observer";
};

class jtac : rto {
    displayName = "Joint Terminal Attack Controller";
};

class me : rfl {
    displayName = "Combat Medic";
    postLoadout = "_unit setVariable ['ace_medical_medicClass', 1, true];";
};

class pme : me {
    displayName = "Platoon Medic";
    postLoadout = "_unit setVariable ['ace_medical_medicClass', 2, true];";
};

class ar : rfl {
    displayName = "Automatic Rifleman";
};

class aar : rfl {
    displayName = "Assitant Automatic Rifleman";
};

class dm : rfl {
    displayName = "Designated Marksman";
};

class mg : ar {
    displayName = "Machine Gunner";
};

class amg: aar {
    displayName = "Assitant Machine Gunner";
};

class at : rflat {
    displayName = "Anti-Tank";
};

class aat : aar {
    displayName = "AT Ammo handler";
};

class aa : at {
    displayName = "Anti-Aircraft gunner";
};

class aaa : aat {
    displayName = "Anti-Aircraft Assitant";
};

class en : rfl {
    displayName = "Engineer";
    postLoadout = "_unit setVariable ['ACE_IsEngineer', 1, true];";
};

class cen : en {
    displayName = "Chief Engineer";
    postLoadout = "_unit setVariable ['ACE_IsEngineer', 2, true];";
};

class exp : rfl {
    displayName = "Explosives Specialist";
    postLoadout = "_unit setVariable ['ACE_IsEOD', 1, true];";
};

class sp : rfl {
    displayName = "Spotter";
};

class sn : sp {
    displayName = "Snipper";
};

class div : rfl {
    displayName = "Diver";
};

class divme : div {
    displayName = "Diver Medic";
    postLoadout = "_unit setVariable ['ace_medical_medicClass', 1, true];";
};

class divexp : div {
    displayName = "Diver Explosives Specialist";
    postLoadout = "_unit setVariable ['ACE_IsEOD', 1, true];";
};

class divtl : div {
    displayName = "Diver Team Leader";
};

class hplt : rfl {
    displayName = "Helicopter Pilot";
};

class jplt : hplt {
    displayName = "Jet Pilot";
};

class ccrw : rfl {
    displayName = "Combat Crew";
};
