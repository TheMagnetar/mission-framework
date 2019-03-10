#include "\a3\3DEN\UI\macros.inc"
#include "\a3\3DEN\UI\resincl.inc"

class Cfg3DEN {
    class Object {
        class AttributeCategories {
            class umf_attributes {
                displayName = "UST101 Mission Framework";
                collapsed = 1;
                class Attributes {};
            };
        };
    };

    class Attributes {
        class GVAR(hidden) {
            idc = -1;
            type = 0; style = 0;
            w = 0; h = 0; y = 0; x = 0;
            attributeLoad = "";
            attributeSave = "";
            show = 0;
            tooltip = "";
            fade = 0;
            access = 0;
            default = 0;
            blinkingPeriod = 0;
            deletable = 0;
            shadow = 0;
            color[] = {1,1,1};
            colorBackground[] = {0.1,0.1,0.95};
            colorPreview[] = {1,1,1};
            colorPreviewBackground[] = {0.1,0.1,0.95};
            sizeEx = 4.5; // Hack: Mikero does not compile with SIZEEX_PURISTA(SIZEEX_M);
            font = FONT_NORMAL;
            text = "";
            lineSpacing = 1;
            fixedWidth = 0;
            colorText[] = {1,1,1,1};
            colorShadow[] = {0,0,0,1};

            moving = 0;

            autoplay = 0;
            loops = 0;

            tileW = 1;
            tileH = 1;

            onCanDestroy = "";
            onDestroy = "";
            onMouseEnter = "";
            onMouseExit = "";
            onSetFocus = "";
            onKillFocus = "";
            onKeyDown = "";
            onKeyUp = "";
            onMouseButtonDown = "";
            onMouseButtonUp = "";
            action = "";
            onMouseButtonDblClick = "";
            onMouseZChanged = "";
            onMouseMoving = "";
            onMouseHolding = "";

            onVideoStopped = "";
        };
    };
};
