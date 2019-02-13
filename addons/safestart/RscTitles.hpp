class RscText; // External declaration
class RscTitles {
    class GVAR(timerDialog) {
        idd = TIMER_DIALOG_IDD;
        movingEnable = 0;
        duration = 9999999;
        fadein = 0;
        fadeout = 0;
        onLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(timerDisplay), _this select 0)]);
        class controls {
            class Text : RscText {
                idc = TIMER_DIALOG_IDC;
                text = CSTRING(active);
                x = 0.37*safezoneW + safezoneX;
                y = safezoneY;
                w = 0.5 * safezoneW;
                h = 0.05 * safezoneH;
                style = ST_CENTER;
                SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2)";
                colorText[] = {1, 1, 1, 1};
                shadow = 2;
                font = "PuristaBold";
            };
        };
    };
};
