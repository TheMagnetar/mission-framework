class networkCommand {
    displayName = "Command";

    side = "west";
    class ACRE_PRC343 {
        roles[] = {"me", "rfl", "rflat", "rfluav", "gr", "ar", "aar", "dm", "mg", "amg", "at", "aat", "aa", "aaa", "en", "exp", "divme", "divexp", "div", "hplt","ccrw"};
        networkConfiguration[] = {
            {"Romeo"},
            {"Mike"},
            {"Punisher"}, {"Punisher 1"}, {"Punisher 2"}, {"Punisher 3"},
            {"Lezo"}, {"Lezo 1"}, {"Lezo 2"}, {"Lezo 3"},
            {"Warrior"},
            {"Wolf"}, {"Wolf 1"}, {"Wolf 2"}, {"Wolf 3"},
            {"Emergencia"},
            {"Aereo"}, {"Halcon"}, {"Medevac"}, {"Eagle"}, {"Papa Bear"}
        };
    };

    class ACRE_PRC152 {
        roles[] = {"pl", "psg", "rto", "fo", "jtac", "sl", "tl", "sn", "sp", "divsl"};
        networkConfiguration[] = {
            {"Romeo", 60},
            {"Mike", 61},
            {"Punisher", 62},
            {"Lezo", 63},
            {"Warrior", 64},
            {"Wolf", 65},
            {"Emergencia", 92},
            {"Sierra", 93}
        };
    };

    class ACRE_PRC117F : ACRE_PRC152 {
        roles[] = {"rto", "fo"};
    };
};

class networkAir : networkCommand {
    displayName = "Air";

    class ACRE_PRC117F {
        roles[] = {"jtac"};
        networkConfiguration[] = {
            {"Romeo", 60},
            {"Emergencia", 92},
            {"Sierra", 93},
            {"Sierra 1", 93.025},
            {"Sierra 2", 93.050},
            {"Eagle", 94},
            {"Eagle 1", 94.025},
            {"Eagle 2", 94.050}
        };
    };
};

class networkLezo : networkCommand {
    displayName = "Lezo";

    class ACRE_PRC152 {
        roles[] = {"pl", "psg", "rto", "fo", "jtac", "sl", "tl", "sn", "sp", "divsl"};
        networkConfiguration[] = {
            {"Romeo", 60},
            {"Mike", 61},
            {"Punisher", 62},
            {"Lezo", 63},
            {"Lezo 1", 63.025},
            {"Lezo 2", 63.050},
            {"Lezo 3", 63.075},
            {"Warrior", 64},
            {"Wolf", 65},
            {"Emergencia", 92},
            {"Sierra", 93}
        };
    };
};
