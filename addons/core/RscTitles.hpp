class RscText; // External declaration
class RscTitles {
    class GVAR(preventFiring) {
        idd = PREVENTFIRING_DIALOG_IDD;
        movingEnable = 0;
        duration = 2;
        fadein = 0;
        fadeout = 1;
        class controls {
            class Text : RscText {
                text = CSTRING(preventFire);
                x = safezoneX;
                y = safezoneY + 0.8;
                w = safezoneW;
                h = 0.1 * safezoneH;
                style = ST_CENTER;
                SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 3)";
                colorText[] = {0.9, 0, 0, 1};
                shadow = 2;
                font = "PuristaBold";
            };
        };
    };
};
