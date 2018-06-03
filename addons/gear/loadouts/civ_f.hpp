class baseMan {// Weaponless baseclass
    displayName = "Unarmed";

    uniform[] = {};
    vest[] = {};
    backpack[] = {};
    headgear[] = {};
    goggles[] = {};
    binoculars[] = {};
    nightVision[] = {};

    // Weapons
    primaryWeapon[] = {};       // {weaponName, {attachment1a, attachment1a}, {attachment2, attachment2a}, attachment3, attachment4}
    secondaryWeapon[] = {};
    launcher[] = {};

    // Items and magazines
    magazines[] = {};      // Magazimes {magazineName, count}
    items[] = {};          // Items in uniform and vest {itemName, count}
    backpackItems[] = {};  // Items in the backpack {itemName, count}

    // These are added directly into their respective slots
    map[] = {};
    radio[] = {};
    gps[] = {};
    compass[] = {};
    watch[] = {};

    rank[] = {};
    insignia[] = {};

    languages[] = {"greek"};

    preLoadout = "";
    postLoadout = "";
};


class rfl : baseMan {
    displayName = "Rifleman";
};

class rflat : rfl {
    displayName = "Rifleman (AT)";
};

class rfluav : rfl {
    displayName = "UAV Operator";
};

class gr : rfl {
    displayName = "Grenadier";
};

class tl : rfl {
    displayName = "Team Leader";
};

class sl : tl {
    displayName = "Squad Leader";
};

class pl : sl {
    displayName = "Platoon Leader";
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
    postLoadout = "_this setVariable ['ace_medical_medicClass', 1, true];";
};

class pme : me {
    displayName = "Platoon Medic";
    postLoadout = "_this setVariable ['ace_medical_medicClass', 2, true];";
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
    postLoadout = "_this setVariable ['ACE_IsEngineer', 1, true];";
};

class cen : en {
    displayName = "Chief Engineer";
    postLoadout = "_this setVariable ['ACE_IsEngineer', 2, true];";
};

class exp : rfl {
    displayName = "Explosives Specialist";
    postLoadout = "_this setVariable ['ACE_IsEOD', 1, true];";
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
    postLoadout = "_this setVariable ['ace_medical_medicClass', 1, true];";
};

class divexp : div {
    displayName = "Diver Explosives Specialist";
    postLoadout = "_this setVariable ['ACE_IsEOD', 1, true];";
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
