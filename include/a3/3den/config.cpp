////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.66
//'now' is Tue Dec 19 19:38:06 2017 : 'file' last modified on Tue Nov 14 16:44:51 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//ndefs=23
enum {
	_fnc_sizeex = 0,
	_fnc_colorhextorgba_4 = 0,
	_axiscolor1 = 0,
	destructengine = 2,
	_axiscolor2 = 0,
	destructdefault = 6,
	destructwreck = 7,
	_fnc_colorrgbatohex = 0,
	_fnc_colorhextorgba_6 = 0,
	_axiscolor3 = 0,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	_fnc_colorhextorgba = 0,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	_fnc_colorhextorgba_0 = 0,
	destructman = 5,
	_fnc_colorhextorgba_2 = 0,
	destructbuilding = 1
};

//Class 3den : config.bin{
class CfgPatches
{
	class A3_3DEN
	{
		author = "$STR_A3_Bohemia_Interactive";
		name = "Arma 3 Eden Update - Eden Editor";
		url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Data_F_Exp_B"};
		requiredVersion = 0.1;
		units[] = {"Sphere_3DEN","SphereNoGround_3DEN"};
		weapons[] = {};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class 3DEN
		{
			list[] = {"A3_3DEN","A3_3DEN_Language","3DEN"};
		};
	};
};
class RscText;
class RscTitle;
class RscListbox;
class RscControlsGroupNoScrollbars;
class RscPicture;
class RscButtonMenu;
class RscButtonMenuOK;
class RscButtonMenuCancel;
class RscStandardDisplay;
class RscVignette;
class RscMap;
class ctrlDefault
{
	access = 0;
	idc = -1;
	style = 0;
	default = 0;
	show = 1;
	fade = 0;
	blinkingPeriod = 0;
	deletable = 0;
	x = 0;
	y = 0;
	w = 0;
	h = 0;
	tooltip = "";
	tooltipMaxWidth = 0.5;
	tooltipColorShade[] = {0,0,0,1};
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {0,0,0,0};
	class ScrollBar
	{
		width = 0;
		height = 0;
		scrollSpeed = 0.06;
		arrowEmpty = "\a3\3DEN\Data\Controls\ctrlDefault\arrowEmpty_ca.paa";
		arrowFull = "\a3\3DEN\Data\Controls\ctrlDefault\arrowFull_ca.paa";
		border = "\a3\3DEN\Data\Controls\ctrlDefault\border_ca.paa";
		thumb = "\a3\3DEN\Data\Controls\ctrlDefault\thumb_ca.paa";
		color[] = {1,1,1,1};
	};
};
class ctrlDefaultText: ctrlDefault
{
	sizeEx = "4.32 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
	font = "RobotoCondensedLight";
	shadow = 1;
};
class ctrlDefaultButton: ctrlDefaultText
{
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
};
class ctrlStatic: ctrlDefaultText
{
	type = 0;
	colorBackground[] = {0,0,0,0};
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
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
	onVideoStopped = "";
};
class ctrlStaticPicture: ctrlStatic
{
	style = 48;
};
class ctrlStaticPictureKeepAspect: ctrlStaticPicture
{
	style = "0x30 + 0x800";
};
class ctrlStaticPictureTile: ctrlStatic
{
	style = 144;
};
class ctrlStaticFrame: ctrlStatic
{
	style = 64;
};
class ctrlStaticLine: ctrlStatic
{
	style = 176;
};
class ctrlStaticMulti: ctrlStatic
{
	style = "0x10 + 0x200";
};
class ctrlStaticBackground: ctrlStatic
{
	colorBackground[] = {0.2,0.2,0.2,1};
};
class ctrlStaticOverlay: ctrlStatic
{
	colorBackground[] = {0,0,0,0.5};
};
class ctrlStaticTitle: ctrlStatic
{
	moving = 1;
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorText[] = {1,1,1,1};
};
class ctrlStaticFooter: ctrlStatic
{
	colorBackground[] = {0,0,0,0.3};
};
class ctrlStaticBackgroundDisable: ctrlStatic
{
	x = -4;
	y = -2;
	w = 8;
	h = 4;
	colorBackground[] = {1,1,1,0.5};
};
class ctrlStaticBackgroundDisableTiles: ctrlStaticPictureTile
{
	x = -4;
	y = -2;
	w = 8;
	h = 4;
	text = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\backgroundDisable_ca.paa";
	tileW = "8 / (32 * pixelW)";
	tileH = "4 / (32 * pixelH)";
	colorText[] = {1,1,1,0.05};
};
class ctrlButton: ctrlDefaultButton
{
	type = 1;
	style = "0x02 + 0xC0";
	colorBackground[] = {0,0,0,1};
	colorBackgroundDisabled[] = {0,0,0,0.5};
	colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorFocused[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	font = "PuristaLight";
	text = "";
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	borderSize = 0;
	colorBorder[] = {0,0,0,0};
	colorShadow[] = {0,0,0,0};
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = "pixelW";
	offsetPressedY = "pixelH";
	period = 0;
	periodFocus = 2;
	periodOver = 0.5;
	class KeyHints
	{
		class A
		{
			key = "0x00050000 + 0";
			hint = "KEY_XBOX_A";
		};
	};
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
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
	onButtonClick = "";
	onButtonDown = "";
	onButtonUp = "";
};
class ctrlButtonPicture: ctrlButton
{
	style = "0x02 + 0x30";
};
class ctrlButtonPictureKeepAspect: ctrlButton
{
	style = "0x02 + 0x30 + 0x800";
};
class ctrlButtonOK: ctrlButton
{
	default = 1;
	idc = 1;
	text = "$STR_DISP_OK";
};
class ctrlButtonCancel: ctrlButton
{
	idc = 2;
	text = "$STR_DISP_CANCEL";
};
class ctrlButtonClose: ctrlButtonCancel
{
	text = "$STR_DISP_CLOSE";
};
class ctrlButtonToolbar: ctrlButtonPictureKeepAspect
{
	colorBackground[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
};
class ctrlButtonSearch: ctrlButton
{
	style = "0x02 + 0x30 + 0x800";
	text = "\a3\3DEN\Data\Displays\Display3DEN\search_start_ca.paa";
	textSearch = "\a3\3DEN\Data\Displays\Display3DEN\search_end_ca.paa";
	tooltip = "$STR_3den_display3den_menubar_search_text";
};
class ctrlButtonExpandAll: ctrlButtonToolbar
{
	style = "0x02 + 0x30 + 0x800";
	text = "\a3\3DEN\Data\Displays\Display3DEN\tree_expand_ca.paa";
	tooltip = "$STR_3DEN_ctrlButtonExpandAll_text";
};
class ctrlButtonCollapseAll: ctrlButtonToolbar
{
	style = "0x02 + 0x30 + 0x800";
	text = "\a3\3DEN\Data\Displays\Display3DEN\tree_collapse_ca.paa";
	tooltip = "$STR_3DEN_ctrlButtonCollapseAll_text";
};
class ctrlButtonFilter: ctrlButton
{
	colorBackground[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	colorBackgroundActive[] = {1,1,1,0.3};
	colorFocused[] = {0,0,0,0};
};
class ctrlEdit: ctrlDefaultText
{
	type = 2;
	colorBackground[] = {0,0,0,0.5};
	text = "";
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorSelection[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	canModify = 1;
	autocomplete = "";
	onCanDestroy = "";
	onDestroy = "";
	onSetFocus = "";
	onKillFocus = "";
	onKeyDown = "";
	onKeyUp = "";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
};
class ctrlEditMulti: ctrlEdit
{
	style = 16;
};
class ctrlSliderV: ctrlDefault
{
	type = 3;
	style = 0;
	color[] = {0,0,0,1};
	colorDisabled[] = {1,1,1,0.25};
	colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	sliderRange[] = {0,1};
	sliderPosition = 1;
	lineSize = 0.1;
	pageSize = 3;
	class Title
	{
		idc = -1;
		colorBase[] = {1,1,1,1};
		colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	};
	class Value
	{
		idc = -1;
		format = "%.f";
		type = "SPTPlain";
		colorBase[] = {1,1,1,1};
		colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	};
	onCanDestroy = "";
	onDestroy = "";
	onSetFocus = "";
	onKillFocus = "";
	onKeyDown = "";
	onKeyUp = "";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
	onSliderPosChanged = "";
};
class ctrlSliderH: ctrlSliderV
{
	style = 1024;
};
class ctrlCombo: ctrlDefaultText
{
	type = 4;
	style = "0x00 + 0x10 + 0x200";
	colorBackground[] = {0.05,0.05,0.05,1};
	colorSelectBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorSelect[] = {0,0,0,1};
	colorTextRight[] = {1,1,1,1};
	colorSelectRight[] = {1,1,1,0.25};
	colorSelect2Right[] = {1,1,1,1};
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightSelected[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	arrowEmpty = "\a3\3DEN\Data\Controls\ctrlCombo\arrowEmpty_ca.paa";
	arrowFull = "\a3\3DEN\Data\Controls\ctrlCombo\arrowFull_ca.paa";
	wholeHeight = "12 * 	5 * (pixelH * pixelGrid * 	0.50)";
	maxHistoryDelay = 1;
	soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
	soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
	soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};
	class ComboScrollBar
	{
		width = 0;
		height = 0;
		scrollSpeed = 0.01;
		arrowEmpty = "\a3\3DEN\Data\Controls\ctrlDefault\arrowEmpty_ca.paa";
		arrowFull = "\a3\3DEN\Data\Controls\ctrlDefault\arrowFull_ca.paa";
		border = "\a3\3DEN\Data\Controls\ctrlDefault\border_ca.paa";
		thumb = "\a3\3DEN\Data\Controls\ctrlDefault\thumb_ca.paa";
		color[] = {1,1,1,1};
	};
	onCanDestroy = "";
	onDestroy = "";
	onSetFocus = "";
	onKillFocus = "";
	onKeyDown = "";
	onKeyUp = "";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
	onLBSelChanged = "";
};
class ctrlComboToolbar: ctrlCombo
{
	colorBackground[] = {0.05,0.05,0.05,1};
	colorSelectBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	arrowEmpty = "\a3\3DEN\Data\Controls\ctrlCombo\arrowEmptyToolbar_ca.paa";
	arrowFull = "\a3\3DEN\Data\Controls\ctrlCombo\arrowEmptyToolbar_ca.paa";
	wholeHeight = "12 * 	5 * (pixelH * pixelGrid * 	0.50)";
};
class ctrlListbox: ctrlDefaultText
{
	type = 5;
	style = "0x00 + 0x10";
	colorBackground[] = {0,0,0,0.5};
	colorSelectBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorSelectBackground2[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorShadow[] = {0,0,0,0.5};
	colorDisabled[] = {1,1,1,0.25};
	colorText[] = {1,1,1,1};
	colorSelect[] = {1,1,1,1};
	colorSelect2[] = {1,1,1,1};
	colorTextRight[] = {1,1,1,1};
	colorSelectRight[] = {1,1,1,1};
	colorSelect2Right[] = {1,1,1,1};
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightSelected[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	period = 1;
	rowHeight = "4.32 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
	itemSpacing = 0;
	maxHistoryDelay = 1;
	canDrag = 0;
	soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
	class ListScrollBar: ScrollBar{};
	onCanDestroy = "";
	onDestroy = "";
	onSetFocus = "";
	onKillFocus = "";
	onKeyDown = "";
	onKeyUp = "";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
	onLBSelChanged = "";
	onLBDblClick = "";
	onLBDrag = "";
	onLBDragging = "";
	onLBDrop = "";
};
class ctrlToolbox: ctrlDefaultText
{
	type = 6;
	style = 2;
	colorBackground[] = {0,0,0,0.5};
	colorText[] = {1,1,1,1};
	colorTextSelect[] = {1,1,1,1};
	rows = 1;
	columns = 1;
	strings[] = {};
	values[] = {};
	color[] = {1,0,1,1};
	colorSelect[] = {0,0,0,0};
	colorTextDisable[] = {0,0,0,0};
	colorDisable[] = {0,0,0,0};
	colorSelectedBg[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
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
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
	onToolBoxSelChanged = "";
};
class ctrlToolboxPicture: ctrlToolbox
{
	style = "0x02 + 0x30";
};
class ctrlToolboxPictureKeepAspect: ctrlToolbox
{
	style = "0x02 + 0x30 + 0x800";
};
class ctrlCheckboxes: ctrlDefaultText
{
	type = 7;
	colorBackground[] = {0,0,0,0.5};
	colorText[] = {1,1,1,1};
	colorTextSelect[] = {1,1,1,1};
	rows = 1;
	columns = 1;
	strings[] = {};
	checked_strings[] = {};
	color[] = {1,0,1,1};
	colorSelect[] = {0,0,0,0};
	colorTextDisable[] = {0,0,0,0};
	colorDisable[] = {0,0,0,0};
	colorSelectedBg[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
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
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
	onCheckBoxesSelChanged = "";
};
class ctrlCheckboxesCheckbox: ctrlCheckboxes
{
	style = 48;
	strings[] = {"\a3\3DEN\Data\Controls\ctrlCheckbox\textureUnchecked_ca.paa"};
	checked_strings[] = {"\a3\3DEN\Data\Controls\ctrlCheckbox\textureChecked_ca.paa"};
	colorBackground[] = {0,0,0,0};
	colorSelectedBg[] = {0,0,0,0};
};
class ctrlProgress: ctrlDefault
{
	type = 8;
	texture = "#(argb,8,8,3)color(1,1,1,1)";
	colorBar[] = {1,1,1,1};
	colorFrame[] = {0,0,0,1};
	onCanDestroy = "";
	onDestroy = "";
};
class ctrlHTML: ctrlDefaultText
{
	type = 9;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	colorBold[] = {1,1,1,0.5};
	colorLink[] = {1,1,1,1};
	colorLinkActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorPicture[] = {1,1,1,1};
	colorPictureBorder[] = {0,0,0,0};
	colorPictureLink[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	prevPage = "\a3\3DEN\Data\Controls\CtrlHTML\prevPage_ca.paa";
	nextPage = "\a3\3DEN\Data\Controls\CtrlHTML\nextPage_ca.paa";
	filename = "";
	cycleLinks = 0;
	cycleAllLinks = 0;
	class P
	{
		font = "RobotoCondensedLight";
		fontBold = "RobotoCondensedBold";
		sizeEx = "4.32 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
	};
	class H1: P
	{
		sizeEx = "5.58 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
	};
	class H2: P
	{
		sizeEx = "4.86 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
	};
	class H3: P{};
	class H4: P{};
	class H5: P{};
	class H6: P
	{
		font = "RobotoCondensedLight";
		fontBold = "RobotoCondensedLight";
	};
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
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
	onHTMLLink = "";
};
class ctrlActiveText: ctrlDefaultButton
{
	type = 11;
	text = "";
	color[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.75};
	colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorDisabled[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
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
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
	onButtonClick = "";
	onButtonDown = "";
	onButtonUp = "";
};
class ctrlActivePicture: ctrlActiveText
{
	style = 48;
	color[] = {1,1,1,1};
};
class ctrlActivePictureKeepAspect: ctrlActiveText
{
	style = "0x30 + 0x800";
};
class ctrlTree: ctrlDefaultText
{
	type = 12;
	colorBorder[] = {0,0,0,1};
	colorLines[] = {0,0,0,0};
	colorBackground[] = {0,0,0,0};
	colorSelect[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorMarked[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",0.5};
	colorMarkedSelected[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorText[] = {1,1,1,1};
	colorSelectText[] = {1,1,1,1};
	colorMarkedText[] = {1,1,1,1};
	colorSearch[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	colorPictureRight[] = {1,1,1,1};
	colorPictureRightSelected[] = {1,1,1,1};
	colorPictureRightDisabled[] = {1,1,1,0.25};
	multiselectEnabled = 0;
	expandOnDoubleclick = 1;
	hiddenTexture = "\a3\3DEN\Data\Controls\ctrlTree\hiddenTexture_ca.paa";
	expandedTexture = "\a3\3DEN\Data\Controls\ctrlTree\expandedTexture_ca.paa";
	maxHistoryDelay = 1;
	disableKeyboardSearch = 0;
	class ScrollBar: ScrollBar
	{
		scrollSpeed = 0.05;
	};
	colorDisabled[] = {0,0,0,0};
	colorArrow[] = {0,0,0,0};
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
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
	onTreeSelChanged = "";
	onTreeLButtonDown = "";
	onTreeDblClick = "";
	onTreeExpanded = "";
	onTreeCollapsed = "";
	onTreeMouseExit = "";
};
class ctrlStructuredText: ctrlDefaultText
{
	type = 13;
	colorBackground[] = {0,0,0,0};
	size = "4.32 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
	text = "";
	class Attributes
	{
		align = "left";
		color = "#ffffff";
		colorLink = "";
		size = 1;
		font = "RobotoCondensedLight";
	};
	onCanDestroy = "";
	onDestroy = "";
};
class ctrlControlsGroup: ctrlDefault
{
	type = 15;
	style = 16;
	x = 0;
	y = 0;
	w = 1;
	h = 1;
	class VScrollBar: ScrollBar
	{
		width = "2 * (pixelW * pixelGrid * 	0.50)";
		height = 0;
		autoScrollEnabled = 0;
		autoScrollDelay = 1;
		autoScrollRewind = 1;
		autoScrollSpeed = 1;
	};
	class HScrollBar: ScrollBar
	{
		width = 0;
		height = "2 * (pixelH * pixelGrid * 	0.50)";
	};
	onCanDestroy = "";
	onDestroy = "";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
};
class ctrlControlsGroupNoScrollbars: ctrlControlsGroup
{
	class VScrollbar: VScrollBar
	{
		width = 0;
	};
	class HScrollbar: HScrollBar
	{
		height = 0;
	};
};
class ctrlControlsGroupNoHScrollbars: ctrlControlsGroup
{
	class HScrollbar: HScrollBar
	{
		height = 0;
	};
};
class ctrlControlsGroupNoVScrollbars: ctrlControlsGroup
{
	class VScrollbar: VScrollBar
	{
		width = 0;
	};
};
class ctrlShortcutButton: ctrlDefaultButton
{
	type = 16;
	style = 192;
	colorBackground[] = {0,0,0,1};
	colorBackground2[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorBackgroundFocused[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorBackgroundActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	text = "";
	size = "4.86 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
	shadow = 0;
	color[] = {1,1,1,1};
	color2[] = {1,1,1,1};
	colorFocused[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	animTextureNormal = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver = "#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled = "#(argb,8,8,3)color(1,1,1,1)";
	animTextureDefault = "#(argb,8,8,3)color(1,1,1,1)";
	period = 1;
	periodFocus = 1;
	periodOver = 0.5;
	shortcuts[] = {"0x00050000 + 0",28,57,156};
	textureNoShortcut = "#(argb,8,8,3)color(1,1,1,1)";
	class Attributes
	{
		align = "center";
		color = "#ffffff";
		font = "PuristaLight";
		shadow = 0;
	};
	class HitZone
	{
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	class TextPos
	{
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	class ShortcutPos
	{
		left = 0;
		top = 0;
		w = 0;
		h = 0;
	};
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
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
	onButtonClick = "";
	onButtonDown = "";
	onButtonUp = "";
};
class ctrlShortcutButtonOK: ctrlShortcutButton
{
	default = 1;
	idc = 1;
	text = "$STR_DISP_OK";
};
class ctrlShortcutButtonCancel: ctrlShortcutButton
{
	idc = 2;
	text = "$STR_DISP_CANCEL";
};
class ctrlShortcutButtonSteam: ctrlShortcutButton
{
	colorBackground[] = {0.03137255,0.72156864,0.91764706,1.0};
	textureNoShortcut = "\a3\3DEN\Data\Controls\CtrlShortcutButton\steam_ca.paa";
	class TextPos
	{
		left = "1.5 * 	5 * (pixelW * pixelGrid * 	0.50)";
		top = 0;
		right = 0;
		bottom = 0;
	};
	class ShortcutPos
	{
		left = 0;
		top = 0;
		w = "5 * (pixelW * pixelGrid * 	0.50)";
		h = "5 * (pixelH * pixelGrid * 	0.50)";
	};
};
class ctrlXListbox: ctrlDefaultText
{
	type = 42;
	style = "0x400 + 0x02 + 0x10";
	color[] = {1,1,1,1};
	colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorText[] = {1,1,1,1};
	colorSelect[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorDisabled[] = {1,1,1,0.25};
	colorPicture[] = {1,1,1,1};
	cycle = 1;
	arrowEmpty = "\a3\3DEN\Data\Controls\CtrlXSlider\arrowEmpty_ca.paa";
	arrowFull = "\a3\3DEN\Data\Controls\CtrlXSlider\arrowFull_ca.paa";
	border = "\a3\3DEN\Data\Controls\CtrlXSlider\border_ca.paa";
	soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
	onCanDestroy = "";
	onDestroy = "";
	onSetFocus = "";
	onKillFocus = "";
	onKeyDown = "";
	onKeyUp = "";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
	onLBSelChanged = "";
	onLBDblClick = "";
};
class ctrlXSliderV: ctrlDefault
{
	type = 43;
	style = 0;
	color[] = {1,1,1,0.6};
	colorActive[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	sliderRange[] = {0,1};
	sliderPosition = 1;
	lineSize = 0.1;
	arrowEmpty = "\a3\3DEN\Data\Controls\CtrlXSlider\arrowEmpty_ca.paa";
	arrowFull = "\a3\3DEN\Data\Controls\CtrlXSlider\arrowFull_ca.paa";
	border = "\a3\3DEN\Data\Controls\CtrlXSlider\border_ca.paa";
	thumb = "\a3\3DEN\Data\Controls\CtrlXSlider\thumb_ca.paa";
	class Title
	{
		idc = -1;
		colorBase[] = {1,1,1,1};
		colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	};
	class Value
	{
		idc = -1;
		format = "%.f";
		type = "SPTPlain";
		colorBase[] = {1,1,1,1};
		colorActive[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	};
	onCanDestroy = "";
	onDestroy = "";
	onSetFocus = "";
	onKillFocus = "";
	onKeyDown = "";
	onKeyUp = "";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
	onSliderPosChanged = "";
};
class ctrlXSliderH: ctrlXSliderV
{
	style = 1024;
};
class ctrlMenu: ctrlDefaultText
{
	type = 46;
	font = "RobotoCondensedLight";
	colorBorder[] = {0,0,0,0};
	colorBackground[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	colorSelect[] = {0,0,0,1};
	colorSelectBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorDisabled[] = {1,1,1,0.25};
	colorPicture[] = {1,1,1,1};
	colorPictureSelect[] = {0,0,0,1};
	colorPictureDisabled[] = {1,1,1,0.5};
	arrow = "\a3\3DEN\Data\Controls\ctrlMenu\arrow_ca.paa";
	rowHeight = 0;
	itemSpacingW = 0.01;
	itemSpacingH = 0.01;
	pictureCheckboxEnabled = "\a3\3DEN\Data\Controls\CtrlMenu\pictureCheckboxEnabled_ca.paa";
	pictureCheckboxDisabled = "#(argb,8,8,3)color(0,0,0,0)";
	pictureRadioEnabled = "\a3\3DEN\Data\Controls\CtrlMenu\pictureRadioEnabled_ca.paa";
	pictureRadioDisabled = "#(argb,8,8,3)color(0,0,0,0)";
};
class ctrlMenuStrip: ctrlMenu
{
	type = 47;
	colorStripBackground[] = {0,0,0,1};
	colorStripText[] = {1,1,1,1};
	colorStripSelect[] = {0,0,0,1};
	colorStripSelectBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorStripDisabled[] = {1,1,1,0.25};
};
class ctrlObject{};
class ctrlObjectContainer: ctrlObject{};
class ctrlObjectZoom: ctrlObject{};
class ctrlMap: ctrlDefault
{
	type = 101;
	style = 48;
	x = "safezoneXAbs";
	y = "safezoneY";
	w = "safezoneWAbs";
	h = "safezoneH";
	sizeEx = 0.05;
	font = "RobotoCondensedLight";
	colorText[] = {0,0,0,1};
	moveOnEdges = 1;
	ptsPerSquareSea = 5;
	ptsPerSquareTxt = 20;
	ptsPerSquareCLn = 10;
	ptsPerSquareExp = 10;
	ptsPerSquareCost = 10;
	ptsPerSquareFor = 9;
	ptsPerSquareForEdge = 9;
	ptsPerSquareRoad = 6;
	ptsPerSquareObj = 9;
	scaleMin = 0.0001;
	scaleMax = 1.0;
	scaleDefault = 0.16;
	maxSatelliteAlpha = 0.85;
	alphaFadeStartScale = 2;
	alphaFadeEndScale = 2;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	colorBackground[] = {0.969,0.957,0.949,1.0};
	colorOutside[] = {0.0,0.0,0.0,1.0};
	colorSea[] = {0.467,0.631,0.851,0.5};
	colorForest[] = {0.624,0.78,0.388,0.5};
	colorForestBorder[] = {0.0,0.0,0.0,0.0};
	colorRocks[] = {0.0,0.0,0.0,0.3};
	colorRocksBorder[] = {0.0,0.0,0.0,0.0};
	colorLevels[] = {0.286,0.177,0.094,0.5};
	colorMainCountlines[] = {0.572,0.354,0.188,0.5};
	colorCountlines[] = {0.572,0.354,0.188,0.25};
	colorMainCountlinesWater[] = {0.491,0.577,0.702,0.6};
	colorCountlinesWater[] = {0.491,0.577,0.702,0.3};
	colorPowerLines[] = {0.1,0.1,0.1,1.0};
	colorRailWay[] = {0.8,0.2,0.0,1.0};
	colorNames[] = {0.1,0.1,0.1,0.9};
	colorInactive[] = {1.0,1.0,1.0,0.5};
	colorTracks[] = {0.84,0.76,0.65,0.15};
	colorTracksFill[] = {0.84,0.76,0.65,1.0};
	colorRoads[] = {0.7,0.7,0.7,1.0};
	colorRoadsFill[] = {1.0,1.0,1.0,1.0};
	colorMainRoads[] = {0.9,0.5,0.3,1.0};
	colorMainRoadsFill[] = {1.0,0.6,0.4,1.0};
	colorTrails[] = {0.84,0.76,0.65,0.15};
	colorTrailsFill[] = {0.84,0.76,0.65,0.65};
	colorGrid[] = {0.1,0.1,0.1,0.6};
	colorGridMap[] = {0.1,0.1,0.1,0.6};
	fontLabel = "RobotoCondensedLight";
	sizeExLabel = 0.05;
	fontGrid = "TahomaB";
	sizeExGrid = 0.02;
	fontUnits = "TahomaB";
	sizeExUnits = 0.05;
	fontNames = "EtelkaNarrowMediumPro";
	sizeExNames = 0.05;
	fontInfo = "RobotoCondensedLight";
	sizeExInfo = 0.05;
	fontLevel = "TahomaB";
	sizeExLevel = 0.02;
	showCountourInterval = 1;
	idcMarkerColor = -1;
	idcMarkerIcon = -1;
	textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)";
	showMarkers = "true";
	class LineMarker
	{
		lineWidthThin = 0.008;
		lineWidthThick = 0.014;
		lineDistanceMin = 3e-005;
		lineLengthMin = 5;
	};
	class Legend
	{
		x = 0.5;
		y = 0.5;
		w = 0.4;
		h = 0.1;
		color[] = {0,0,0,1};
		colorBackground[] = {1,1,1,0.5};
		font = "RobotoCondensedLight";
		sizeEX = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
	};
	class Task
	{
		icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
		color[] = {1,1,1,1};
		iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
		colorCreated[] = {1,1,0,1};
		iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
		colorCanceled[] = {0.7,0.7,0.7,1};
		iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
		colorDone[] = {0.7,1,0.3,1};
		iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
		colorFailed[] = {1,0.3,0.2,1};
		size = 27;
		importance = 1;
		coefMin = 1;
		coefMax = 1;
	};
	class ActiveMarker
	{
		color[] = {0,0,0,1};
		size = 2;
	};
	class Waypoint
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		importance = 1;
		size = 24;
	};
	class WaypointCompleted: Waypoint
	{
		icon = "\A3\ui_f\data\map\mapcontrol\waypointCompleted_ca.paa";
	};
	class CustomMark: Waypoint
	{
		icon = "\A3\ui_f\data\map\mapcontrol\custommark_ca.paa";
	};
	class Command: Waypoint
	{
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		size = 18;
	};
	class Bush: Waypoint
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0.45,0.64,0.33,0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = 0.007;
		size = 7;
	};
	class SmallTree: Bush
	{
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = 0.36;
		size = 12;
	};
	class Tree: SmallTree
	{
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = 0.72;
	};
	class Rock: SmallTree
	{
		color[] = {0.1,0.1,0.1,0.8};
		icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
		importance = 0.3;
	};
	class BusStop: Bush
	{
		color[] = {0.45,0.64,0.33,0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
	};
	class FuelStation: Waypoint
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
	};
	class Hospital: FuelStation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
	};
	class Church: FuelStation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
	};
	class Lighthouse: FuelStation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
	};
	class Power: FuelStation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
	};
	class PowerSolar: FuelStation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
	};
	class PowerWave: FuelStation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
	};
	class PowerWind: FuelStation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
	};
	class Quay: FuelStation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
	};
	class Transmitter: FuelStation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
	};
	class Watertower: FuelStation
	{
		icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
	};
	class Cross: Waypoint
	{
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
	};
	class Chapel: Cross
	{
		icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
	};
	class Shipwreck: Cross
	{
		icon = "\A3\ui_f\data\map\mapcontrol\Shipwreck_CA.paa";
	};
	class Bunker: Waypoint
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		importance = 1.05;
		size = 14;
	};
	class Fortress: Bunker
	{
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		importance = 1.6;
		size = 16;
	};
	class Fountain: Bunker
	{
		icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
		importance = 0.6;
		size = 11;
	};
	class Ruin: Waypoint
	{
		coefMax = 4;
		coefMin = 1;
		icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
		importance = 0.96;
		size = 16;
	};
	class Stack: Waypoint
	{
		coefMax = 2;
		coefMin = 0.4;
		icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
		importance = 1.6;
		size = 16;
	};
	class Tourism: Waypoint
	{
		coefMax = 4;
		coefMin = 0.7;
		icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
		importance = 2.8;
		size = 16;
	};
	class ViewTower: Waypoint
	{
		coefMax = 4;
		coefMin = 0.5;
		icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
		importance = 2;
		size = 16;
	};
	onCanDestroy = "";
	onDestroy = "";
	onSetFocus = "";
	onKillFocus = "";
	onKeyDown = "";
	onKeyUp = "";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
	onDraw = "";
};
class ctrlMapEmpty: ctrlMap
{
	ptsPerSquareSea = 1000;
	ptsPerSquareTxt = 1000;
	ptsPerSquareCLn = 1000;
	ptsPerSquareExp = 1000;
	ptsPerSquareCost = 1000;
	ptsPerSquareFor = 1000;
	ptsPerSquareForEdge = 1000;
	ptsPerSquareRoad = 1000;
	ptsPerSquareObj = 1000;
	alphaFadeStartScale = 0;
	alphaFadeEndScale = 0;
	colorBackground[] = {1,1,1,1};
	colorOutside[] = {1,1,1,1};
	colorSea[] = {0,0,0,0};
	colorForest[] = {0,0,0,0};
	colorForestBorder[] = {0,0,0,0};
	colorRocks[] = {0,0,0,0};
	colorRocksBorder[] = {0,0,0,0};
	colorLevels[] = {0,0,0,0};
	colorMainCountlines[] = {0,0,0,0};
	colorCountlines[] = {0,0,0,0};
	colorMainCountlinesWater[] = {0,0,0,0};
	colorCountlinesWater[] = {0,0,0,0};
	colorPowerLines[] = {0,0,0,0};
	colorRailWay[] = {0,0,0,0};
	colorNames[] = {0,0,0,0};
	colorInactive[] = {0,0,0,0};
	colorGrid[] = {0,0,0,0};
	colorGridMap[] = {0,0,0,0};
	class Task: Task
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		iconCreated = "#(argb,8,8,3)color(0,0,0,0)";
		iconCanceled = "#(argb,8,8,3)color(0,0,0,0)";
		iconDone = "#(argb,8,8,3)color(0,0,0,0)";
		iconFailed = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		colorCreated[] = {0,0,0,0};
		colorCanceled[] = {0,0,0,0};
		colorDone[] = {0,0,0,0};
		colorFailed[] = {0,0,0,0};
		size = 0;
	};
	class Waypoint: Waypoint
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class WaypointCompleted: WaypointCompleted
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class CustomMark: CustomMark
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class Command: Command
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class Bush: Bush
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class Rock: Rock
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class SmallTree: SmallTree
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class Tree: Tree
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class busstop: BusStop
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class fuelstation: FuelStation
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class hospital: Hospital
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class church: Church
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class lighthouse: Lighthouse
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class power: Power
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class powersolar: PowerSolar
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class powerwave: PowerWave
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class powerwind: PowerWind
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class quay: Quay
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class shipwreck: Shipwreck
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class transmitter: Transmitter
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class watertower: Watertower
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class Bunker: Bunker
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class Cross: Cross
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class Fortress: Fortress
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class Fountain: Fountain
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class Chapel: Chapel
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class Ruin: Ruin
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class Stack: Stack
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class Tourism: Tourism
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
	class ViewTower: ViewTower
	{
		icon = "#(argb,8,8,3)color(0,0,0,0)";
		color[] = {0,0,0,0};
		size = 0;
	};
};
class ctrlMapMain: ctrlMap{};
class ctrlListNBox: ctrlDefaultText
{
	type = 102;
	style = "0x00 + 0x10";
	colorSelectBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorSelectBackground2[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorText[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorSelect[] = {1,1,1,1};
	colorSelect2[] = {1,1,1,1};
	colorShadow[] = {0,0,0,0.5};
	colorPicture[] = {1,1,1,1};
	colorPictureSelected[] = {1,1,1,1};
	colorPictureDisabled[] = {1,1,1,0.25};
	columns[] = {0};
	drawSideArrows = 0;
	idcLeft = -1;
	idcRight = -1;
	period = 1;
	disableOverflow = 0;
	rowHeight = "4.32 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
	maxHistoryDelay = 1;
	soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
	class ListScrollBar: ScrollBar{};
	onCanDestroy = "";
	onDestroy = "";
	onSetFocus = "";
	onKillFocus = "";
	onKeyDown = "";
	onKeyUp = "";
	onMouseButtonDown = "";
	onMouseButtonUp = "";
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
	onLBSelChanged = "";
	onLBDblClick = "";
};
class ctrlCheckbox: ctrlDefault
{
	type = 77;
	checked = 0;
	color[] = {1,1,1,0.7};
	colorFocused[] = {1,1,1,1};
	colorHover[] = {1,1,1,1};
	colorPressed[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {0,0,0,0};
	colorBackgroundFocused[] = {0,0,0,0};
	colorBackgroundHover[] = {0,0,0,0};
	colorBackgroundPressed[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	textureChecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureChecked_ca.paa";
	textureUnchecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureUnchecked_ca.paa";
	textureFocusedChecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureChecked_ca.paa";
	textureFocusedUnchecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureUnchecked_ca.paa";
	textureHoverChecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureChecked_ca.paa";
	textureHoverUnchecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureUnchecked_ca.paa";
	texturePressedChecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureChecked_ca.paa";
	texturePressedUnchecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureUnchecked_ca.paa";
	textureDisabledChecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureChecked_ca.paa";
	textureDisabledUnchecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureUnchecked_ca.paa";
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
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
	onMouseButtonClick = "";
	onMouseButtonDblClick = "";
	onMouseZChanged = "";
	onMouseMoving = "";
	onMouseHolding = "";
	onCheckedChanged = "";
};
class ctrlCheckboxToolbar: ctrlCheckbox
{
	color[] = {1,1,1,1};
	colorBackgroundHover[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
	colorBackgroundPressed[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.77])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.51])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.08])",1};
};
class ctrlCheckboxBaseline: ctrlCheckbox
{
	textureChecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\baseline_textureChecked_ca.paa";
	textureUnchecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\baseline_textureUnchecked_ca.paa";
	textureFocusedChecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\baseline_textureChecked_ca.paa";
	textureFocusedUnchecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\baseline_textureUnchecked_ca.paa";
	textureHoverChecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\baseline_textureChecked_ca.paa";
	textureHoverUnchecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\baseline_textureUnchecked_ca.paa";
	texturePressedChecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\baseline_textureChecked_ca.paa";
	texturePressedUnchecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\baseline_textureUnchecked_ca.paa";
	textureDisabledChecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\baseline_textureChecked_ca.paa";
	textureDisabledUnchecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\baseline_textureUnchecked_ca.paa";
};
class ctrlControlsGroupHighlight: ctrlControlsGroupNoScrollbars
{
	class Controls
	{
		class TL: ctrlStaticPicture
		{
			idc = 313130;
			text = "\a3\3DEN\Data\ControlsGroups\Highlight\highlight_TL_ca.paa";
			colorText[] = {0,1,1,1};
		};
		class TM: ctrlStaticPicture
		{
			idc = 313131;
			text = "\a3\3DEN\Data\ControlsGroups\Highlight\highlight_TM_ca.paa";
			colorText[] = {0,1,1,1};
		};
		class TR: ctrlStaticPicture
		{
			idc = 313132;
			text = "\a3\3DEN\Data\ControlsGroups\Highlight\highlight_TR_ca.paa";
			colorText[] = {0,1,1,1};
		};
		class ML: ctrlStaticPicture
		{
			idc = 313133;
			text = "\a3\3DEN\Data\ControlsGroups\Highlight\highlight_ML_ca.paa";
			colorText[] = {0,1,1,1};
		};
		class MR: ctrlStaticPicture
		{
			idc = 313134;
			text = "\a3\3DEN\Data\ControlsGroups\Highlight\highlight_MR_ca.paa";
			colorText[] = {0,1,1,1};
		};
		class BL: ctrlStaticPicture
		{
			idc = 313135;
			text = "\a3\3DEN\Data\ControlsGroups\Highlight\highlight_BL_ca.paa";
			colorText[] = {0,1,1,1};
		};
		class BM: ctrlStaticPicture
		{
			idc = 313136;
			text = "\a3\3DEN\Data\ControlsGroups\Highlight\highlight_BM_ca.paa";
			colorText[] = {0,1,1,1};
		};
		class BR: ctrlStaticPicture
		{
			idc = 313137;
			text = "\a3\3DEN\Data\ControlsGroups\Highlight\highlight_BR_ca.paa";
			colorText[] = {0,1,1,1};
		};
	};
};
class ctrlControlsGroupTutorial: ctrlControlsGroupNoScrollbars
{
	w = "(	80 + 1) * (pixelW * pixelGrid * 	0.50)";
	h = 0;
	class Controls
	{
		class Shadow: ctrlStatic
		{
			idc = 323231;
			x = "3 * pixelW";
			y = "3 * pixelH";
			w = "80 * (pixelW * pixelGrid * 	0.50)";
			h = "40 * (pixelH * pixelGrid * 	0.50)";
			colorBackground[] = {0,0,0,0.75};
		};
		class Background: ctrlStatic
		{
			idc = 323232;
			w = "80 * (pixelW * pixelGrid * 	0.50)";
			h = "40 * (pixelH * pixelGrid * 	0.50)";
			colorBackground[] = {1,0.9,0.4,1};
		};
		class Text: ctrlStructuredText
		{
			idc = 323233;
			x = "3 * (pixelW * pixelGrid * 	0.50)";
			y = "(	3 + 1) * (pixelH * pixelGrid * 	0.50)";
			w = "(	80 - 2 * 	3) * (pixelW * pixelGrid * 	0.50)";
			h = "20 * (pixelH * pixelGrid * 	0.50)";
			shadow = 0;
			class Attributes: Attributes
			{
				color = "#000000";
				colorLink = "#0000ff";
			};
		};
		class Page: ctrlStatic
		{
			idc = 323234;
			style = 2;
			y = "(40 - 	6 - 1) * (pixelH * pixelGrid * 	0.50)";
			w = "80 * (pixelW * pixelGrid * 	0.50)";
			h = "6 * (pixelH * pixelGrid * 	0.50)";
			colorText[] = {0,0,0,0.2};
			shadow = 0;
		};
		class ButtonClose: ctrlActivePicture
		{
			idc = 323235;
			x = "(	80 - 	3 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "(pixelH * pixelGrid * 	0.50)";
			w = "3 * (pixelW * pixelGrid * 	0.50)";
			h = "3 * (pixelH * pixelGrid * 	0.50)";
			color[] = {0,0,0,1};
			text = "\a3\3DEN\Data\ControlsGroups\Tutorial\close_ca.paa";
		};
		class ButtonBack: ctrlActivePicture
		{
			idc = 323236;
			x = "1 * (pixelW * pixelGrid * 	0.50)";
			y = "(40 - 	6 - 1) * (pixelH * pixelGrid * 	0.50)";
			w = "6 * (pixelW * pixelGrid * 	0.50)";
			h = "6 * (pixelH * pixelGrid * 	0.50)";
			color[] = {0,0,0,0.1};
			text = "\a3\3DEN\Data\ControlsGroups\Tutorial\back_ca.paa";
		};
		class ButtonNext: ButtonBack
		{
			idc = 323237;
			x = "(	80 - 	6 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "(40 - 	6 - 1) * (pixelH * pixelGrid * 	0.50)";
			w = "6 * (pixelW * pixelGrid * 	0.50)";
			h = "6 * (pixelH * pixelGrid * 	0.50)";
			color[] = {0,0,0,1};
			text = "\a3\3DEN\Data\ControlsGroups\Tutorial\next_ca.paa";
		};
		class ButtonExit: ButtonBack
		{
			idc = 323238;
			x = "(	80 - 	6 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "(40 - 	6 - 1) * (pixelH * pixelGrid * 	0.50)";
			w = "6 * (pixelW * pixelGrid * 	0.50)";
			h = "6 * (pixelH * pixelGrid * 	0.50)";
			color[] = {0,0,0,1};
			text = "\a3\3DEN\Data\ControlsGroups\Tutorial\exit_ca.paa";
		};
	};
};
class Display
{
	idd = -1;
	enableSimulation = 0;
	enableDisplay = 1;
	closeOnMissionEnd = 0;
	class ControlsBackground{};
	class Controls{};
	class Objects{};
};
class DisplaySimulated: Display
{
	enableSimulation = 1;
};
class Display3DEN
{
	idd = 313;
	enableSimulation = 1;
	enableDisplay = 1;
	scriptName = "Display3DEN";
	scriptPath = "3DENDisplays";
	onLoad = "[""onLoad"",_this,""Display3DEN"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DEN"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class ContextMenu: ctrlMenu
	{
		idc = 1100;
		colorBackground[] = {0.1,0.1,0.1,1};
		class Items
		{
			items[] = {"ConnectParent","SeparatorSelected","MoveCamera","PlayFromHere","PlayAsEntity","Separator","Select","Edit","Transform","Grid","Log","ChangeSeatParent","SeparatorEntity","CustomComposition","FindCreate","FindConfig","SeparatorSelected","SeparatorNotSelected","CreateComment","Arsenal","ArsenalReset","Garage","GarageReset","SeparatorArsenal","Attributes"};
			class Separator
			{
				value = 0;
			};
			class SeparatorObject
			{
				value = 0;
				conditionShow = "hoverObject";
			};
			class SeparatorNotSelected
			{
				value = 0;
				conditionShow = "(1 - (selected))";
			};
			class SeparatorSelected
			{
				value = 0;
				conditionShow = "selected";
			};
			class SeparatorArsenal
			{
				value = 0;
				conditionShow = "(hoverObjectBrain 	* (1 - (hoverObjectVehicle))) 	+ (hoverObjectVehicle 	* IsInternal)";
			};
			class SeparatorEntity
			{
				value = 0;
				conditionShow = "hoverObject 	+ hoverGroup 	+ hoverTrigger 	+ hoverWaypoint 	+ hoverLogic 	+ hoverMarker";
			};
			class ConnectParent
			{
				items[] = {"Connect","ConnectOther"};
				text = "$STR_3DEN_Display3DEN_EntityMenu_ConnectParent_text";
				value = 0;
			};
			class Connect
			{
				data = "Connect";
			};
			class ConnectOther
			{
				data = "ConnectOther";
			};
			class AttachTo
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_AttachTo_text";
				data = "AttachTo";
				value = 0;
				conditionShow = "hoverObject 	* (1 - (hoverObjectAttached))";
				enable = 0;
			};
			class Detach
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_Detach_text";
				data = "Detach";
				value = 0;
				conditionShow = "hoverObject 	* hoverObjectAttached";
				enable = 0;
			};
			class MoveCamera
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_MoveCamera_text";
				value = 0;
				action = "['movecamera'] call bis_fnc_3DENEntityMenu;";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\moveCamera_ca.paa";
			};
			class PlayFromHere
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_PlayFromHere_text";
				data = "PlayFromHere";
				value = 0;
				conditionShow = "(1 - (hoverObjectBrain)) 	* (1 - (isMultiplayer))";
				action = "['PlayFromHere'] call bis_fnc_3DENEntityMenu;";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\playFromHere_ca.paa";
			};
			class PlayAsEntity
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_PlayAsEntity_text";
				data = "PlayAsEntity";
				value = 0;
				conditionShow = "hoverObjectBrain 	* (1 - (isMultiplayer)) 	* (1 - (HoverObjectUav))";
				action = "['PlayAsEntity'] call bis_fnc_3DENEntityMenu;";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\playFromHere_ca.paa";
			};
			class Select
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_Select_text";
				value = 0;
				items[] = {"SelectView","SelectLayerChildren","SelectLayerAllDescendants","SeparatorSelected","SelectMatchingClassSelected","SelectMatchingClassView","SeparatorSelected","SelectMatchingTypeSelected","SelectMatchingTypeView"};
			};
			class SelectView
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_SelectView_text";
				data = "SelectAllOnScreen";
				value = 0;
				conditionShow = "(1 - (isEditList))";
				shortcuts[] = {"512 + 0x1E"};
			};
			class SelectLayerChildren
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_SelectLayerChildren_text";
				data = "SelectLayerChildren";
				value = 0;
				conditionShow = "hoverLayer";
			};
			class SelectLayerAllDescendants
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_SelectLayerAllDescendants_text";
				data = "SelectLayerAllDescendants";
				value = 0;
				conditionShow = "hoverLayer";
			};
			class SelectMatchingClassSelected
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_SelectMatchingClassSelected_text";
				data = "SelectMatchingClassSelected";
				value = 0;
				conditionShow = "selected";
			};
			class SelectMatchingClassView
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_SelectMatchingClassView_text";
				data = "SelectMatchingClassView";
				value = 0;
				conditionShow = "selected";
			};
			class SelectMatchingTypeSelected
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_SelectMatchingTypeSelected_text";
				data = "SelectMatchingTypeSelected";
				value = 0;
				conditionShow = "selected";
			};
			class SelectMatchingTypeView
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_SelectMatchingTypeView_text";
				data = "SelectMatchingTypeView";
				value = 0;
				conditionShow = "selected";
			};
			class Edit
			{
				text = "$STR_3DEN_Display3DEN_MenUBar_Edit_text";
				value = 0;
				items[] = {"Cut","Copy","Paste","PasteOrig","Delete"};
			};
			class Cut
			{
				text = "$STR_3DEN_Display3DEN_MenuBar_EntityCut_text";
				data = "CutUnit";
				value = 0;
				conditionEnable = "selected";
				shortcuts[] = {"512 + 0x2D"};
			};
			class Copy
			{
				text = "$STR_3DEN_Display3DEN_MenuBar_EntityCopy_text";
				data = "CopyUnit";
				value = 0;
				conditionEnable = "selected";
				shortcuts[] = {"512 + 0x2E"};
			};
			class Paste
			{
				text = "$STR_3DEN_Display3DEN_MenuBar_EntityPaste_text";
				data = "PasteItems";
				value = 0;
				shortcuts[] = {"512 + 0x2F"};
			};
			class PasteOrig
			{
				text = "$STR_3DEN_Display3DEN_MenuBar_EntityPasteOrig_text";
				data = "PasteUnitOrig";
				value = 0;
				shortcuts[] = {"512 + 	1024 + 0x2F"};
			};
			class Delete
			{
				text = "$STR_3DEN_Delete";
				data = "DeleteItems";
				value = 0;
				conditionEnable = "selected";
				shortcuts[] = {211};
			};
			class CopyAttributes
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_CopyAttributes_text";
				data = "CopyAttributes";
				value = 0;
				conditionEnable = "selected";
				enable = 0;
			};
			class PasteAttributes
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_PasteAttributes_text";
				data = "PasteAttributes";
				value = 0;
				conditionEnable = "selected";
				enable = 0;
			};
			class Transform
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_Transform_text";
				value = 0;
				conditionShow = "hoverObject 	+ hoverGroup";
				items[] = {"SelectLeader","MoveToFormation","MoveFlying","MoveSurface","SetATL","SetASL"};
			};
			class SelectLeader
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_SelectLeader_text";
				data = "SelectLeader";
				value = 0;
				conditionShow = "hoverObjectBrain";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\selectLeader_ca.paa";
			};
			class MoveToFormation
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_MoveToFormation_text";
				data = "ForceToFormation";
				value = 0;
				conditionShow = "hoverObjectBrain 	+ hoverGroup";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\moveToFormation_ca.paa";
			};
			class MoveFlying
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_MoveFlying_text";
				data = "SetFlyingHeight";
				value = 0;
				conditionShow = "hoverObjectCanFly 	* (1 - (hoverObjectFlying))";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\moveFlying_ca.paa";
			};
			class MoveSurface
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_MoveSurface_text";
				data = "SnapToSurface";
				value = 0;
				conditionShow = "hoverObject 	+ hoverTrigger 	+ hoverWaypoint 	+ hoverLogic";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\moveSurface_ca.paa";
			};
			class SetATL
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_SetATL_text";
				data = "LevelWithSurface";
				value = 0;
				conditionShow = "hoverObject";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\setATL_ca.paa";
			};
			class SetASL
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_SetASL_text";
				data = "LevelOutObjects";
				value = 0;
				conditionShow = "hoverObject";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\setASL_ca.paa";
			};
			class Grid
			{
				text = "$STR_3DEN_Display3DEN_MenuBar_Grid_text";
				value = 0;
				conditionShow = "hoverObject";
				items[] = {"GridTranslationX","GridTranslationY","GridTranslationZ"};
			};
			class GridCenter
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_GridCenter_text";
				data = "GridCenter";
				value = 0;
				enable = 0;
			};
			class GridTranslationX
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_GridTranslationX_text";
				data = "GridTranslationX";
				value = 0;
				conditionShow = "hoverObject";
				action = "['Grid','translation',0] spawn bis_fnc_3DENEntityMenu;";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\gridTranslationX_ca.paa";
			};
			class GridTranslationY
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_GridTranslationY_text";
				data = "GridTranslationY";
				value = 0;
				conditionShow = "hoverObject";
				action = "['Grid','translation',1] spawn bis_fnc_3DENEntityMenu;";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\gridTranslationY_ca.paa";
			};
			class GridTranslationZ
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_GridTranslationZ_text";
				data = "GridTranslationZ";
				value = 0;
				conditionShow = "hoverObject";
				action = "['Grid','translation',2] spawn bis_fnc_3DENEntityMenu;";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\gridTranslationZ_ca.paa";
			};
			class ChangeSeatParent
			{
				items[] = {"ChangeSeat"};
				text = "$STR_3DEN_Display3DEN_EntityMenu_ChangeSeat_text";
				value = 0;
			};
			class ChangeSeat
			{
				data = "ChangeSeat";
			};
			class Log
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_Log_text";
				value = 0;
				items[] = {"LogPosition","LogClasses"};
			};
			class LogPosition
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_LogPosition_text";
				data = "LogPosition";
				value = 0;
				action = "['logPosition'] call bis_fnc_3DENEntityMenu;";
			};
			class LogClasses
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_LogClasses_text";
				data = "LogClasses";
				value = 0;
				conditionShow = "selectedObject 	+ selectedWaypoint 	+ selectedLogic 	+ selectedMarker";
				action = "['logClasses'] call bis_fnc_3DENEntityMenu;";
			};
			class CustomComposition
			{
				text = "$STR_3den_display3den_entitymenu_customcomposition_text";
				data = "CustomComposition";
				value = 0;
				action = "do3denaction 'createcustomcomposition';";
				conditionShow = "hoverObject 	+ hoverGroup 	+ 	+ hoverTrigger 	+ hoverWaypoint 	+ hoverLogic 	+ hoverMarker 	+ hoverLayer";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\customcomposition_add_ca.paa";
				opensNewWindow = 1;
			};
			class FindCreate
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_FindCreate_text";
				data = "FindCreate";
				value = 0;
				conditionShow = "hoverObject 	+ hoverWaypoint 	+ hoverLogic 	+ hoverMarker";
				action = "['findcreate'] spawn bis_fnc_3DENEntityMenu;";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\findCreate_ca.paa";
				opensNewWindow = 1;
			};
			class FindConfig
			{
				text = "$STR_3DEN_Display3DEN_EntityMenu_FindConfig_text";
				data = "FindConfig";
				value = 0;
				conditionShow = "hoverObject 	+ hoverWaypoint 	+ hoverLogic 	+ hoverMarker";
				action = "['findconfig'] call bis_fnc_3DENEntityMenu;";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\findConfig_ca.paa";
				opensNewWindow = 1;
			};
			class CreateComment
			{
				text = "$STR_3den_display3den_entitymenu_createcomment_text";
				data = "CreateAndChangeComment";
				value = 0;
				conditionShow = "(1 - (selected))";
				picture = "\a3\3DEN\Data\Cfg3DEN\Comment\texture_ca.paa";
			};
			class Arsenal
			{
				text = "$STR_3den_display3den_entitymenu_arsenal_text";
				data = "Arsenal";
				value = 0;
				action = "['arsenal'] call bis_fnc_3DENEntityMenu;";
				conditionShow = "hoverObjectBrain 	* (1 - (hoverObjectVehicle))";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\arsenal_ca.paa";
				opensNewWindow = 1;
			};
			class ArsenalReset
			{
				text = "$STR_3den_display3den_entitymenu_arsenalreset_text";
				data = "ArsenalReset";
				value = 0;
				action = "['arsenalReset'] call bis_fnc_3DENEntityMenu;";
				conditionShow = "hoverObjectBrain 	* (1 - (hoverObjectVehicle))";
			};
			class Garage
			{
				text = "$STR_3den_display3den_entitymenu_garage_text";
				data = "Garage";
				value = 0;
				action = "['garage'] call bis_fnc_3DENEntityMenu;";
				conditionShow = "hoverObjectVehicle";
				picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\garage_ca.paa";
				opensNewWindow = 1;
			};
			class GarageReset
			{
				text = "$STR_3den_display3den_entitymenu_garagereset_text";
				data = "GarageReset";
				value = 0;
				action = "['garageReset'] call bis_fnc_3DENEntityMenu;";
				conditionShow = "hoverObjectVehicle";
			};
			class Attributes
			{
				text = "$STR_3DEN_Display3DEN_MenuBar_Attributes_text";
				data = "OpenAttributes";
				value = 0;
				conditionShow = "selected";
				opensNewWindow = 1;
			};
			class Default
			{
				text = "$STR_3DEN_Display3DEN_MenuBar_Default_text";
				data = "Empty";
				enable = 0;
			};
		};
	};
	class ControlsBackground
	{
		class Map: ctrlMap
		{
			idc = 51;
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
			class CustomMark
			{
				icon = "#(argb,8,8,3)color(0,0,0,0)";
				color[] = {0,0,0,0};
				size = 0;
				importance = 0;
				coefMin = 0;
				coefMax = 0;
			};
		};
		class MouseArea: ctrlStatic
		{
			idc = 52;
			style = 16;
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
		};
		class ScrollBlockTop: ctrlStatic
		{
			idc = 46;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "(		5 + 	(	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
		};
		class ScrollBlockLeft: ScrollBlockTop
		{
			idc = 47;
			x = "safezoneX";
			y = "safezoneY + (		5 + 	(	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			w = "60 * (pixelW * pixelGrid * 	0.50)";
			h = "safezoneH - (		5 + 	(	5 + 2) + 		4) * (pixelH * pixelGrid * 	0.50)";
		};
		class ScrollBlockRight: ScrollBlockTop
		{
			idc = 48;
			x = "safezoneX + safezoneW - 	60 * (pixelW * pixelGrid * 	0.50)";
			y = "safezoneY + (	5 + 	(	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			w = "60 * (pixelW * pixelGrid * 	0.50)";
			h = "safezoneH - (		5 + 	(	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
		};
		class ScrollBlockBottom: ScrollBlockTop
		{
			idc = 49;
			x = "safezoneX";
			y = "safezoneY + safezoneH - 		4 * (pixelH * pixelGrid * 	0.50)";
			w = "(safezoneW - 	60 * (pixelW * pixelGrid * 	0.50))";
			h = "(		4 + 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class NavigationWidget: ctrlStatic
		{
			idc = 87;
			x = "safezoneX + (	60 + 		15 * 0.2) * (pixelW * pixelGrid * 	0.50)";
			y = "safezoneY + safezoneH - (		4 + 		15 * 1.2) * (pixelH * pixelGrid * 	0.50)";
			w = "15 * (pixelW * pixelGrid * 	0.50)";
			h = "15 * (pixelH * pixelGrid * 	0.50)";
			widgetLineWidth = 10;
			sizeEx = "20 * pixelW";
		};
		class Black: ctrlStatic
		{
			idc = 998;
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
			colorBackground[] = {0,0,0,1};
		};
	};
	class Controls
	{
		class ButtonExit: ctrlButtonPicture
		{
			idc = 2;
			x = "safezoneX + safezoneW - (	5 * (pixelW * pixelGrid * 	0.50))";
			y = "safezoneY";
			w = "5 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			colorBackground[] = {0.1,0.1,0.1,1};
			text = "\a3\3DEN\Data\Displays\Display3DEN\search_end_ca.paa";
			onButtonClick = "do3DENAction '3DENExit';";
			offsetPressedX = 0;
			offsetPressedY = 0;
		};
		class MissionName: ctrlStatic
		{
			idc = 76;
			style = 1;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW - (	5 * (pixelW * pixelGrid * 	0.50))";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			colorBackground[] = {0.1,0.1,0.1,1};
			onLoad = "(_this select 0) ctrlenable false;";
		};
		class MenuStrip: ctrlMenuStrip
		{
			idc = 120;
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW - 	5 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			colorStripBackground[] = {0,0,0,0};
			colorBackground[] = {0.1,0.1,0.1,1};
			class Items
			{
				items[] = {"File","Edit","View","Attributes","Tools","Options","Preview","Help"};
				class File
				{
					text = "$STR_3DEN_Scenario";
					items[] = {"MissionNew","MissionOpen","MissionSave","MissionSaveAs","Separator","MissionPublishSteam","MissionExport","MissionMerge","Separator","MissionAddons","MissionFolder","LogFolder","Separator","Exit"};
					data = "test1";
					value = 1;
				};
				class MissionNew
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_MissionNew_text";
					data = "MissionNew";
					shortcuts[] = {"512 + 0x31"};
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\new_ca.paa";
					opensNewWindow = 1;
				};
				class MissionOpen
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_MissionOpen_text";
					data = "MissionLoad";
					shortcuts[] = {"512 + 0x18"};
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\open_ca.paa";
					opensNewWindow = 1;
				};
				class MissionSave
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_MissionSave_text";
					data = "MissionSave";
					shortcuts[] = {"512 + 0x1F"};
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
				};
				class MissionSaveAs
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_MissionSaveAs_text";
					data = "MissionSaveAs";
					shortcuts[] = {"512 + 	1024 + 0x1F"};
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\saveas_ca.paa";
					opensNewWindow = 1;
				};
				class MissionPublishSteam
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_MissionPublishSteam_text";
					data = "MissionPublishSteam";
					enable = 1;
					action = "do3DENAction 'OpenSteamPublishDialog';";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\steam_ca.paa";
				};
				class MissionExport
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_MissionExport_text";
					items[] = {"MissionExportSP","MissionExportMP","MissionTerrainBuilder"};
				};
				class MissionExportSP
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_MissionExportSP_text";
					data = "MissionExportSP";
				};
				class MissionExportMP
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_MissionExportMP_text";
					data = "MissionExportMP";
				};
				class MissionTerrainBuilder
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_MissionTerrainBuilder_text";
					data = "MissionExportTerrainBuilder";
					action = "[] spawn bis_fnc_3DENExportTerrainBuilder;";
				};
				class MissionMerge
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_MissionMerge_text";
					data = "MissionMerge";
					shortcuts[] = {"512 + 0x32"};
				};
				class MissionFolder
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_MissionFolder_text";
					data = "FolderMission";
				};
				class MissionAddons
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_MissingAddons_text";
					data = "OpenRequiredAddons";
				};
				class LogFolder
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_LogFolder_text";
					data = "FolderLog";
				};
				class Exit
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_Exit_text";
					data = "Exit3DEN";
				};
				class Edit
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_Edit_text";
					items[] = {"Undo","Redo","Separator","EntitySelectScreen","Separator","Widget","Grid","Vertical","SurfaceSnapToggle","WaypointSnapToggle","Separator","Space","Mode"};
				};
				class Undo
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_Undo_text";
					data = "Undo";
					shortcuts[] = {"512 + 0x2C"};
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\undo_ca.paa";
				};
				class Redo
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_Redo_text";
					data = "Redo";
					shortcuts[] = {"512 + 0x15","512 + 	1024 + 0x2C"};
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\redo_ca.paa";
				};
				class EntitySelectScreen
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_EntitySelectScreen_text";
					data = "SelectAllOnScreen";
					shortcuts[] = {"512 + 0x1E"};
				};
				class EntityCut
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_EntityCut_text";
					data = "CutUnit";
					shortcuts[] = {"512 + 0x2D"};
				};
				class EntityCopy
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_EntityCopy_text";
					data = "CopyUnit";
					shortcuts[] = {"512 + 0x2E"};
				};
				class EntityPaste
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_EntityPaste_text";
					data = "PasteUnit";
					shortcuts[] = {"512 + 0x2F"};
				};
				class EntityPasteOrig
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_EntityPasteOrig_text";
					data = "PasteUnitOrig";
					shortcuts[] = {"512 + 	1024 + 0x2F"};
				};
				class EntitySimulation
				{
					xtext = "$STR_3DEN_Display3DEN_MenuBar_EntitySimulation_text";
					data = "SimulateUnit";
					shortcuts[] = {"512 + 0x19"};
					enable = 0;
				};
				class Widget
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_Widget_text";
					items[] = {"WidgetToggle","WidgetNone","WidgetTranslation","WidgetRotation","WidgetScaling","WidgetArea"};
				};
				class WidgetToggle
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_WidgetToggle_text";
					data = "WidgetToggle";
					shortcuts[] = {57};
				};
				class WidgetNone
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_WidgetNone_text";
					data = "WidgetNone";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_off_ca.paa";
					shortcuts[] = {2};
				};
				class WidgetTranslation
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_WidgetTranslation_text";
					data = "WidgetTranslation";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_off_ca.paa";
					shortcuts[] = {3};
				};
				class WidgetRotation
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_WidgetRotation_text";
					data = "WidgetRotation";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_off_ca.paa";
					shortcuts[] = {4};
				};
				class WidgetScaling
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_WidgetScaling_text";
					data = "WidgetScale";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_off_ca.paa";
					shortcuts[] = {5};
				};
				class WidgetArea
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_WidgetArea_text";
					data = "WidgetArea";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_off_ca.paa";
					shortcuts[] = {6};
				};
				class WidgetSpace
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_WidgetSpace_text";
					data = "WidgetSpace";
					shortcuts[] = {34};
					enable = 0;
				};
				class WidgetSpaceWorld
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_WidgetSpaceWorld_text";
					data = "WidgetSpaceWorld";
					enable = 0;
				};
				class WidgetSpaceLocal
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_WidgetSelectedEntity_text";
					data = "WidgetSpaceLocal";
					enable = 0;
				};
				class WidgetPosition
				{
					xtext = "$STR_3DEN_Display3DEN_MenuBar_WidgetPosition_text";
					data = "WidgetPosition";
					shortcuts[] = {34};
					enable = 0;
				};
				class WidgetPositionEntity
				{
					xtext = "$STR_3DEN_Display3DEN_MenuBar_WidgetSelectedEntity_text";
					data = "WidgetPositionEntity";
					enable = 0;
				};
				class WidgetPositionMean
				{
					xtext = "$STR_3DEN_Display3DEN_MenuBar_WidgetPositionMean_text";
					data = "WidgetPositionMean";
					enable = 0;
				};
				class Grid
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_Grid_text";
					items[] = {"GridTranslationToggle","GridRotationToggle","GridScalingToggle","GridDecrease","GridIncrease"};
				};
				class GridTranslationToggle
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_GridTranslationToggle_text";
					data = "MoveGridToggle";
					shortcuts[] = {39};
					type = "CheckBox";
					default = "false";
				};
				class GridRotationToggle
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_GridRotationToggle_text";
					data = "RotateGridToggle";
					type = "CheckBox";
					default = "false";
				};
				class GridScalingToggle
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_GridScalingToggle_text";
					data = "ScaleGridToggle";
					type = "CheckBox";
					default = "false";
				};
				class GridDecrease
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_GridDecrease_text";
					data = "GridDecrease";
					shortcuts[] = {26};
					action = "['decrease'] call bis_fnc_3DENGrid;";
				};
				class GridIncrease
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_GridIncrease_text";
					data = "GridIncrease";
					shortcuts[] = {27};
					action = "['increase'] call bis_fnc_3DENGrid;";
				};
				class Vertical
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_Vertical_text";
					items[] = {"VerticalToggle","VerticalATL","VerticalASL"};
				};
				class VerticalToggle
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_VerticalToggle_text";
					data = "VerticalToggle";
					shortcuts[] = {40};
				};
				class VerticalATL
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_VerticalATL_text";
					data = "VerticalATL";
				};
				class VerticalASL
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_VerticalASL_text";
					data = "VerticalASL";
				};
				class SurfaceSnapToggle
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_SurfaceSnapToggle_text";
					data = "SurfaceSnapToggle";
					type = "CheckBox";
					default = "true";
					shortcuts[] = {43};
				};
				class WaypointSnapToggle
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_WaypointSnapToggle_text";
					data = "WaypointSnapToggle";
					type = "CheckBox";
					default = "true";
					shortcuts[] = {53};
				};
				class Space
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_Space_text";
					items[] = {"SpaceMission","SpaceIntro","SpaceOutroWin","SpaceOutroLose"};
				};
				class SpaceMission
				{
					text = "$STR_3DEN_Scenario";
					data = "MissionPartMission";
				};
				class SpaceIntro
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_SpaceIntro_text";
					data = "MissionPartIntro";
				};
				class SpaceOutroWin
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_SpaceOutroWin_text";
					data = "MissionPartOutroWin";
				};
				class SpaceOutroLose
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_SpaceOutroLose_text";
					data = "MissionPartOutroLoose";
				};
				class Mode
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_Mode_text";
					items[] = {"ModeObject","ModeGroup","ModeTrigger","ModeWaypoint","ModeLogic","ModeMarker","ModeFavorite","SubmodeToggle"};
				};
				class ModeObject
				{
					text = "$STR_3DEN_Object_textPlural";
					data = "SelectObjectMode";
					shortcuts[] = {59};
				};
				class ModeGroup
				{
					text = "$STR_3DEN_Group_textPlural";
					data = "SelectGroupMode";
					shortcuts[] = {60};
				};
				class ModeTrigger
				{
					text = "$STR_3DEN_Trigger_textPlural";
					data = "SelectTriggerMode";
					shortcuts[] = {61};
				};
				class ModeWaypoint
				{
					text = "$STR_3DEN_Waypoint_textPlural";
					data = "SelectWaypointMode";
					shortcuts[] = {62};
				};
				class ModeLogic
				{
					text = "$STR_3DEN_Logic_textPlural";
					data = "SelectModuleMode";
					shortcuts[] = {63};
				};
				class ModeMarker
				{
					text = "$STR_3DEN_Marker_textPlural";
					data = "SelectMarkerMode";
					shortcuts[] = {64};
				};
				class ModeFavorite
				{
					text = "$STR_3DEN_Favorite_textPlural";
					data = "SelectFavoritesMode";
					shortcuts[] = {65};
					enable = 0;
				};
				class SubmodeToggle
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_SubmodeToggle_text";
					data = "SubmodeToggle";
					shortcuts[] = {15};
				};
				class View
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_View_text";
					items[] = {"ViewRandom","ViewSelected","ViewPlayer","Separator","Map","MapTextures","Separator","VisionMode","ToggleFlashlight","ToggleLocations","ToggleVegetation","Separator","Search","Interface"};
				};
				class ViewRandom
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_ViewRandom_text";
					data = "CenterCameraOnRandom";
					shortcuts[] = {"512 + 0x13"};
					action = "'random' call bis_fnc_3DENCamera;";
				};
				class ViewSelected
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_ViewSelected_text";
					data = "CenterCameraOnSelected";
					action = "'selected' call bis_fnc_3DENCamera;";
					shortcuts[] = {33};
				};
				class ViewPlayer
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_ViewPlayer_text";
					data = "CenterCameraOnPlayer";
					shortcuts[] = {199};
				};
				class Map
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_Map_text";
					data = "ToggleMap";
					type = "CheckBox";
					default = "false";
					shortcuts[] = {50};
				};
				class MapTextures
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_MapTextures_text";
					data = "ToggleMapTextures";
					shortcuts[] = {"512 + 0x14"};
					type = "CheckBox";
					default = "false";
				};
				class MapIDs
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_MapIDs_text";
					data = "MapIDs";
					enable = 0;
				};
				class ToggleLocations
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_ToggleLocations_text";
					data = "ToggleLocations";
					action = "[] call bis_fnc_3DENDrawLocations;";
				};
				class ToggleFlashlight
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_ToggleFlashlight_text";
					data = "ToggleFlashlight";
					action = "[] call bis_fnc_3DENFlashlight;";
					shortcuts[] = {38};
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_off_ca.paa";
				};
				class ToggleVegetation
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_ToggleVegetation_text";
					data = "ToggleVegetation";
					type = "CheckBox";
					default = "false";
					shortcuts[] = {"512 + 0x22"};
				};
				class VisionMode
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_VisionMode_text";
					data = "ViewVisionMode";
					items[] = {"VisionModeToggle","VisionModeNormal","VisionModeNVG","VisionModeTI"};
				};
				class VisionModeToggle
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_VisionModeToggle_text";
					data = "VisionModeToggle";
					shortcuts[] = {49};
					action = "-1 call BIS_fnc_3DENVisionMode;";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vision_normal_ca.paa";
				};
				class VisionModeNormal
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_VisionModeNormal_text";
					data = "VisionModeNormal";
					action = "0 call BIS_fnc_3DENVisionMode;";
				};
				class VisionModeNVG
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_VisionModeNVG_text";
					data = "VisionModeNVG";
					action = "1 call BIS_fnc_3DENVisionMode;";
				};
				class VisionModeTI
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_VisionModeTI_text";
					data = "VisionModeTI";
					action = "2 call BIS_fnc_3DENVisionMode;";
				};
				class Search
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_Search_text";
					data = "Search";
					items[] = {"SearchCreate","SearchEdit"};
				};
				class SearchCreate
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_SearchCreate_text";
					data = "SearchCreate";
					shortcuts[] = {"512 + 0x21"};
				};
				class SearchEdit
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_SearchEdit_text";
					data = "SearchEdit";
					shortcuts[] = {"512 + 	1024 + 0x21"};
				};
				class Interface
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_Interface_text";
					data = "Interface";
					items[] = {"InterfaceToggle","InterfacePanelLeft","InterfacePanelRight","InterfaceControlsHint","InterfaceNavigationWidget"};
				};
				class InterfaceToggle
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_InterfaceToggle_text";
					data = "InterfaceToggle";
					shortcuts[] = {14};
					action = "with uinamespace do {'showInterface' call BIS_fnc_3DENInterface;};";
				};
				class InterfacePanelLeft
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_InterfacePanelLeft_text";
					data = "InterfacePanelLeft";
					shortcuts[] = {18};
					action = "with uinamespace do {'showPanelLeft' call BIS_fnc_3DENInterface;};";
				};
				class InterfacePanelRight
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_InterfacePanelRight_text";
					data = "InterfacePanelRight";
					shortcuts[] = {19};
					action = "with uinamespace do {'showPanelRight' call BIS_fnc_3DENInterface;};";
				};
				class InterfaceControlsHint
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_InterfaceControlsHint_text";
					data = "InterfaceControlsHint";
					action = "'toggle' call BIS_fnc_3DENControlsHint;";
				};
				class InterfaceNavigationWidget
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_InterfaceNavigationWidget_text";
					data = "InterfaceNavigationWidget";
					action = "with uinamespace do {'navigationWidget' call BIS_fnc_3DENInterface;};";
				};
				class Attributes
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_Attributes_text";
					items[] = {"AttributesScenario","AttributesEnvironment","AttributesMultiplayer","AttributesGarbageCollection","Separator"};
				};
				class AttributesScenario
				{
					text = "$STR_3DEN_Scenario_textSingular";
					data = "AttributesScenario";
					action = "edit3DENMissionAttributes 'Scenario';";
					opensNewWindow = 1;
				};
				class AttributesMultiplayer
				{
					text = "$STR_3DEN_Multiplayer_textSingular";
					data = "AttributesMultiplayer";
					action = "edit3DENMissionAttributes 'Multiplayer';";
					opensNewWindow = 1;
				};
				class AttributesEnvironment
				{
					text = "$STR_3DEN_Environment_textSingular";
					data = "AttributesEnvironment";
					shortcuts[] = {"512 + 0x17"};
					action = "edit3DENMissionAttributes 'Intel';";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\intel_ca.paa";
					opensNewWindow = 1;
				};
				class AttributesGarbageCollection
				{
					text = "$STR_3DEN_Performance_textSingular";
					data = "AttributesGarbageCollection";
					action = "edit3DENMissionAttributes 'GarbageCollection';";
					opensNewWindow = 1;
				};
				class Tools
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_Tools_text";
					items[] = {"DebugConsole","FunctionsViewer","ConfigViewer","AnimationViewer","SplendidCamera","FieldManual","Separator"};
				};
				class DebugConsole
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_DebugConsole_text";
					data = "DebugConsole";
					shortcuts[] = {41};
					action = "(ctrlparent (_this select 0)) createdisplay 'RscDisplayDebugPublic';";
					enable = 1;
					opensNewWindow = 1;
				};
				class FunctionsViewer
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_FunctionsViewer_text";
					data = "FunctionsViewer";
					action = "[ctrlparent (_this select 0)] call (uinamespace getvariable 'bis_fnc_help');";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\functions_ca.paa";
					opensNewWindow = 1;
				};
				class ConfigViewer
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_ConfigViewer_text";
					data = "ConfigViewer";
					action = "[ctrlparent (_this select 0)] call (uinamespace getvariable 'bis_fnc_configviewer');";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\EntityMenu\findConfig_ca.paa";
					opensNewWindow = 1;
				};
				class AnimationViewer
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_AnimationViewer_text";
					data = "AnimationViewer";
					action = "[] call (uinamespace getvariable 'bis_fnc_animviewer');";
					opensNewWindow = 1;
				};
				class SplendidCamera
				{
					text = "$STR_3DEN_Camera_textSingular";
					data = "SplendidCamera";
					action = "[] call (uinamespace getvariable 'bis_fnc_camera');";
					opensNewWindow = 1;
				};
				class FieldManual
				{
					text = "$STR_A3_RscDisplayFieldManual_Title";
					data = "FieldManual";
					action = "(ctrlparent (_this select 0)) createdisplay 'RscDisplayFieldManual';";
					opensNewWindow = 1;
				};
				class CommunityTools
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_CommunityTools_text";
					data = "CommunityTools";
					enable = 1;
					items[] = {};
				};
				class Preview
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_Preview_text";
					items[] = {"MissionPreviewSP","MissionPreviewSPBriefing","MissionPreviewCamera","MissionPreviewSpectator","Separator","MissionPreviewMP"};
				};
				class MissionPreviewSP
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_MissionPreviewSP_text";
					data = "MissionPreview";
					shortcuts[] = {28,156};
				};
				class MissionPreviewSPBriefing
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_MissionPreviewSPBriefing_text";
					data = "MissionPreviewBriefing";
					shortcuts[] = {"1024 + 0x1C","1024 + 0x9C"};
				};
				class MissionPreviewCamera
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_MissionPreviewCamera_text";
					data = "MissionPreviewCamera";
					shortcuts[] = {"512 + 	1024 + 0x1C","512 + 	1024 + 0x9C"};
					action = "{'MissionPreviewCustom' call bis_fnc_3DENMissionPreview;} call bis_fnc_3DENMissionPreview;";
				};
				class MissionPreviewSpectator
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_MissionPreviewSpectator_text";
					data = "MissionPreviewSpectator";
					action = "{'MissionPreviewSpectator' call bis_fnc_3DENMissionPreview;} call bis_fnc_3DENMissionPreview;";
				};
				class MissionPreviewMP
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_MissionPreviewMP_text";
					data = "MissionPreviewMP";
				};
				class Options
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_Options_text";
					items[] = {"OptionsEditor","Separator","OptionsVideo","OptionsAudio","OptionsGame","OptionsControls"};
				};
				class OptionsVideo
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_OptionsVideo_text";
					data = "OptionsVideo";
					opensNewWindow = 1;
				};
				class OptionsAudio
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_OptionsAudio_text";
					data = "OptionsAudio";
					opensNewWindow = 1;
				};
				class OptionsGame
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_OptionsGame_text";
					data = "OptionsGame";
					opensNewWindow = 1;
				};
				class OptionsControls
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_OptionsControls_text";
					data = "OptionsControls";
					opensNewWindow = 1;
				};
				class OptionsEditor
				{
					text = "$STR_3DEN_Preferences_textSingular";
					data = "Preferences";
					action = "edit3DENMissionAttributes 'Preferences';";
					shortcuts[] = {"512 + 0x25"};
					opensNewWindow = 1;
				};
				class Help
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_Help_text";
					items[] = {"HelpDoc","HelpScripting","Separator","HelpBiki","HelpForums","HelpFeedback","HelpDevHub","Separator","HelpTutorials"};
				};
				class HelpDoc
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_HelpDoc_text";
					data = "HelpDoc";
					picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
					weblink = "https://community.bistudio.com/wiki/Eden_Editor";
					opensNewWindow = 1;
				};
				class HelpScripting
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_HelpScripting_text";
					data = "HelpScripting";
					picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
					weblink = "https://community.bistudio.com/wiki/Category:Scripting_Commands_Arma_3";
					opensNewWindow = 1;
				};
				class HelpBiki
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_HelpBiki_text";
					data = "HelpBiki";
					picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
					weblink = "https://community.bistudio.com/";
					opensNewWindow = 1;
				};
				class HelpForums
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_HelpForums_text";
					data = "HelpForums";
					picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
					weblink = "https://forums.bistudio.com/forum/161-arma-3-editing/";
					opensNewWindow = 1;
				};
				class HelpFeedback
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_HelpFeedback_text";
					data = "HelpFeedback";
					picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
					weblink = "https://feedback.arma3.com";
					opensNewWindow = 1;
				};
				class HelpDevHub
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_HelpDevHub_text";
					data = "HelpDevHub";
					picture = "\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa";
					weblink = "https://dev.arma3.com/";
					opensNewWindow = 1;
				};
				class HelpTutorials
				{
					text = "$STR_3DEN_Display3DENTutorial_Title_text";
					data = "HelpTutorials";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\help_tutorial_ca.paa";
					action = "(ctrlparent (_this select 0)) createdisplay 'Display3DENTutorial';";
					opensNewWindow = 1;
				};
				class HelpUpdates
				{
					text = "$STR_3DEN_Display3DENUpdates_Title_text";
					data = "HelpUpdates";
					picture = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\help_updates_ca.paa";
					action = "(ctrlparent (_this select 0)) createdisplay 'Display3DENUpdates';";
					opensNewWindow = 1;
				};
				class Separator{};
				class Default
				{
					text = "$STR_3DEN_Display3DEN_MenuBar_Default_text";
					enable = 0;
				};
			};
		};
		class Toolbar: ctrlControlsGroupNoScrollbars
		{
			idc = 1000;
			x = "safezoneX";
			y = "safezoneY + 		5 * (pixelH * pixelGrid * 	0.50)";
			w = "safezoneW";
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class ToolbarBackground: ctrlStatic
				{
					idc = 1001;
					colorBackground[] = {0.2,0.2,0.2,1};
					x = 0;
					y = 0;
					w = "safezoneW";
					h = "7 * (pixelH * pixelGrid * 	0.50)";
				};
				class File: ctrlControlsGroupNoScrollbars
				{
					idc = 1002;
					x = 0;
					y = "1 * (pixelH * pixelGrid * 	0.50)";
					w = "4 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					h = "(	5 * (pixelH * pixelGrid * 	0.50))";
					class Controls
					{
						class New: ctrlButtonToolbar
						{
							idc = 1006;
							action = "do3DENAction 'MissionNew';";
							text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\new_ca.paa";
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_MissionNew_text";
							onLoad = "['showShortcut','MissionNew',_this] call bis_fnc_3DENInterface;";
							x = "0 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
						class Open: ctrlButtonToolbar
						{
							idc = 1007;
							action = "do3DENAction 'MissionLoad';";
							text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\open_ca.paa";
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_MissionOpen_text";
							onLoad = "['showShortcut','MissionLoad',_this] call bis_fnc_3DENInterface;";
							x = "1 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
						class Save: ctrlButtonToolbar
						{
							idc = 1008;
							action = "do3DENAction 'MissionSave';";
							text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\save_ca.paa";
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_MissionSave_text";
							onLoad = "['showShortcut','MissionSave',_this] call bis_fnc_3DENInterface;";
							x = "2 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
						class Publish: ctrlButtonToolbar
						{
							idc = 10091;
							action = "do3DENAction 'OpenSteamPublishDialog';";
							text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\steam_ca.paa";
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_MissionPublishSteam_text";
							onLoad = "['showShortcut','MissionPublishSteam',_this] call bis_fnc_3DENInterface;";
							x = "3 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
					};
				};
				class Separator1: ctrlStatic
				{
					colorBackground[] = {0,0,0,0.5};
					x = "4.5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					y = "1 * (pixelH * pixelGrid * 	0.50)";
					w = "pixelW";
					h = "(	5 * (pixelH * pixelGrid * 	0.50))";
				};
				class History: ctrlControlsGroupNoScrollbars
				{
					idc = 1003;
					x = "5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					y = "1 * (pixelH * pixelGrid * 	0.50)";
					w = "2 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					h = "(	5 * (pixelH * pixelGrid * 	0.50))";
					class Controls
					{
						class Undo: ctrlButtonToolbar
						{
							idc = 1010;
							action = "do3DENAction 'Undo';";
							text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\undo_ca.paa";
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_Undo_text";
							onLoad = "['showShortcut','Undo',_this] call bis_fnc_3DENInterface;";
							x = "0 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
						class Redo: ctrlButtonToolbar
						{
							idc = 1011;
							action = "do3DENAction 'Redo';";
							text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\redo_ca.paa";
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_Redo_text";
							onLoad = "['showShortcut','Redo',_this] call bis_fnc_3DENInterface;";
							x = "1 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
					};
				};
				class Separator2: Separator1
				{
					x = "7.5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
				};
				class Widget: ctrlControlsGroupNoScrollbars
				{
					idc = 1004;
					x = "8 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					y = "1 * (pixelH * pixelGrid * 	0.50)";
					w = "5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					h = "(	5 * (pixelH * pixelGrid * 	0.50))";
					class Controls
					{
						class WidgetNone: ctrlCheckboxToolbar
						{
							idc = 10041;
							onCheckedChanged = "do3DENAction 'WidgetNone'";
							onLoad = "['showShortcut','WidgetNone',_this] call bis_fnc_3DENInterface;";
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_WidgetNone_text";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_on_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_off_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_none_off_ca.paa";
							x = "0 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
						class WidgetTranslation: ctrlCheckboxToolbar
						{
							idc = 10042;
							onCheckedChanged = "do3DENAction 'WidgetTranslation'";
							onLoad = "['showShortcut','WidgetTranslation',_this] call bis_fnc_3DENInterface;";
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_WidgetTranslation_text";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_on_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_off_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_translation_off_ca.paa";
							x = "1 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
						class WidgetRotation: ctrlCheckboxToolbar
						{
							idc = 10043;
							onCheckedChanged = "do3DENAction 'WidgetRotation'";
							onLoad = "['showShortcut','WidgetRotation',_this] call bis_fnc_3DENInterface;";
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_WidgetRotation_text";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_on_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_off_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_rotation_off_ca.paa";
							x = "2 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
						class WidgetScaling: ctrlCheckboxToolbar
						{
							idc = 10044;
							onCheckedChanged = "do3DENAction 'WidgetScale'";
							onLoad = "['showShortcut','WidgetScale',_this] call bis_fnc_3DENInterface;";
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_WidgetScaling_text";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_on_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_off_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_scaling_off_ca.paa";
							x = "3 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
						class WidgetArea: ctrlCheckboxToolbar
						{
							idc = 10045;
							onCheckedChanged = "do3DENAction 'WidgetArea'";
							onLoad = "['showShortcut','WidgetArea',_this] call bis_fnc_3DENInterface;";
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_WidgetArea_text";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_on_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_off_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_area_off_ca.paa";
							x = "4 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
					};
				};
				class Separator3: Separator1
				{
					x = "13.5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
				};
				class Interaction: ctrlControlsGroupNoScrollbars
				{
					idc = 1005;
					x = "14 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					y = "1 * (pixelH * pixelGrid * 	0.50)";
					w = "3 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					h = "(	5 * (pixelH * pixelGrid * 	0.50))";
					class Controls
					{
						class WidgetCoord: ctrlCheckboxToolbar
						{
							idc = 1016;
							onCheckedChanged = "do3DENAction 'WidgetCoord';";
							onLoad = "['showShortcut','WidgetCoord',_this] call bis_fnc_3DENInterface;";
							tooltip = "$STR_3den_display3den_menubar_widgetspace_text";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_local_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_global_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_local_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_global_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_local_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_global_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_local_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_global_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_local_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\widget_global_ca.paa";
							x = "0 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
						class VerticalToggle: ctrlCheckboxToolbar
						{
							idc = 1017;
							onCheckedChanged = "do3DENAction 'VerticalToggle';";
							onLoad = "['showShortcut','VerticalToggle',_this] call bis_fnc_3DENInterface;";
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_VerticalToggle_text";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ATL_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ASL_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ATL_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ASL_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ATL_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ASL_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ATL_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ASL_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ATL_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ASL_ca.paa";
							x = "1 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
						class SurfaceSnapToggle: ctrlCheckboxToolbar
						{
							idc = 1018;
							onCheckedChanged = "do3DENAction 'SurfaceSnapToggle';";
							onLoad = "['showShortcut','SurfaceSnapToggle',_this] call bis_fnc_3DENInterface;";
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_SurfaceSnapToggle_text";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\snap_on_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\snap_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\snap_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\snap_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\snap_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\snap_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\snap_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\snap_off_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\snap_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\snap_off_ca.paa";
							x = "2 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
					};
				};
				class Separator4: Separator1
				{
					x = "17.5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
				};
				class Grid: ctrlControlsGroupNoScrollbars
				{
					idc = 1024;
					x = "18 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					y = "1 * (pixelH * pixelGrid * 	0.50)";
					w = "4.5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					h = "(	5 * (pixelH * pixelGrid * 	0.50))";
					class Controls
					{
						class Translation: ctrlCheckboxToolbar
						{
							idc = 1025;
							onCheckedChanged = "do3DENAction 'MoveGridToggle';";
							onLoad = "['showShortcut','MoveGridToggle',_this] call bis_fnc_3DENInterface;";
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_GridTranslationToggle_text";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_translation_on_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_translation_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_translation_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_translation_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_translation_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_translation_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_translation_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_translation_off_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_translation_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_translation_off_ca.paa";
							x = "0 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
						class TranslationValue: ctrlComboToolbar
						{
							idc = 1026;
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_GridTranslationToggle_text";
							x = "1 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50)) * 0.5";
							gridType = "translation";
							onLoad = "with uinamespace do {['init',_this] call bis_fnc_3DENGrid;};";
						};
						class Rotation: Translation
						{
							idc = 1027;
							onCheckedChanged = "do3DENAction 'RotateGridToggle';";
							onLoad = "['showShortcut','RotateGridToggle',_this] call bis_fnc_3DENInterface;";
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_GridRotationToggle_text";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_rotation_on_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_rotation_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_rotation_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_rotation_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_rotation_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_rotation_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_rotation_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_rotation_off_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_rotation_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_rotation_off_ca.paa";
							x = "1.5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
						class RotationValue: TranslationValue
						{
							idc = 1028;
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_GridRotationToggle_text";
							gridType = "rotation";
							x = "2.5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50)) * 0.5";
						};
						class Scaling: Translation
						{
							idc = 1029;
							onCheckedChanged = "do3DENAction 'ScaleGridToggle';";
							onLoad = "['showShortcut','ScaleGridToggle',_this] call bis_fnc_3DENInterface;";
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_GridScalingToggle_text";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_scaling_on_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_scaling_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_scaling_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_scaling_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_scaling_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_scaling_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_scaling_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_scaling_off_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_scaling_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\grid_scaling_off_ca.paa";
							x = "3 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
						class ScalingValue: TranslationValue
						{
							idc = 1030;
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_GridScalingToggle_text";
							gridType = "scaling";
							x = "4 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50)) * 0.5";
						};
					};
				};
				class Separator5: Separator1
				{
					x = "23 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
				};
				class Mission: ctrlControlsGroupNoScrollbars
				{
					idc = 10301;
					x = "23.5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					y = "1 * (pixelH * pixelGrid * 	0.50)";
					w = "10 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					h = "(	5 * (pixelH * pixelGrid * 	0.50))";
					class Controls
					{
						class Intel: ctrlButtonToolbar
						{
							idc = 10302;
							action = "edit3DENMissionAttributes 'Intel';";
							onLoad = "['showShortcut','OpenIntelDisplay',_this] call bis_fnc_3DENInterface;";
							text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\intel_ca.paa";
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_MissionIntel_text";
							x = "0 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
						class Map: ctrlCheckboxToolbar
						{
							idc = 10303;
							onCheckedChanged = "do3DENAction 'ToggleMap';";
							onLoad = "['showShortcut','ToggleMap',_this] call bis_fnc_3DENInterface;";
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_Map_text";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_on_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_off_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\map_off_ca.paa";
							x = "1 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
						class Flashlight: ctrlCheckboxToolbar
						{
							idc = 10305;
							onCheckedChanged = "[] call bis_fnc_3DENFlashlight;";
							onLoad = "['showShortcut','ToggleFlashlight',_this] call bis_fnc_3DENInterface;";
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_ToggleFlashlight_text";
							textureChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_on_ca.paa";
							textureUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_off_ca.paa";
							textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_on_ca.paa";
							textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_off_ca.paa";
							textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_on_ca.paa";
							textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_off_ca.paa";
							texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_on_ca.paa";
							texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_off_ca.paa";
							textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_on_ca.paa";
							textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\flashlight_off_ca.paa";
							x = "2 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
						class Vision: ctrlButtonToolbar
						{
							idc = 10304;
							action = "[] call bis_fnc_3DENVisionMode;";
							onLoad = "['showShortcut','VisionModeToggle',_this] call bis_fnc_3DENInterface;";
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_VisionModeToggle_text";
							text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vision_normal_ca.paa";
							x = "3 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
						class Workspace: ctrlCombo
						{
							idc = 10306;
							tooltip = "$STR_3DEN_Display3DEN_MenuBar_Space_text";
							x = "4.5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "5.5 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							onLbSelChanged = "do3DENAction ((_this select 0) lbdata (_this select 1));";
							class Items
							{
								class Mission
								{
									text = "$STR_3den_scenario";
									data = "MissionPartMission";
									default = 1;
								};
								class Intro
								{
									text = "$STR_3den_display3den_menubar_spaceintro_text";
									data = "MissionPartIntro";
								};
								class OutroWin
								{
									text = "$STR_3den_display3den_menubar_spaceoutrowin_text";
									data = "MissionPartOutroWin";
								};
								class OutroLose
								{
									text = "$STR_3den_display3den_menubar_spaceoutrolose_text";
									data = "MissionPartOutroLoose";
								};
							};
						};
					};
				};
				class Help: ctrlControlsGroupNoScrollbars
				{
					idc = 10251;
					x = "safezoneW - 1 * 	(	5 * (pixelW * pixelGrid * 	0.50)) - (pixelW * pixelGrid * 	0.50)";
					y = "1 * (pixelH * pixelGrid * 	0.50)";
					w = "1 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
					h = "(	5 * (pixelH * pixelGrid * 	0.50))";
					class Controls
					{
						class Tutorial: ctrlButtonToolbar
						{
							idc = 10310;
							text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\help_tutorial_ca.paa";
							tooltip = "$STR_3DEN_Display3DENTutorial_Title_text";
							onLoad = "				_count = 0;				{					_count = _count + count configproperties [_x >> 'Sections','isclass _x'];				} foreach configproperties [configfile >> 'Cfg3DEN' >> 'Tutorials'];				if (_count > count (profilenamespace getvariable ['display3DENTutorial_completed',[]])) then {					(_this select 0) ctrlsettext '\a3\3DEN\Data\Displays\Display3DEN\ToolBar\help_tutorial_new_ca.paa';				};			";
							onButtonClick = "(ctrlparent (_this select 0)) createdisplay 'Display3DENTutorial';";
							x = "0 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = 0;
							h = "(	5 * (pixelH * pixelGrid * 	0.50))";
							w = "(	5 * (pixelW * pixelGrid * 	0.50))";
						};
					};
				};
			};
		};
		class Notification: ctrlStructuredText
		{
			idc = 10312;
			x = "safezoneX + 	60 * (pixelW * pixelGrid * 	0.50)";
			y = "safezoneY + (		5 + 	(	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			w = "safezoneW - 2 * 	60 * (pixelW * pixelGrid * 	0.50)";
			h = 0;
			colorBackground[] = {1,0,1,1};
			shadow = 0;
			class Attributes: Attributes
			{
				align = "center";
			};
		};
		class TabLeftToggle: ctrlButton
		{
			idc = 1031;
			style = 2;
			x = "safezoneX + 0";
			y = "safezoneY + (		5 + 	(	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			w = "(	5 + 1) * (pixelW * pixelGrid * 	0.50)";
			h = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			text = "»";
			sizeEx = "5.58 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			colorBackground[] = {0.1,0.1,0.1,1};
			onbuttonclick = "'ShowPanelLeft' call bis_fnc_3DENInterface;";
		};
		class PanelLeft: ctrlControlsGroupNoScrollbars
		{
			idc = 1019;
			x = "safezoneX";
			y = "safezoneY + (		5 + 	(	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			w = "60 * (pixelW * pixelGrid * 	0.50)";
			h = "safezoneH - (		5 + 	(	5 + 2) + 		4) * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class TabLeftBackground: ctrlStatic
				{
					x = 0;
					y = 0;
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					h = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					colorBackground[] = {0.1,0.1,0.1,1};
				};
				class TabLeftToggle: ctrlButton
				{
					idc = 1032;
					style = 2;
					x = 0;
					y = 0;
					w = "(	5 + 1) * (pixelW * pixelGrid * 	0.50)";
					h = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					text = "«";
					sizeEx = "5.58 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					colorBackground[] = {0.1,0.1,0.1,1};
					onbuttonclick = "'ShowPanelLeft' call bis_fnc_3DENInterface";
				};
				class TabLeftSections: ctrlToolbox
				{
					idc = 1033;
					x = "(	5 + 1) * (pixelW * pixelGrid * 	0.50)";
					y = "(pixelH * pixelGrid * 	0.50)";
					w = "(	60 - 	(	5 + 1) - 1) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					font = "RobotoCondensedLight";
					columns = 2;
					strings[] = {"$STR_3DEN_Display3DEN_Entities","$STR_3DEN_Display3DEN_Locations"};
					colorBackground[] = {0,0,0,0};
					colorSelectedBg[] = {0.2,0.2,0.2,1};
					onToolBoxSelChanged = "['tabLeft',_this select 1] call bis_fnc_3DENInterface;";
				};
				class PanelLeftBackground: ctrlStatic
				{
					idc = 1020;
					x = 0;
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					h = "safezoneH - (		5 + 	(	5 + 2) + 	(	5 + 1) + 		4) * (pixelH * pixelGrid * 	0.50)";
					colorBackground[] = {0.2,0.2,0.2,0.87};
				};
				class PanelLeftEdit: ctrlControlsGroupNoScrollbars
				{
					idc = 1037;
					x = 0;
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					h = "safezoneH - (		5 + 	(	5 + 2) + 	(	5 + 1) + 		4) * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class PanelLeftEditBackground: ctrlStatic
						{
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
							colorBackground[] = {0.2,0.2,0.2,1};
						};
						class SearchEdit: ctrlEdit
						{
							idc = 80;
							x = "1 * (pixelW * pixelGrid * 	0.50)";
							y = "(pixelH * pixelGrid * 	0.50)";
							w = "(	60 - 3 * 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
							h = "5 * (pixelH * pixelGrid * 	0.50)";
						};
						class SearchEditButton: ctrlButtonSearch
						{
							idc = 81;
							x = "(	60 - 3 * 	5) * (pixelW * pixelGrid * 	0.50)";
							y = "(pixelH * pixelGrid * 	0.50)";
							w = "5 * (pixelW * pixelGrid * 	0.50)";
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							onLoad = "['showShortcut','SearchEdit',_this] call bis_fnc_3DENInterface;";
							tooltip = "$STR_3DEN_Display3DEN_SearchEditButton_tooltip";
						};
						class CollapseAllButton: ctrlButtonCollapseAll
						{
							idc = -1;
							x = "(	60 - 2 * 	5) * (pixelW * pixelGrid * 	0.50)";
							y = "(pixelH * pixelGrid * 	0.50)";
							w = "5 * (pixelW * pixelGrid * 	0.50)";
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							onButtonClick = "['collapseEntityList'] call bis_fnc_3DENInterface;";
						};
						class ExpandAllButton: ctrlButtonExpandAll
						{
							idc = -1;
							x = "(	60 - 1 * 	5) * (pixelW * pixelGrid * 	0.50)";
							y = "(pixelH * pixelGrid * 	0.50)";
							w = "5 * (pixelW * pixelGrid * 	0.50)";
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							onButtonClick = "['expandEntityList'] call bis_fnc_3DENInterface;";
						};
						class Edit: ctrlTree
						{
							idc = 55;
							x = 0;
							y = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							h = "safezoneH - (		5 + 	(	5 + 2) + 	(	5 + 1) + 		4 + 	5 + 2 + 1 + 	5) * (pixelH * pixelGrid * 	0.50)";
							sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
							font = "RobotoCondensedLight";
							colorBorder[] = {0,0,0,0};
							multiselectEnabled = 1;
							expandOnDoubleclick = 0;
							disableKeyboardSearch = 1;
							colorDisabled[] = {1,1,1,0.25};
						};
						class EditPanel: ctrlControlsGroupNoScrollbars
						{
							y = "safezoneH - (		5 + 	(	5 + 2) + 	(	5 + 1) + 		4 + 	5 + 2) * (pixelH * pixelGrid * 	0.50)";
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
							class Controls
							{
								class EditPanelBackground: ctrlStatic
								{
									w = "60 * (pixelW * pixelGrid * 	0.50)";
									h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
									colorBackground[] = {0.2,0.2,0.2,1};
								};
								class Delete: ctrlButtonToolbar
								{
									idc = 85;
									text = "\a3\3DEN\Data\Displays\Display3DEN\PanelLeft\entityList_delete_ca.paa";
									x = "1 * (pixelW * pixelGrid * 	0.50)";
									y = "(pixelH * pixelGrid * 	0.50)";
									w = "5 * (pixelW * pixelGrid * 	0.50)";
									h = "5 * (pixelH * pixelGrid * 	0.50)";
									tooltip = "$STR_3DEN_Delete";
								};
								class EditLayer: Delete
								{
									idc = 84;
									text = "\a3\3DEN\Data\Displays\Display3DEN\PanelLeft\entityList_layer_ca.paa";
									x = "(	60 - 4 * 	5 - 5) * (pixelW * pixelGrid * 	0.50)";
									tooltip = "$STR_3DEN_Display3DEN_EditLayer_tooltip";
								};
								class RemoveLayer: Delete
								{
									idc = 86;
									text = "\a3\3DEN\Data\Displays\Display3DEN\PanelLeft\entityList_layerRemove_ca.paa";
									x = "(	60 - 3 * 	5 - 4) * (pixelW * pixelGrid * 	0.50)";
									tooltip = "$STR_3DEN_Display3DEN_RemoveLayer_tooltip";
								};
								class EnableLayer: Delete
								{
									idc = 1065;
									text = "\a3\3DEN\Data\Displays\Display3DEN\PanelLeft\entityList_layerEnable_ca.paa";
									x = "(	60 - 2 * 	5 - 2) * (pixelW * pixelGrid * 	0.50)";
									tooltip = "$STR_3DEN_Display3DEN_EnableLayer_tooltip";
									onButtonClick = "'EnableLayer' call bis_fnc_3DENInterface;";
								};
								class ShowLayer: Delete
								{
									idc = 1064;
									text = "\a3\3DEN\Data\Displays\Display3DEN\PanelLeft\entityList_layerShow_ca.paa";
									x = "(	60 - 1 * 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
									tooltip = "$STR_3DEN_Display3DEN_ShowLayer_tooltip";
									onButtonClick = "'ShowLayer' call bis_fnc_3DENInterface;";
								};
							};
						};
					};
				};
				class PanelLeftLocations: ctrlControlsGroupNoScrollbars
				{
					idc = 1038;
					x = 0;
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					h = "safezoneH - (		5 + 	(	5 + 2) + 	(	5 + 1) + 		4) * (pixelH * pixelGrid * 	0.50)";
					show = 0;
					class Controls
					{
						class PanelLeftLocationsBackground: ctrlStatic
						{
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
							colorBackground[] = {0.2,0.2,0.2,1};
						};
						class SearchLocations: ctrlEdit
						{
							idc = 1042;
							x = "1 * (pixelW * pixelGrid * 	0.50)";
							y = "(pixelH * pixelGrid * 	0.50)";
							w = "(	60 - 	5 - 2) * (pixelW * pixelGrid * 	0.50)";
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							text = "";
						};
						class SearchLocationsButton: ctrlButton
						{
							idc = 1043;
							style = "0x02 + 0x30 + 0x800";
							text = "\a3\3DEN\Data\Displays\Display3DEN\search_start_ca.paa";
							textSearch = "\a3\3DEN\Data\Displays\Display3DEN\search_end_ca.paa";
							x = "(	60 - 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
							y = "(pixelH * pixelGrid * 	0.50)";
							w = "5 * (pixelW * pixelGrid * 	0.50)";
							h = "5 * (pixelH * pixelGrid * 	0.50)";
						};
						class Locations: ctrlTree
						{
							idc = 75;
							x = 0;
							y = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							h = "safezoneH - (		5 + 	(	5 + 2) + 	(	5 + 1) + 		4 + 	5 + 2 + 1 + 	5) * (pixelH * pixelGrid * 	0.50)";
							sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
							font = "RobotoCondensedLight";
							colorBorder[] = {0,0,0,0};
							onTreeDblClick = "['select',_this] call bis_fnc_3DENListLocations;";
							disableKeyboardSearch = 1;
							expandOnDoubleclick = 0;
							idcSearch = 1042;
						};
					};
				};
			};
		};
		class TabRightToggle: TabLeftToggle
		{
			idc = 1034;
			x = "safezoneX + safezoneW - 	(	5 + 1) * (pixelW * pixelGrid * 	0.50)";
			text = "«";
			onbuttonclick = "'ShowPanelRight' call bis_fnc_3DENInterface";
		};
		class PanelRight: ctrlControlsGroupNoScrollbars
		{
			idc = 1021;
			x = "safezoneX + safezoneW - 	60 * (pixelW * pixelGrid * 	0.50)";
			y = "safezoneY + (	5 + 	(	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			w = "60 * (pixelW * pixelGrid * 	0.50)";
			h = "safezoneH - (		5 + 	(	5 + 2) + 	10) * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class TabRightBackground: ctrlStatic
				{
					x = 0;
					y = 0;
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					h = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					colorBackground[] = {0.1,0.1,0.1,1};
				};
				class TabRightToggle: ctrlButton
				{
					idc = 1034;
					style = 2;
					x = "(	60 - 	(	5 + 1)) * (pixelW * pixelGrid * 	0.50)";
					y = 0;
					w = "(	5 + 1) * (pixelW * pixelGrid * 	0.50)";
					h = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					text = "»";
					sizeEx = "5.58 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					colorBackground[] = {0,0,0,0};
					onbuttonclick = "'ShowPanelRight' call bis_fnc_3DENInterface";
				};
				class TabRightSections: ctrlToolbox
				{
					idc = 1036;
					x = "(pixelW * pixelGrid * 	0.50)";
					y = "(pixelH * pixelGrid * 	0.50)";
					w = "(	60 - 	(	5 + 1) - 1) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					font = "RobotoCondensedLight";
					columns = 2;
					strings[] = {"$STR_3DEN_Display3DEN_Assets","$STR_3DEN_Display3DEN_History"};
					colorBackground[] = {0,0,0,0};
					colorSelectedBg[] = {0.2,0.2,0.2,1};
					onToolBoxSelChanged = "['tabRight',_this select 1] call bis_fnc_3DENInterface;";
				};
				class PanelRightBackground: ctrlStatic
				{
					idc = 1022;
					x = 0;
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					h = "safezoneH - (		5 + 	(	5 + 2) + 	10 + 	(	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
					colorBackground[] = {0.2,0.2,0.2,0.87};
				};
				class PanelRightCreate: ctrlControlsGroupNoScrollbars
				{
					idc = 1039;
					x = 0;
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					h = "safezoneH - (		5 + 	(	5 + 2) + 	10 + 	(	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class PanelRightCreateBackground: ctrlStatic
						{
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							h = "26 * (pixelH * pixelGrid * 	0.50)";
							colorBackground[] = {0.2,0.2,0.2,1};
						};
						class ModeLabels: ctrlToolbox
						{
							idc = 1060;
							x = 0;
							y = "2 * pixelH";
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							h = "3 * (pixelH * pixelGrid * 	0.50)";
							rows = 1;
							columns = 6;
							strings[] = {"F1","F2","F3","F4","F5","F6"};
							sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
							colorBackground[] = {0,0,0,0};
							colorText[] = {1,1,1,0.25};
							colorTextSelect[] = {1,1,1,1};
							colorSelectedBg[] = {0,0,0,0};
							onLoad = "(_this select 0) ctrlenable false;";
						};
						class Modes: ctrlToolboxPictureKeepAspect
						{
							idc = 53;
							x = 0;
							y = "3 * (pixelH * pixelGrid * 	0.50)";
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							h = "7 * (pixelH * pixelGrid * 	0.50)";
							rows = 1;
							columns = 6;
							strings[] = {"\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeObjects_ca.paa","\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeGroups_ca.paa","\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeTriggers_ca.paa","\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeWaypoints_ca.paa","\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeModules_ca.paa","\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeMarkers_ca.paa"};
							tooltips[] = {"$STR_3DEN_Object_textPlural","$STR_3DEN_Group_textPlural","$STR_3DEN_Trigger_textPlural","$STR_3DEN_Waypoint_textPlural","$STR_3DEN_Logic_textPlural","$STR_3DEN_Marker_textPlural"};
							values[] = {0,1,2,3,4,5,6};
							colorBackground[] = {0,0,0,0};
							colorText[] = {1,1,1,0.25};
							colorTextSelect[] = {1,1,1,1};
							colorSelectedBg[] = {0,0,0,0};
						};
						class Sides: Modes
						{
							idc = 54;
							y = "10 * (pixelH * pixelGrid * 	0.50)";
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							h = "10 * (pixelH * pixelGrid * 	0.50)";
							columns = 5;
							strings[] = {};
							values[] = {};
						};
						class Create: ctrlControlsGroupNoScrollbars
						{
							idc = 1049;
							x = 0;
							y = "19 * (pixelH * pixelGrid * 	0.50)";
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							h = "safezoneH - (	(		5 + 	(	5 + 2) + 	(	5 + 1) + 	10) + 14 + 	5) * (pixelH * pixelGrid * 	0.50)";
							class Controls
							{
								class ModsButton: ctrlCombo
								{
									idc = 4242;
									tooltip = "$STR_3DEN_Display3DEN_ModsButton";
									x = "(pixelW * pixelGrid * 	0.50)";
									y = "(pixelH * pixelGrid * 	0.50)";
									w = "5 * (pixelW * pixelGrid * 	0.50)";
									h = "5 * (pixelH * pixelGrid * 	0.50)";
									onLoad = "				_ctrlMods = _this select 0;				_mods = [];				{_mods pushBackUnique (configsourcemod _x)} foreach configProperties [configfile >> 'CfgPatches'];				{					_params = if (_x == '') then {[]} else {modParams [_x,['name','logoSmall']]};					if (count _params > 0) then {						_lbAdd = _ctrlMods lbadd (_params select 0);						_ctrlMods lbsetdata [_lbAdd,_x];						_ctrlMods lbsetpictureright [_lbAdd,(_params select 1)];						_ctrlMods lbsettooltip [_lbAdd,(_params select 0) + '\n' + _x];					};				} foreach _mods;				lbsort _ctrlMods;			";
									onLBSelChanged = "				_ctrlMods = _this select 0;				(ctrlparent _ctrlMods displayctrl 82) ctrlsettext format ['mod %1',_ctrlMods lbdata (_this select 1)];			";
								};
								class SearchCreate: ctrlEdit
								{
									idc = 82;
									x = "(1 + 	5) * (pixelW * pixelGrid * 	0.50)";
									y = "1 * (pixelH * pixelGrid * 	0.50)";
									w = "(	60 - 4 * 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
									h = "5 * (pixelH * pixelGrid * 	0.50)";
								};
								class SearchCreateButton: ctrlButtonSearch
								{
									idc = 83;
									x = "(	60 - 3 * 	5) * (pixelW * pixelGrid * 	0.50)";
									y = "1 * (pixelH * pixelGrid * 	0.50)";
									w = "5 * (pixelW * pixelGrid * 	0.50)";
									h = "5 * (pixelH * pixelGrid * 	0.50)";
									onLoad = "['showShortcut','SearchCreate',_this] call bis_fnc_3DENInterface;";
									tooltip = "$STR_3DEN_Display3DEN_SearchCreateButton_tooltip";
								};
								class CollapseAllButton: ctrlButtonCollapseAll
								{
									idc = -1;
									x = "(	60 - 2 * 	5) * (pixelW * pixelGrid * 	0.50)";
									y = "1 * (pixelH * pixelGrid * 	0.50)";
									w = "5 * (pixelW * pixelGrid * 	0.50)";
									h = "5 * (pixelH * pixelGrid * 	0.50)";
									onButtonClick = "['collapseAssetBrowser'] call bis_fnc_3DENInterface;";
								};
								class ExpandAllButton: ctrlButtonExpandAll
								{
									idc = -1;
									x = "(	60 - 1 * 	5) * (pixelW * pixelGrid * 	0.50)";
									y = "1 * (pixelH * pixelGrid * 	0.50)";
									w = "5 * (pixelW * pixelGrid * 	0.50)";
									h = "5 * (pixelH * pixelGrid * 	0.50)";
									onButtonClick = "['expandAssetBrowser'] call bis_fnc_3DENInterface;";
								};
								class CreateObjectWEST: ctrlTree
								{
									idc = 56;
									y = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
									w = "60 * (pixelW * pixelGrid * 	0.50)";
									h = "safezoneH - (	(		5 + 	(	5 + 2) + 	(	5 + 1) + 	10) + 21 + 	5 + (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
									defaultItem[] = {"BLU_F","EdSubcat_Personnel"};
									sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
									font = "RobotoCondensedLight";
									multiselectEnabled = 0;
									colorBackground[] = {0,0,0,0};
									colorBorder[] = {0,0,0,0};
									ontreeSelChanged = "['place',_this] call bis_fnc_3DENControlsHint;";
									onMouseButtonDown = "['mousebuttondown',_this] call bis_fnc_3DENControlsHint;";
									onMouseButtonUp = "['mousebuttonup',_this] call bis_fnc_3DENControlsHint;";
									disableKeyboardSearch = 1;
								};
								class CreateObjectEAST: CreateObjectWEST
								{
									idc = 57;
									defaultItem[] = {"OPF_F","EdSubcat_Personnel"};
								};
								class CreateObjectGUER: CreateObjectWEST
								{
									idc = 58;
									defaultItem[] = {"IND_F","EdSubcat_Personnel"};
								};
								class CreateObjectCIV: CreateObjectWEST
								{
									idc = 59;
									defaultItem[] = {"CIV_F","EdSubcat_Personnel"};
								};
								class CreateObjectEMPTY: CreateObjectWEST
								{
									idc = 60;
									defaultItem[] = {"Default"};
									h = "safezoneH - (	(		5 + 	(	5 + 2) + 	(	5 + 1) + 	10) + 21 + 	5) * (pixelH * pixelGrid * 	0.50)";
								};
								class CreateGroupWEST: CreateObjectEMPTY
								{
									idc = 61;
									defaultItem[] = {"BLU_F","Infantry"};
								};
								class CreateGroupEAST: CreateObjectEMPTY
								{
									idc = 62;
									defaultItem[] = {"OPF_F","Infantry"};
								};
								class CreateGroupGUER: CreateObjectEMPTY
								{
									idc = 63;
									defaultItem[] = {"IND_F","Infantry"};
								};
								class CreateGroupCIV: CreateObjectEMPTY
								{
									idc = 64;
									defaultItem[] = {};
								};
								class CreateGroupEMPTY: CreateObjectEMPTY
								{
									idc = 65;
									defaultItem[] = {};
								};
								class CreateGroupCUSTOM: CreateObjectWEST
								{
									idc = 71;
									defaultItem[] = {};
								};
								class CreateTrigger: CreateObjectEMPTY
								{
									idc = 68;
									defaultItem[] = {};
									show = 0;
								};
								class CreateWaypoint: CreateObjectEMPTY
								{
									idc = 6900000;
									defaultItem[] = {};
								};
								class CreateObjectLogic: CreateObjectEMPTY
								{
									idc = 66;
									defaultItem[] = {"Objects"};
								};
								class CreateObjectModule: CreateObjectEMPTY
								{
									idc = 67;
									defaultItem[] = {};
								};
								class CreateMarkerIcon: CreateObjectEMPTY
								{
									idc = 69;
									defaultItem[] = {"Military"};
								};
								class CreateMarkerArea: CreateObjectEMPTY
								{
									idc = 70;
									defaultItem[] = {};
								};
								class VehiclePanel: ctrlControlsGroupNoScrollbars
								{
									idc = 1062;
									show = 0;
									y = "safezoneH - (	(		5 + 	(	5 + 2) + 	(	5 + 1) + 	10) + 14 + 	5 + (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
									w = "60 * (pixelW * pixelGrid * 	0.50)";
									h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
									class Controls
									{
										class Background: ctrlStatic
										{
											w = "60 * (pixelW * pixelGrid * 	0.50)";
											h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
											colorBackground[] = {0.2,0.2,0.2,1};
										};
										class ToggleEmpty: ctrlCheckbox
										{
											idc = 1063;
											x = "1 * (pixelW * pixelGrid * 	0.50)";
											y = "(pixelH * pixelGrid * 	0.50)";
											w = "5 * (pixelW * pixelGrid * 	0.50)";
											h = "5 * (pixelH * pixelGrid * 	0.50)";
											onCheckedChanged = "do3DENAction 'TogglePlaceEmptyVehicle';";
										};
										class TextEmpty: ctrlStatic
										{
											text = "$STR_3DEN_Display3DEN_VehiclePanel_TextEmpty_text";
											shadow = 0;
											x = "(	5 + 1) * (pixelW * pixelGrid * 	0.50)";
											y = "(pixelH * pixelGrid * 	0.50)";
											w = "(	60 - (	5 + 1)) * (pixelW * pixelGrid * 	0.50)";
											h = "5 * (pixelH * pixelGrid * 	0.50)";
										};
									};
								};
								class CustomCompositionPanel: ctrlControlsGroupNoScrollbars
								{
									idc = 1061;
									show = 0;
									y = "safezoneH - (	(		5 + 	(	5 + 2) + 	(	5 + 1) + 	10) + 14 + 	5 + (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
									w = "60 * (pixelW * pixelGrid * 	0.50)";
									h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
									class Controls
									{
										class Background: ctrlStatic
										{
											w = "60 * (pixelW * pixelGrid * 	0.50)";
											h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
											colorBackground[] = {0.2,0.2,0.2,1};
										};
										class Add: ctrlButtonToolbar
										{
											idc = 90;
											text = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\customcomposition_add_ca.paa";
											x = "1 * (pixelW * pixelGrid * 	0.50)";
											y = "(pixelH * pixelGrid * 	0.50)";
											w = "5 * (pixelW * pixelGrid * 	0.50)";
											h = "5 * (pixelH * pixelGrid * 	0.50)";
											tooltip = "$STR_3DEN_Display3DEN_CustomCompositionPanel_Add_tooltip";
											onButtonClick = "do3denaction 'createcustomcomposition';";
										};
										class Edit: Add
										{
											idc = 91;
											text = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\customcomposition_edit_ca.paa";
											x = "(1 * 	5 + 2) * (pixelW * pixelGrid * 	0.50)";
											tooltip = "$STR_3DEN_Display3DEN_CustomCompositionPanel_Edit_tooltip";
											onButtonClick = "do3denaction 'editcustomcomposition';";
										};
										class Publish: Add
										{
											idc = 93;
											text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\steam_ca.paa";
											x = "(2 * 	5 + 3) * (pixelW * pixelGrid * 	0.50)";
											tooltip = "$STR_3DEN_Display3DEN_CustomCompositionPanel_Publish_tooltip";
											onLoad = "(_this select 0) ctrlenable false;";
										};
										class Delete: Add
										{
											idc = 92;
											text = "\a3\3DEN\Data\Displays\Display3DEN\PanelLeft\entityList_delete_ca.paa";
											x = "(	60 - 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
											tooltip = "$STR_3DEN_Display3DEN_CustomCompositionPanel_Delete_tooltip";
											onButtonClick = "do3denaction 'deletecustomcomposition';";
										};
									};
								};
							};
						};
					};
				};
				class PanelRightHistory: ctrlControlsGroupNoScrollbars
				{
					idc = 1040;
					x = 0;
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					h = "safezoneH - (		5 + 	(	5 + 2) + 	10 + 	(	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
					show = 0;
					class Controls
					{
						class PanelRightHistoryBackground: ctrlStatic
						{
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							h = "1 * (pixelH * pixelGrid * 	0.50)";
							colorBackground[] = {0.2,0.2,0.2,1};
						};
						class History: ctrlListbox
						{
							idc = 74;
							x = 0;
							y = "1 * (pixelH * pixelGrid * 	0.50)";
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							h = "safezoneH - (		5 + 	(	5 + 2) + 	10 + 	(	5 + 1) + 1) * (pixelH * pixelGrid * 	0.50)";
							sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
							rowHeight = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
							colorBackground[] = {0,0,0,0};
						};
					};
				};
			};
		};
		class EditorPreviewGroup: ctrlControlsGroupNoScrollbars
		{
			idc = 98;
			x = "safezoneX + safezoneW - (	60 + 	27 * 16/9 + 1) * (pixelW * pixelGrid * 	0.50)";
			y = "safezoneY + (	5 + 	(	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			w = "27 * 16/9 * (pixelW * pixelGrid * 	0.50)";
			h = "27 * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class Background: ctrlStatic
				{
					x = 0;
					y = 0;
					w = 1;
					h = 1;
					colorBackground[] = {0.2,0.2,0.2,0.87};
				};
				class EditorPreview: ctrlStaticPictureKeepAspect
				{
					idc = 99;
					text = "#(argb,8,8,3)color(1,0,1,1)";
					x = "(pixelW * pixelGrid * 	0.50)";
					y = "(pixelH * pixelGrid * 	0.50)";
					w = "(	27 - 2) * (pixelW * pixelGrid * 	0.50)";
					h = "(	27 - 2) * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class ButtonPlay: ctrlShortcutButton
		{
			idc = 1023;
			x = "safezoneX + safezoneW - 	60 * (pixelW * pixelGrid * 	0.50)";
			y = "safezoneY + safezoneH - 	10 * (pixelH * pixelGrid * 	0.50)";
			w = "60 * (pixelW * pixelGrid * 	0.50)";
			h = "10 * (pixelH * pixelGrid * 	0.50) + pixelH";
			size = "2.88 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			onButtonClick = "if !(is3DENMultiplayer) then {do3DENAction 'MissionPreview';} else {do3DENAction 'MissionPreviewMP';};";
			shadow = 0;
			color2[] = {0,0,0,1};
			colorFocused[] = {0,0,0,1};
			colorBackground[] = {1,1,1,1};
			animTextureNormal = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\playNormal_ca.paa";
			animTexturePressed = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\playNormal_ca.paa";
			animTextureOver = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\playOver_ca.paa";
			animTextureFocused = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\playOver_ca.paa";
			animTextureDisabled = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\playDisabled_ca.paa";
			class Attributes: Attributes
			{
				align = "right";
			};
			class TextPos: TextPos
			{
				top = 0;
				right = "60 * (pixelW * pixelGrid * 	0.50) * 0.2";
			};
			onLoad = "['ButtonPlay',_this select 0] call (uinamespace getvariable 'bis_fnc_3DENInterface');";
		};
		class ControlsHint: ctrlListbox
		{
			idc = 1044;
			x = "safezoneX + safezoneW - (	60 + 	50) * (pixelW * pixelGrid * 	0.50)";
			y = "safezoneY + safezoneH - 		4 * (pixelH * pixelGrid * 	0.50)";
			w = "50 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50) * 10";
			colorBackground[] = {0.2,0.2,0.2,0.5};
			colorDisabled[] = {1,1,1,1};
			colorTextRight[] = {1,1,1,0.5};
			colorPictureDisabled[] = {1,1,1,1};
			colorPictureRightDisabled[] = {1,1,1,1};
			font = "RobotoCondensedLight";
			sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			rowHeight = "5 * (pixelH * pixelGrid * 	0.50)";
			shadow = 1;
		};
		class StatusBar: ctrlControlsGroupNoScrollbars
		{
			idc = 1050;
			x = "safezoneX";
			y = "safezoneY + safezoneH - 		4 * (pixelH * pixelGrid * 	0.50)";
			w = "(safezoneW - 	60 * (pixelW * pixelGrid * 	0.50))";
			h = "(		4 + 1) * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class StatusBarBackground: ctrlStatic
				{
					idc = 1051;
					x = 0;
					y = 0;
					w = "(safezoneW - 	60 * (pixelW * pixelGrid * 	0.50))";
					h = "(		4 + 1) * (pixelH * pixelGrid * 	0.50)";
					colorBackground[] = {0.2,0.2,0.2,1};
				};
				class TextX: ctrlStaticPicture
				{
					y = "(2 * pixelH)";
					w = "3 * (pixelW * pixelGrid * 	0.50)";
					h = "3 * (pixelH * pixelGrid * 	0.50)";
					sizeEx = "2.88 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					text = "\a3\3DEN\Data\Displays\Display3DEN\StatusBar\x_ca.paa";
					colorBackground[] = {0,0,0,0};
					shadow = 0;
				};
				class ValueX: ctrlEdit
				{
					idc = 1052;
					style = "0x01 + 0x200";
					x = "3 * (pixelW * pixelGrid * 	0.50)";
					y = "(2 * pixelH)";
					w = "16 * (pixelW * pixelGrid * 	0.50)";
					h = "4 * (pixelH * pixelGrid * 	0.50) - 2 * (2 * pixelH)";
					font = "EtelkaMonospacePro";
					sizeEx = "2.945 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					shadow = 0;
					colorDisabled[] = {1,1,1,0.5};
					onLoad = "(_this select 0) ctrlenable false;";
				};
				class TextY: TextX
				{
					x = "(	3 + 	16 + 	4) * (pixelW * pixelGrid * 	0.50)";
					text = "\a3\3DEN\Data\Displays\Display3DEN\StatusBar\y_ca.paa";
					colorBackground[] = {0,0,0,0};
				};
				class ValueY: ValueX
				{
					idc = 1053;
					x = "((	3 + 	16 + 	4) + 	3) * (pixelW * pixelGrid * 	0.50)";
				};
				class TextZ: TextX
				{
					x = "2 * (	3 + 	16 + 	4) * (pixelW * pixelGrid * 	0.50)";
					text = "\a3\3DEN\Data\Displays\Display3DEN\StatusBar\z_ca.paa";
					colorBackground[] = {0,0,0,0};
				};
				class ValueZ: ValueX
				{
					idc = 1054;
					x = "(2 * (	3 + 	16 + 	4) + 	3) * (pixelW * pixelGrid * 	0.50)";
				};
				class TextDis: TextX
				{
					x = "3 * (	3 + 	16 + 	4) * (pixelW * pixelGrid * 	0.50)";
					text = "\a3\3DEN\Data\Displays\Display3DEN\StatusBar\dis_ca.paa";
					colorBackground[] = {0,0,0,0};
				};
				class ValueDis: ValueX
				{
					idc = 1055;
					x = "(3 * (	3 + 	16 + 	4) + 	3) * (pixelW * pixelGrid * 	0.50)";
					w = "30 * (pixelW * pixelGrid * 	0.50)";
				};
				class Version: ValueX
				{
					idc = 1057;
					x = "(safezoneW - 	60 * (pixelW * pixelGrid * 	0.50)) - (2 * 		4 + 21) * (pixelW * pixelGrid * 	0.50)";
					w = "20 * (pixelW * pixelGrid * 	0.50)";
					onLoad = "";
					canModify = 0;
				};
				class Mod: ctrlStaticPicture
				{
					idc = 1058;
					x = "(safezoneW - 	60 * (pixelW * pixelGrid * 	0.50)) - 2 * 		4 * (pixelW * pixelGrid * 	0.50)";
					w = "4 * (pixelW * pixelGrid * 	0.50)";
					h = "4 * (pixelH * pixelGrid * 	0.50)";
					text = "\a3\3DEN\Data\Displays\Display3DEN\StatusBar\mod_ca.paa";
				};
				class Server: ctrlStaticPicture
				{
					idc = 1059;
					x = "(safezoneW - 	60 * (pixelW * pixelGrid * 	0.50)) - 		4 * (pixelW * pixelGrid * 	0.50)";
					w = "4 * (pixelW * pixelGrid * 	0.50)";
					h = "4 * (pixelH * pixelGrid * 	0.50)";
					text = "\a3\3DEN\Data\Displays\Display3DEN\StatusBar\server_ca.paa";
				};
			};
		};
	};
};
class Display3DENPlace: DisplaySimulated
{
	idd = 321;
	scriptName = "Display3DENPlace";
	scriptPath = "3DENDisplays";
	onLoad = "[""onLoad"",_this,""Display3DENPlace"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENPlace"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class ControlsBackground
	{
		class BackgroundDisable: ctrlStaticBackgroundDisable{};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles{};
		class Background: ctrlStaticBackground
		{
			x = "(0.5 - (0.5 * 	60) * (pixelW * pixelGrid * 	0.50))";
			y = "(0.5 - 	((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) * 0.5)";
			w = "60 * (pixelW * pixelGrid * 	0.50)";
			h = "((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) - (	0 - (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (			60 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + 	((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) * 0.5";
			w = "60 * (pixelW * pixelGrid * 	0.50)";
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
		class Title: ctrlStaticTitle
		{
			text = "$STR_3DEN_Display3DENPlace_Title_text";
			x = "(0.5 - (0.5 * 	60) * (pixelW * pixelGrid * 	0.50))";
			y = "(0.5 - 	((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) * 0.5) - 	5 * (pixelH * pixelGrid * 	0.50)";
			w = "60 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class PanelRightCreate: ctrlControlsGroupNoScrollbars
		{
			idc = 1039;
			x = "(0.5 - (0.5 * 	60) * (pixelW * pixelGrid * 	0.50))";
			y = "(0.5 - 	((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) * 0.5)";
			w = "60 * (pixelW * pixelGrid * 	0.50)";
			h = "((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) - (	0) * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class PanelRightCreateBackground: ctrlStatic
				{
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					h = "26 * (pixelH * pixelGrid * 	0.50)";
					colorBackground[] = {0.2,0.2,0.2,1};
				};
				class ModeLabels: ctrlToolbox
				{
					idc = 1060;
					x = 0;
					y = "2 * pixelH";
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					h = "3 * (pixelH * pixelGrid * 	0.50)";
					rows = 1;
					columns = "6 - 1";
					strings[] = {"F1","F2","F3","F5","F6"};
					sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					colorBackground[] = {0,0,0,0};
					colorText[] = {1,1,1,0.25};
					colorTextSelect[] = {1,1,1,1};
					colorSelectedBg[] = {0,0,0,0};
					onLoad = "(_this select 0) ctrlenable false;";
				};
				class Modes: ctrlToolboxPictureKeepAspect
				{
					idc = 53;
					x = 0;
					y = "3 * (pixelH * pixelGrid * 	0.50)";
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					h = "7 * (pixelH * pixelGrid * 	0.50)";
					rows = 1;
					columns = "6 - 1";
					strings[] = {"\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeObjects_ca.paa","\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeGroups_ca.paa","\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeTriggers_ca.paa","\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeModules_ca.paa","\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeMarkers_ca.paa"};
					tooltips[] = {"$STR_3DEN_Object_textPlural","$STR_3DEN_Group_textPlural","$STR_3DEN_Trigger_textPlural","$STR_3DEN_Logic_textPlural","$STR_3DEN_Marker_textPlural"};
					values[] = {0,1,2,4,5,6};
					onToolBoxSelChanged = "['placemode'] spawn bis_fnc_3DENInterface; ['placesubmode'] spawn bis_fnc_3DENInterface;";
					colorBackground[] = {0,0,0,0};
					colorText[] = {1,1,1,0.25};
					colorTextSelect[] = {1,1,1,1};
					colorSelectedBg[] = {0,0,0,0};
				};
				class Sides: Modes
				{
					idc = 54;
					y = "10 * (pixelH * pixelGrid * 	0.50)";
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					h = "10 * (pixelH * pixelGrid * 	0.50)";
					columns = 5;
					strings[] = {};
					values[] = {};
					onToolBoxSelChanged = "['placesubmode'] spawn bis_fnc_3DENInterface;";
				};
				class Create: ctrlControlsGroupNoScrollbars
				{
					idc = 1049;
					x = 0;
					y = "19 * (pixelH * pixelGrid * 	0.50)";
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					h = "((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) - (	0 + 14 + 	5) * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class ModsButton: ctrlCombo
						{
							idc = 4242;
							tooltip = "$STR_3DEN_Display3DEN_ModsButton";
							x = "(pixelW * pixelGrid * 	0.50)";
							y = "(pixelH * pixelGrid * 	0.50)";
							w = "5 * (pixelW * pixelGrid * 	0.50)";
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							onLoad = "				_ctrlMods = _this select 0;				_mods = [];				{_mods pushBackUnique (configsourcemod _x)} foreach configProperties [configfile >> 'CfgPatches'];				{					_params = if (_x == '') then {[]} else {modParams [_x,['name','logoSmall']]};					if (count _params > 0) then {						_lbAdd = _ctrlMods lbadd (_params select 0);						_ctrlMods lbsetdata [_lbAdd,_x];						_ctrlMods lbsetpictureright [_lbAdd,(_params select 1)];						_ctrlMods lbsettooltip [_lbAdd,(_params select 0) + '\n' + _x];					};				} foreach _mods;				lbsort _ctrlMods;			";
							onLBSelChanged = "				_ctrlMods = _this select 0;				(ctrlparent _ctrlMods displayctrl 82) ctrlsettext format ['mod %1',_ctrlMods lbdata (_this select 1)];			";
						};
						class SearchCreate: ctrlEdit
						{
							idc = 82;
							x = "(1 + 	5) * (pixelW * pixelGrid * 	0.50)";
							y = "1 * (pixelH * pixelGrid * 	0.50)";
							w = "(	60 - 4 * 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
							h = "5 * (pixelH * pixelGrid * 	0.50)";
						};
						class SearchCreateButton: ctrlButtonSearch
						{
							idc = 83;
							x = "(	60 - 3 * 	5) * (pixelW * pixelGrid * 	0.50)";
							y = "1 * (pixelH * pixelGrid * 	0.50)";
							w = "5 * (pixelW * pixelGrid * 	0.50)";
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							onLoad = "['showShortcut','SearchCreate',_this] call bis_fnc_3DENInterface;";
							tooltip = "$STR_3DEN_Display3DEN_SearchCreateButton_tooltip";
						};
						class CollapseAllButton: ctrlButtonCollapseAll
						{
							idc = -1;
							x = "(	60 - 2 * 	5) * (pixelW * pixelGrid * 	0.50)";
							y = "1 * (pixelH * pixelGrid * 	0.50)";
							w = "5 * (pixelW * pixelGrid * 	0.50)";
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							onButtonClick = "['collapseAssetBrowser'] call bis_fnc_3DENInterface;";
						};
						class ExpandAllButton: ctrlButtonExpandAll
						{
							idc = -1;
							x = "(	60 - 1 * 	5) * (pixelW * pixelGrid * 	0.50)";
							y = "1 * (pixelH * pixelGrid * 	0.50)";
							w = "5 * (pixelW * pixelGrid * 	0.50)";
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							onButtonClick = "['expandAssetBrowser'] call bis_fnc_3DENInterface;";
						};
						class CreateObjectWEST: ctrlTree
						{
							idc = 56;
							y = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							h = "((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) - (	0 + 21 + 	5 + (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
							defaultItem[] = {"BLU_F","EdSubcat_Personnel","B_Soldier_F"};
							sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
							font = "RobotoCondensedLight";
							multiselectEnabled = 0;
							colorBackground[] = {0,0,0,0};
							colorBorder[] = {0,0,0,0};
							ontreeSelChanged = "['place',_this] call bis_fnc_3DENControlsHint;";
							onMouseButtonDown = "['mousebuttondown',_this] call bis_fnc_3DENControlsHint;";
							onMouseButtonUp = "['mousebuttonup',_this] call bis_fnc_3DENControlsHint;";
							disableKeyboardSearch = 1;
						};
						class CreateObjectEAST: CreateObjectWEST
						{
							idc = 57;
							defaultItem[] = {"OPF_F","EdSubcat_Personnel","O_SOldier_F"};
						};
						class CreateObjectGUER: CreateObjectWEST
						{
							idc = 58;
							defaultItem[] = {"IND_F","EdSubcat_Personnel","I_Soldier_F"};
						};
						class CreateObjectCIV: CreateObjectWEST
						{
							idc = 59;
							defaultItem[] = {"CIV_F","EdSubcat_Personnel","C_Man_1"};
						};
						class CreateObjectEMPTY: CreateObjectWEST
						{
							idc = 60;
							defaultItem[] = {"Default"};
							h = "((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) - (	0 + 21 + 	5) * (pixelH * pixelGrid * 	0.50)";
						};
						class CreateGroupWEST: CreateObjectEMPTY
						{
							idc = 61;
							defaultItem[] = {"BLU_F","Infantry","BUS_InfSquad"};
						};
						class CreateGroupEAST: CreateObjectEMPTY
						{
							idc = 62;
							defaultItem[] = {"OPF_F","Infantry","OIA_InfSquad"};
						};
						class CreateGroupGUER: CreateObjectEMPTY
						{
							idc = 63;
							defaultItem[] = {"IND_F","Infantry","HAF_InfSquad"};
						};
						class CreateGroupCIV: CreateObjectEMPTY
						{
							idc = 64;
							defaultItem[] = {};
						};
						class CreateGroupEMPTY: CreateObjectEMPTY
						{
							idc = 65;
							defaultItem[] = {};
						};
						class CreateGroupCUSTOM: CreateObjectWEST
						{
							idc = 71;
							defaultItem[] = {};
						};
						class CreateTrigger: CreateObjectEMPTY
						{
							idc = 68;
							defaultItem[] = {"EmptyDetector"};
							show = 0;
						};
						class CreateWaypoint: CreateObjectEMPTY
						{
							idc = 6900000;
							defaultItem[] = {};
						};
						class CreateObjectLogic: CreateObjectEMPTY
						{
							idc = 66;
							defaultItem[] = {"Objects","Logic"};
						};
						class CreateObjectModule: CreateObjectEMPTY
						{
							idc = 67;
							defaultItem[] = {"Default"};
						};
						class CreateMarkerIcon: CreateObjectEMPTY
						{
							idc = 69;
							defaultItem[] = {"Military","mil_dot"};
						};
						class CreateMarkerArea: CreateObjectEMPTY
						{
							idc = 70;
							defaultItem[] = {"ellipse"};
						};
						class VehiclePanel: ctrlControlsGroupNoScrollbars
						{
							idc = 1062;
							show = 0;
							y = "((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) - (	0 + 14 + 	5 + (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
							class Controls
							{
								class Background: ctrlStatic
								{
									w = "60 * (pixelW * pixelGrid * 	0.50)";
									h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
									colorBackground[] = {0.2,0.2,0.2,1};
								};
								class ToggleEmpty: ctrlCheckbox
								{
									idc = 1063;
									x = "1 * (pixelW * pixelGrid * 	0.50)";
									y = "(pixelH * pixelGrid * 	0.50)";
									w = "5 * (pixelW * pixelGrid * 	0.50)";
									h = "5 * (pixelH * pixelGrid * 	0.50)";
									onCheckedChanged = "do3DENAction 'TogglePlaceEmptyVehicle';";
								};
								class TextEmpty: ctrlStatic
								{
									text = "$STR_3DEN_Display3DEN_VehiclePanel_TextEmpty_text";
									shadow = 0;
									x = "(	5 + 1) * (pixelW * pixelGrid * 	0.50)";
									y = "(pixelH * pixelGrid * 	0.50)";
									w = "(	60 - (	5 + 1)) * (pixelW * pixelGrid * 	0.50)";
									h = "5 * (pixelH * pixelGrid * 	0.50)";
								};
							};
						};
						class CustomCompositionPanel: ctrlControlsGroupNoScrollbars
						{
							idc = 1061;
							show = 0;
							y = "((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) - (	0 + 14 + 	5 + (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
							w = "60 * (pixelW * pixelGrid * 	0.50)";
							h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
							class Controls
							{
								class Background: ctrlStatic
								{
									w = "60 * (pixelW * pixelGrid * 	0.50)";
									h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
									colorBackground[] = {0.2,0.2,0.2,1};
								};
								class Add: ctrlButtonToolbar
								{
									idc = 90;
									text = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\customcomposition_add_ca.paa";
									x = "1 * (pixelW * pixelGrid * 	0.50)";
									y = "(pixelH * pixelGrid * 	0.50)";
									w = "5 * (pixelW * pixelGrid * 	0.50)";
									h = "5 * (pixelH * pixelGrid * 	0.50)";
									tooltip = "$STR_3DEN_Display3DEN_CustomCompositionPanel_Add_tooltip";
									onButtonClick = "do3denaction 'createcustomcomposition';";
								};
								class Edit: Add
								{
									idc = 91;
									text = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\customcomposition_edit_ca.paa";
									x = "(1 * 	5 + 2) * (pixelW * pixelGrid * 	0.50)";
									tooltip = "$STR_3DEN_Display3DEN_CustomCompositionPanel_Edit_tooltip";
									onButtonClick = "do3denaction 'editcustomcomposition';";
								};
								class Publish: Add
								{
									idc = 93;
									text = "\a3\3DEN\Data\Displays\Display3DEN\ToolBar\steam_ca.paa";
									x = "(2 * 	5 + 3) * (pixelW * pixelGrid * 	0.50)";
									tooltip = "$STR_3DEN_Display3DEN_CustomCompositionPanel_Publish_tooltip";
									onLoad = "(_this select 0) ctrlenable false;";
								};
								class Delete: Add
								{
									idc = 92;
									text = "\a3\3DEN\Data\Displays\Display3DEN\PanelLeft\entityList_delete_ca.paa";
									x = "(	60 - 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
									tooltip = "$STR_3DEN_Display3DEN_CustomCompositionPanel_Delete_tooltip";
									onButtonClick = "do3denaction 'deletecustomcomposition';";
								};
							};
						};
					};
				};
			};
		};
		class ButtonOK: ctrlButtonOK
		{
			x = "(0.5 - (0.5 * 	60) * (pixelW * pixelGrid * 	0.50)) + (1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + 	((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) * 0.5 + (pixelH * pixelGrid * 	0.50)";
			w = "(			60 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonCancel: ctrlButtonCancel
		{
			x = "(0.5 - (0.5 * 	60) * (pixelW * pixelGrid * 	0.50)) + (			60 * 0.5 + 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + 	((safezoneH - 8 * 	5 * (pixelW * pixelGrid * 	0.50)) min (		120 * (pixelH * pixelGrid * 	0.50))) * 0.5 + (pixelH * pixelGrid * 	0.50)";
			w = "(			60 * 0.5 - 2) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
};
class Display3DENNew: DisplaySimulated
{
	idd = 316;
	scriptName = "Display3DENNew";
	scriptPath = "3DENDisplays";
	onLoad = "[""onLoad"",_this,""Display3DENNew"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENNew"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	defaultPicture = "\A3\ui_f\data\gui\rsc\rscdisplayselectisland\island_picture_dummy_ca.paa";
	class controlsBackground
	{
		class BackgroundDisable: ctrlStaticBackgroundDisable{};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles{};
		class Background: ctrlStaticBackground
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		120 * 0.5 - 2 * 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			h = "(		120 - 	5 - 10) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundWorld: ctrlStaticOverlay
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		120 * 0.5 - 2 * 	5 - 3) * (pixelH * pixelGrid * 	0.50) - ((		120 - 2) * (pixelH * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelH * pixelGrid * 	0.50)))";
			w = "(		140 - 2) * (pixelW * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			h = "(		120 - 2) * (pixelH * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelH * pixelGrid * 	0.50))";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		120 * 0.5 - 2 * 	5 - 2) * (pixelH * pixelGrid * 	0.50)";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
	};
	class controls
	{
		delete Islands;
		delete B_Editor;
		delete B_OK;
		delete B_Cancel;
		delete B_Wizard;
		class Title: ctrlStaticTitle
		{
			idc = 24691;
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		120 * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			text = "$STR_3DEN_Display3DENNew_Title_text";
		};
		class IslandsBox: ctrlListbox
		{
			idc = 101;
			onLoad = " 				params [""_ctrl""]; 				lbSort _ctrl; 				for ""_i"" from 0 to lbSize _ctrl - 1 do 				{ 					if (_ctrl lbData _i == worldName) exitWith 					{ 						_ctrl lbSetCurSel _i; 					}; 				}; 			";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		120 * 0.5 - 11) * (pixelH * pixelGrid * 	0.50)";
			w = "(		140 - 2) * (pixelW * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			h = "((		120 - 32) * (pixelH * pixelGrid * 	0.50)) - (10 + 2 * 	5 + 3) * (pixelH * pixelGrid * 	0.50)";
		};
		class World: ctrlStaticPicture
		{
			idc = 1001;
			text = "\a3\3DEN\Data\Displays\Display3DENNew\world_ca";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		120 * 0.5 - 2 * 	5 - 3) * (pixelH * pixelGrid * 	0.50) - ((		120 - 2) * (pixelH * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelH * pixelGrid * 	0.50)))";
			w = "(		140 - 2) * (pixelW * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			h = "(		120 - 2) * (pixelH * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelH * pixelGrid * 	0.50))";
			colorText[] = {1,1,1,0.4};
		};
		class WorldLng: ctrlStatic
		{
			idc = 1002;
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		120 * 0.5 - 2 * 	5 - 3) * (pixelH * pixelGrid * 	0.50) - ((		120 - 2) * (pixelH * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelH * pixelGrid * 	0.50)))";
			w = "pixelW";
			h = "(		120 - 2) * (pixelH * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelH * pixelGrid * 	0.50))";
			colorBackground[] = {1,1,1,1};
		};
		class WorldLat: WorldLng
		{
			idc = 1003;
			w = "(		140 - 2) * (pixelW * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			h = "pixelH";
		};
		class NameBackground: ctrlStatic
		{
			idc = 24695;
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5) * (pixelW * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			y = "0.5 - (		120 * 0.5 - 10) * (pixelH * pixelGrid * 	0.50)";
			w = "((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
			colorBackground[] = {0,0,0,1};
		};
		class Name: ctrlStatic
		{
			sizeEx = "5.58 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			shadow = 0;
			idc = 24693;
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5) * (pixelW * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			y = "0.5 - (		120 * 0.5 - 10) * (pixelH * pixelGrid * 	0.50)";
			w = "((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class Author: ctrlStatic
		{
			font = "RobotoCondensedLight";
			sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			shadow = 0;
			idc = 24694;
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5) * (pixelW * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			y = "0.5 - (		120 * 0.5 - 10 - 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			colorText[] = {1,1,1,0.5};
		};
		class IslandPanorama: ctrlStaticPicture
		{
			idc = 24891;
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5) * (pixelW * pixelGrid * 	0.50) - 	((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			y = "0.5 - (		120 * 0.5 - 10 - 2 * 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "((		120 - 32) * (pixelW * pixelGrid * 	0.50))";
			h = "((		120 - 32) * (pixelH * pixelGrid * 	0.50))";
		};
		class ButtonContinue: ctrlButtonOK
		{
			text = "$STR_3DEN_Display3DENNew_ButtonContinue_text";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5 - 55 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		120 * 0.5 - 2 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
			w = "30 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonPurchase: ctrlShortcutButtonSteam
		{
			idc = 107;
			text = "$STR_A3_DLC_SCENARIO_PURCHASE_BUTTON";
			shortcuts[] = {"1024+0x19"};
			show = 0;
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5 - 60 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		120 * 0.5 - 2 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
			w = "35 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonCancel: ctrlButtonCancel
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		120 * 0.5 - 2 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
};
class Display3DENSave
{
	idd = 314;
	scriptName = "Display3DENSave";
	scriptPath = "3DENDisplays";
	onLoad = "[""onLoad"",_this,""Display3DENSave"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENSave"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	enableSimulation = 1;
	enableDisplay = 1;
	textDate = "$STR_3DEN_Display3DENSave_textDate";
	class ContextMenu: ctrlMenu
	{
		colorBackground[] = {0.1,0.1,0.1,1};
		class Items
		{
			items[] = {"New","Delete","Rename"};
			class New
			{
				text = "$STR_3DEN_Display3DENSave_ContextMenu_New_text";
				data = "NewFolder";
				value = 0;
			};
			class Delete
			{
				text = "$STR_3DEN_Delete";
				data = "Delete";
				value = 0;
			};
			class Rename
			{
				text = "$STR_3DEN_Display3DENSave_ContextMenu_Rename_text";
				data = "Rename";
				value = 0;
			};
			class Default
			{
				text = "$STR_3DEN_Display3DEN_MenuBar_Default_text";
				data = "Empty";
				enable = 0;
			};
		};
	};
	class ControlsBackground
	{
		class BackgroundDisable: ctrlStaticBackgroundDisable{};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles{};
		class Background: ctrlStaticBackground
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 10 * (pixelH * pixelGrid * 	0.50)";
			w = "180 * (pixelW * pixelGrid * 	0.50)";
			h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - (10 + 	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundFilter: ctrlStatic
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + (12 + 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "(	180 * 3/4 - 2) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			colorBackground[] = {0,0,0,1};
		};
		class BackgroundFiles: ctrlStaticOverlay
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + (12 + 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "(	180 * 3/4 - 2) * (pixelW * pixelGrid * 	0.50)";
			h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - (23 + 	5 * 3 + 3) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - 2 * (	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			w = "180 * (pixelW * pixelGrid * 	0.50)";
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
	};
	class Controls
	{
		class Dummy: ctrlStatic{};
		class Title: ctrlStaticTitle
		{
			idc = 104;
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 	5 * (pixelH * pixelGrid * 	0.50)";
			w = "180 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			textSave = "$STR_3den_display3den_menubar_missionsaveas_text";
			textLoad = "$STR_3den_display3den_menubar_missionopen_text";
			textMerge = "$STR_3den_display3den_menubar_missionmerge_text";
		};
		class Search: ctrlEdit
		{
			idc = 105;
			x = "((getResolution select 2) * 0.5 * pixelW) + (	180 * 1/4 - 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + (11) * (pixelH * pixelGrid * 	0.50)";
			w = "(	180 / 4) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class SearchButton: ctrlButtonSearch
		{
			idc = 106;
			x = "((getResolution select 2) * 0.5 * pixelW) + (	180 * 1/2 - 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + (11) * (pixelH * pixelGrid * 	0.50)";
			w = "5 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class Folders: ctrlTree
		{
			idc = 101;
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 11 * (pixelH * pixelGrid * 	0.50)";
			w = "(	180 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - (23 + 2 * 	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			font = "EtelkaMonospacePro";
			sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			iconFolder = "\a3\3DEN\Data\Cfg3DEN\Layer\icon_ca.paa";
			iconFolderDefault = "\a3\3DEN\Data\Cfg3DEN\Layer\iconDefault_ca.paa";
		};
		class Files: ctrlListNBox
		{
			idc = 103;
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + (12 + 	5 * 2) * (pixelH * pixelGrid * 	0.50)";
			w = "(	180 * 3/4 - 2) * (pixelW * pixelGrid * 	0.50)";
			h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - (23 + 4 * 	5 + 3) * (pixelH * pixelGrid * 	0.50)";
			columns[] = {0,0.33,0.66};
			font = "EtelkaMonospacePro";
			disableOverflow = 1;
			sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
		};
		class Filter: ctrlListNBox
		{
			idc = 107;
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + (12 + 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "(	180 * 3/4 - 2) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			disableOverflow = 1;
			columns[] = {0,0.33,0.66};
			class Items
			{
				class Name
				{
					text = "$STR_3DEN_Display3DENSave_Filter_Name_text";
					value = -1;
				};
				class Terrain
				{
					text = "$STR_3DEN_Display3DENSave_Filter_Terrain_text";
					value = -1;
				};
				class DateModified
				{
					text = "$STR_3DEN_Display3DENSave_Filter_DateModified_text";
					value = -1;
					data = "value";
				};
			};
		};
		class NameText: ctrlStatic
		{
			style = 1;
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (4 * 	5 + 3) * (pixelH * pixelGrid * 	0.50)";
			w = "(	180 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			text = "$STR_3DEN_Display3DENSave_NameText_text";
		};
		class Name: ctrlEdit
		{
			idc = 102;
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (4 * 	5 + 3) * (pixelH * pixelGrid * 	0.50)";
			w = "(	180 * 3/4 - 2) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			font = "EtelkaMonospacePro";
			sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
		};
		class BinarizeText: ctrlStatic
		{
			idc = 108;
			style = 1;
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (3 * 	5 + 3) * (pixelH * pixelGrid * 	0.50)";
			w = "(	180 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			text = "$STR_3DEN_Scenario_Attribute_Binarize_displayName";
			tooltip = "$STR_3DEN_Scenario_Attribute_Binarize_tooltip";
		};
		class Binarize: ctrlCheckbox
		{
			idc = 109;
			x = "((getResolution select 2) * 0.5 * pixelW) - (	180 * 1/4) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (3 * 	5 + 3) * (pixelH * pixelGrid * 	0.50)";
			w = "5 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			onLoad = "(_this select 0) cbSetChecked (if (missionname == '') then {('preferences' get3DENMissionAttribute 'SaveBinarized')} else {('scenario' get3DENMissionAttribute 'SaveBinarized')});";
		};
		class ButtonOK: ctrlButtonOK
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (	180 * 0.5 - 50 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			textSave = "$STR_3den_display3den_menubar_missionsave_text";
			textLoad = "$STR_3den_display3den_menubar_missionopen_text";
			textImport = "$STR_3DEN_Display3DENSave_ButtonOK_textImport";
			textMerge = "$STR_3den_display3den_menubar_missionmerge_text";
		};
		class ButtonPurchase: ctrlShortcutButtonSteam
		{
			idc = 110;
			text = "$STR_A3_DLC_SCENARIO_PURCHASE_BUTTON";
			shortcuts[] = {"1024+0x19"};
			show = 0;
			x = "((getResolution select 2) * 0.5 * pixelW) + (	180 * 0.5 - 60 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			w = "35 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonCancel: ctrlButtonCancel
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (	180 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
};
class Display3DENRename
{
	idd = 320;
	enableSimulation = 1;
	enableDisplay = 1;
	class Controls
	{
		class Title: ctrlStaticTitle
		{
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)))";
			y = "(	(0.5 - 0.5 * 	30 * (pixelH * pixelGrid * 	0.50)))";
			w = "(	75) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			text = "$STR_3DEN_Display3DENRename_Title_text";
		};
		class Background: ctrlStaticBackground
		{
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)))";
			y = "(	(0.5 - 0.5 * 	30 * (pixelH * pixelGrid * 	0.50))) + 	5 * (pixelH * pixelGrid * 	0.50)";
			w = "(	75) * (pixelW * pixelGrid * 	0.50)";
			h = "(4 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class Name: ctrlEdit
		{
			idc = 101;
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50))) + 	5 * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	30 * (pixelH * pixelGrid * 	0.50))) + (2 *  	5) * (pixelH * pixelGrid * 	0.50)";
			w = "(	75 - 2 * 	5) * (pixelW * pixelGrid * 	0.50)";
			h = "(	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class BottomBackground: ctrlStaticFooter
		{
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)))";
			y = "(	(0.5 - 0.5 * 	30 * (pixelH * pixelGrid * 	0.50))) + (4 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
			w = "(	75) * (pixelW * pixelGrid * 	0.50)";
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonOK: ctrlButtonOK
		{
			x = "(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)) + (	75 * 1/3) * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	30 * (pixelH * pixelGrid * 	0.50))) + (4 * 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "(	75 * 1/3 - 1) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonCancel: ctrlButtonCancel
		{
			x = "(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)) + (	75 * 2/3) * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	30 * (pixelH * pixelGrid * 	0.50))) + (4 * 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "(	75 * 1/3 - 1) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
};
class Display3DENEditComposition: DisplaySimulated
{
	idd = 317;
	scriptName = "Display3DENEditComposition";
	scriptPath = "3DENDisplays";
	onLoad = "[""onLoad"",_this,""Display3DENEditComposition"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENEditComposition"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class ControlsBackground
	{
		class BackgroundDisable: ctrlStaticBackgroundDisable{};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles{};
		class Background: ctrlStaticBackground
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (		100 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		50 * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "100 * (pixelW * pixelGrid * 	0.50)";
			h = "(		50 - 10) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (		100 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		50 * 0.5 - 2 * 	5 - 2) * (pixelH * pixelGrid * 	0.50)";
			w = "100 * (pixelW * pixelGrid * 	0.50)";
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
		class Title: ctrlStaticTitle
		{
			text = "$STR_3DEN_Display3DENEditComposition_Title_text";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		100 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		50 * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "100 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class Content: ctrlControlsGroupNoScrollbars
		{
			idc = 94;
			x = "((getResolution select 2) * 0.5 * pixelW) - (		100 * 0.5 - 	5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		50 * 0.5 - 3 * 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "(		100 - 2 * 	5) * (pixelW * pixelGrid * 	0.50)";
			h = "(		50 - 4 * 	5 - (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class NameLabel: ctrlStatic
				{
					text = "$STR_3DEN_Scenario_Attribute_BriefingName_displayName";
					style = 1;
					x = 0;
					y = 0;
					w = "((		100 - 2 * 	5) * 0.25) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Name: ctrlEdit
				{
					idc = 95;
					x = "((		100 - 2 * 	5) * 0.25) * (pixelW * pixelGrid * 	0.50)";
					y = 0;
					w = "((		100 - 2 * 	5) * 0.75) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
				};
				class AuthorLabel: NameLabel
				{
					text = "$STR_3DEN_Scenario_Attribute_Author_displayName";
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
				class Author: Name
				{
					idc = 96;
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
				class CategoryLabel: NameLabel
				{
					text = "$STR_3DEN_Display3DENEditComposition_CategoryLabel_text";
					y = "2 * (	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
				class Category: ctrlCombo
				{
					idc = 97;
					x = "((		100 - 2 * 	5) * 0.25) * (pixelW * pixelGrid * 	0.50)";
					y = "2 * (	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					w = "((		100 - 2 * 	5) * 0.75) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					onLoad = "						_ctrlCombo = _this select 0;						{							_lbadd = _ctrlCombo lbadd gettext (_x >> 'displayName');							_ctrlCombo lbsetdata [_lbadd,configname _x];							if (_foreachindex == 0) then {_ctrlCombo lbsetvalue [_lbadd,1];};						} foreach configproperties [configfile >> 'CfgEditorSubcategories','isclass _x'];						_ctrlCombo lbsetcursel 0;						lbsort _ctrlCombo;					";
				};
			};
		};
		class ButtonOK: ctrlButtonOK
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (		100 * 0.5 - 55 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		50 * 0.5 - 2 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
			w = "30 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonCancel: ctrlButtonCancel
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (		100 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		50 * 0.5 - 2 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
};
class Display3DENSaveComposition: Display3DENEditComposition
{
	idd = 317;
	scriptName = "Display3DENEditComposition";
	scriptPath = "3DENDisplays";
	onLoad = "[""onLoad"",_this,""Display3DENEditComposition"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENEditComposition"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	textNewComposition = "$STR_3DEN_Display3DENSaveComposition_textNewComposition";
	class ControlsBackground: ControlsBackground
	{
		class BackgroundDisable: BackgroundDisable{};
		class BackgroundDisableTiles: BackgroundDisableTiles{};
		class Background: ctrlStaticBackground
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (		130 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		100 * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "130 * (pixelW * pixelGrid * 	0.50)";
			h = "(		100 - 10) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (		130 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		100 * 0.5 - 2 * 	5 - 2) * (pixelH * pixelGrid * 	0.50)";
			w = "130 * (pixelW * pixelGrid * 	0.50)";
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
		class Title: Title
		{
			text = "$STR_3DEN_Display3DENSaveComposition_Title_text";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		130 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		100 * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "130 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class Content: Content
		{
			idc = 94;
			x = "((getResolution select 2) * 0.5 * pixelW) - (		130 * 0.5 - 		2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		100 * 0.5 - 2 * 	5 - 		2) * (pixelH * pixelGrid * 	0.50)";
			w = "(		130 - 2 * 		2) * (pixelW * pixelGrid * 	0.50)";
			h = "(		100 - 3 * 	5 - 2 * 		2 - (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Compositions: ctrlTree
				{
					idc = 103;
					sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					font = "RobotoCondensedLight";
					x = 0;
					y = 0;
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					h = "(		100 - 3 * 	5 - 2 * 		2 - (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
				};
				class NameLabel: NameLabel
				{
					style = 0;
					x = "(			60 + 		2) * (pixelW * pixelGrid * 	0.50)";
					y = 0;
					w = "60 * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Name: Name
				{
					x = "(			60 + 		2) * (pixelW * pixelGrid * 	0.50)";
					y = "1 * (	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					w = "(		130 - 			60 - 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
				};
				class AuthorLabel: AuthorLabel
				{
					style = 0;
					x = "(			60 + 		2) * (pixelW * pixelGrid * 	0.50)";
					y = "2 * (	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
				class Author: Author
				{
					x = "(			60 + 		2) * (pixelW * pixelGrid * 	0.50)";
					y = "3 * (	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					w = "(		130 - 			60 - 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
				};
				class CategoryLabel: CategoryLabel
				{
					style = 0;
					x = "(			60 + 		2) * (pixelW * pixelGrid * 	0.50)";
					y = "4 * (	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
				class Category: Category
				{
					x = "(			60 + 		2) * (pixelW * pixelGrid * 	0.50)";
					y = "5 * (	5 + 1) * (pixelH * pixelGrid * 	0.50)";
					w = "(		130 - 			60 - 	5 - 1) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class ButtonOK: ButtonOK
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (		130 * 0.5 - 55 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		100 * 0.5 - 2 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
			w = "30 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonCancel: ButtonCancel
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (		130 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		100 * 0.5 - 2 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
};
class Display3DENEditAttributes
{
	idd = 315;
	scriptName = "Display3DENEditAttributes";
	scriptPath = "3DENDisplays";
	onLoad = "[""onLoad"",_this,""Display3DENEditAttributes"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENEditAttributes"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	enableSimulation = 1;
	enableDisplay = 1;
	class ControlsBackground
	{
		class BackgroundDisable: ctrlStaticBackgroundDisable{};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles{};
		class Background: ctrlStaticBackground
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (	140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 10 * (pixelH * pixelGrid * 	0.50)";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			h = "(	safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - (	5 + 10) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (	140 * 0.5 - 1*0) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "(	140) * (pixelW * pixelGrid * 	0.50)";
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
		class Title: ctrlStaticTitle
		{
			idc = 200;
			x = "((getResolution select 2) * 0.5 * pixelW) - (	140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 	5 * (pixelH * pixelGrid * 	0.50)";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			text = "$STR_3DEN_Display3DENEditAttributes_Title_text";
		};
		class AttributeCategories: ctrlControlsGroup
		{
			idc = 201;
			x = "((getResolution select 2) * 0.5 * pixelW) - (	140 * 0.5 - 1*0) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 11 * (pixelH * pixelGrid * 	0.50) + pixelH";
			w = "(	140 - 2*0) * (pixelW * pixelGrid * 	0.50)";
			h = "(	safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - (2 * 	5 + 10 + 3) * (pixelH * pixelGrid * 	0.50)";
			class Controls{};
		};
		class ButtonOK: ctrlButtonOK
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (	140 * 0.5 - 50 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			onButtonDown = "ctrlsetfocus (_this select 0);";
		};
		class ButtonCancel: ctrlButtonCancel
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (	140 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
	class Controls{};
	class AttributeCategory: ctrlControlsGroupNoScrollbars
	{
		y = "2 * pixelH";
		w = "(	140 - 1) * (pixelW * pixelGrid * 	0.50)";
		class Controls
		{
			class Minimize: ctrlCheckbox
			{
				x = "0 * (pixelW * pixelGrid * 	0.50)";
				y = 0;
				w = "5 * (pixelW * pixelGrid * 	0.50)";
				h = "5 * (pixelH * pixelGrid * 	0.50)";
				textureChecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureChecked_ca.paa";
				textureUnchecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureUnchecked_ca.paa";
				textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureChecked_ca.paa";
				textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureUnchecked_ca.paa";
				textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureChecked_ca.paa";
				textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureUnchecked_ca.paa";
				texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureChecked_ca.paa";
				texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureUnchecked_ca.paa";
				textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureChecked_ca.paa";
				textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureUnchecked_ca.paa";
				color[] = {1,1,1,0.5};
				colorFocused[] = {1,1,1,0.5};
				colorHover[] = {1,1,1,0.5};
				colorPressed[] = {1,1,1,0.5};
				colorDisabled[] = {1,1,1,0.5};
			};
			class Title: ctrlButton
			{
				x = "5 * (pixelW * pixelGrid * 	0.50)";
				y = "pixelH";
				w = "(	140 - 	5 - 3) * (pixelW * pixelGrid * 	0.50)";
				h = "5 * (pixelH * pixelGrid * 	0.50)";
				style = "0x10 + 0x200";
				font = "RobotoCondensedLight";
				sizeEx = "4.32 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				colorText[] = {1,1,1,0.5};
				colorBackground[] = {0.2,0.2,0.2,1};
				colorFocused[] = {0.2,0.2,0.2,1};
				colorBackgroundActive[] = {0.2,0.2,0.2,1};
				colorShadow[] = {1,1,1,0.5};
				offsetX = 0;
				offsetY = "-pixelH";
				offsetPressedX = 0;
				offsetPressedY = 0;
			};
			class Attributes: ctrlControlsGroupNoScrollbars
			{
				y = "4 * (pixelH * pixelGrid * 	0.50) + 8 * pixelH";
				w = "(	140 - 5) * (pixelW * pixelGrid * 	0.50)";
				class Controls{};
			};
		};
		class AttributeOverlay: ctrlControlsGroupNoScrollbars
		{
			y = "4 * pixelH";
			class Controls
			{
				class AttributeOverlay: ctrlStatic
				{
					style = 2;
					colorBackground[] = {0.2,0.2,0.2,0.9};
				};
				class AttributeEnable: ctrlCheckbox
				{
					w = "5 * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					tooltip = "$STR_3DEN_Display3DENEditAttributes_AttributeEnable_tooltip";
				};
			};
		};
	};
};
class Display3DENEditAttributesIntel
{
	idd = 315;
	scriptName = "Display3DENEditAttributes";
	scriptPath = "3DENDisplays";
	onLoad = "[""onLoad"",_this,""Display3DENEditAttributes"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENEditAttributes"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	enableSimulation = 1;
	enableDisplay = 1;
	class ControlsBackground
	{
		class Background: ctrlStaticBackground
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (	140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	(safezoneH * 0.56) min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 10 * (pixelH * pixelGrid * 	0.50)";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			h = "(	(safezoneH * 0.56) min (	180 * (pixelH * pixelGrid * 	0.50))) - (	5 + 10) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (	140 * 0.5 - 1*0) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	(safezoneH * 0.56) min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "(	140) * (pixelW * pixelGrid * 	0.50)";
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
		class Title: ctrlStaticTitle
		{
			idc = 200;
			x = "((getResolution select 2) * 0.5 * pixelW) - (	140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	(safezoneH * 0.56) min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 	5 * (pixelH * pixelGrid * 	0.50)";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			text = "$STR_3DEN_Display3DENEditAttributes_Title_text";
		};
		class AttributeCategories: ctrlControlsGroup
		{
			idc = 201;
			x = "((getResolution select 2) * 0.5 * pixelW) - (	140 * 0.5 - 1*0) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	(safezoneH * 0.56) min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 11 * (pixelH * pixelGrid * 	0.50) + pixelH";
			w = "(	140 - 2*0) * (pixelW * pixelGrid * 	0.50)";
			h = "(	(safezoneH * 0.56) min (	180 * (pixelH * pixelGrid * 	0.50))) - (2 * 	5 + 10 + 3) * (pixelH * pixelGrid * 	0.50)";
			class Controls{};
		};
		class ButtonOK: ctrlButtonOK
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (	140 * 0.5 - 50 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	(safezoneH * 0.56) min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			onButtonDown = "ctrlsetfocus (_this select 0);";
		};
		class ButtonCancel: ctrlButtonCancel
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (	140 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	(safezoneH * 0.56) min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
	class Controls{};
	class AttributeCategory: ctrlControlsGroupNoScrollbars
	{
		y = "2 * pixelH";
		w = "(	140 - 1) * (pixelW * pixelGrid * 	0.50)";
		class Controls
		{
			class Minimize: ctrlCheckbox
			{
				x = "0 * (pixelW * pixelGrid * 	0.50)";
				y = 0;
				w = "5 * (pixelW * pixelGrid * 	0.50)";
				h = "5 * (pixelH * pixelGrid * 	0.50)";
				textureChecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureChecked_ca.paa";
				textureUnchecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureUnchecked_ca.paa";
				textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureChecked_ca.paa";
				textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureUnchecked_ca.paa";
				textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureChecked_ca.paa";
				textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureUnchecked_ca.paa";
				texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureChecked_ca.paa";
				texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureUnchecked_ca.paa";
				textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureChecked_ca.paa";
				textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureUnchecked_ca.paa";
				color[] = {1,1,1,0.5};
				colorFocused[] = {1,1,1,0.5};
				colorHover[] = {1,1,1,0.5};
				colorPressed[] = {1,1,1,0.5};
				colorDisabled[] = {1,1,1,0.5};
			};
			class Title: ctrlButton
			{
				x = "5 * (pixelW * pixelGrid * 	0.50)";
				y = "pixelH";
				w = "(	140 - 	5 - 3) * (pixelW * pixelGrid * 	0.50)";
				h = "5 * (pixelH * pixelGrid * 	0.50)";
				style = "0x10 + 0x200";
				font = "RobotoCondensedLight";
				sizeEx = "4.32 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				colorText[] = {1,1,1,0.5};
				colorBackground[] = {0.2,0.2,0.2,1};
				colorFocused[] = {0.2,0.2,0.2,1};
				colorBackgroundActive[] = {0.2,0.2,0.2,1};
				colorShadow[] = {1,1,1,0.5};
				offsetX = 0;
				offsetY = "-pixelH";
				offsetPressedX = 0;
				offsetPressedY = 0;
			};
			class Attributes: ctrlControlsGroupNoScrollbars
			{
				y = "4 * (pixelH * pixelGrid * 	0.50) + 8 * pixelH";
				w = "(	140 - 5) * (pixelW * pixelGrid * 	0.50)";
				class Controls{};
			};
		};
		class AttributeOverlay: ctrlControlsGroupNoScrollbars
		{
			y = "4 * pixelH";
			class Controls
			{
				class AttributeOverlay: ctrlStatic
				{
					style = 2;
					colorBackground[] = {0.2,0.2,0.2,0.9};
				};
				class AttributeEnable: ctrlCheckbox
				{
					w = "5 * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					tooltip = "$STR_3DEN_Display3DENEditAttributes_AttributeEnable_tooltip";
				};
			};
		};
	};
};
class Display3DENEditAttributesPreview
{
	idd = 315;
	scriptName = "Display3DENEditAttributes";
	scriptPath = "3DENDisplays";
	onLoad = "[""onLoad"",_this,""Display3DENEditAttributes"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENEditAttributes"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	enableSimulation = 1;
	enableDisplay = 1;
	class ControlsBackground
	{
		class Background: ctrlStaticBackground
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (	120 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	(safezoneH * 0.56) min (	65 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 10 * (pixelH * pixelGrid * 	0.50)";
			w = "120 * (pixelW * pixelGrid * 	0.50)";
			h = "(	(safezoneH * 0.56) min (	65 * (pixelH * pixelGrid * 	0.50))) - (	5 + 10) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (	120 * 0.5 - 1*0) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	(safezoneH * 0.56) min (	65 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "(	120) * (pixelW * pixelGrid * 	0.50)";
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
		class Title: ctrlStaticTitle
		{
			idc = 200;
			x = "((getResolution select 2) * 0.5 * pixelW) - (	120 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	(safezoneH * 0.56) min (	65 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 	5 * (pixelH * pixelGrid * 	0.50)";
			w = "120 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			text = "$STR_3DEN_Display3DENEditAttributes_Title_text";
		};
		class AttributeCategories: ctrlControlsGroup
		{
			idc = 201;
			x = "((getResolution select 2) * 0.5 * pixelW) - (	120 * 0.5 - 1*0) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	(safezoneH * 0.56) min (	65 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 11 * (pixelH * pixelGrid * 	0.50) + pixelH";
			w = "(	120 - 2*0) * (pixelW * pixelGrid * 	0.50)";
			h = "(	(safezoneH * 0.56) min (	65 * (pixelH * pixelGrid * 	0.50))) - (2 * 	5 + 10 + 3) * (pixelH * pixelGrid * 	0.50)";
			class Controls{};
		};
		class ButtonOK: ctrlButtonOK
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (	120 * 0.5 - 50 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	(safezoneH * 0.56) min (	65 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			onButtonDown = "ctrlsetfocus (_this select 0);";
		};
		class ButtonCancel: ctrlButtonCancel
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (	120 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	(safezoneH * 0.56) min (	65 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
	class Controls{};
	class AttributeCategory: ctrlControlsGroupNoScrollbars
	{
		y = "2 * pixelH";
		w = "(	120 - 1) * (pixelW * pixelGrid * 	0.50)";
		class Controls
		{
			class Minimize: ctrlCheckbox
			{
				x = "0 * (pixelW * pixelGrid * 	0.50)";
				y = 0;
				w = "5 * (pixelW * pixelGrid * 	0.50)";
				h = "5 * (pixelH * pixelGrid * 	0.50)";
				textureChecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureChecked_ca.paa";
				textureUnchecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureUnchecked_ca.paa";
				textureFocusedChecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureChecked_ca.paa";
				textureFocusedUnchecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureUnchecked_ca.paa";
				textureHoverChecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureChecked_ca.paa";
				textureHoverUnchecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureUnchecked_ca.paa";
				texturePressedChecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureChecked_ca.paa";
				texturePressedUnchecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureUnchecked_ca.paa";
				textureDisabledChecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureChecked_ca.paa";
				textureDisabledUnchecked = "\a3\3DEN\Data\Displays\Display3DENEditAttributes\textureUnchecked_ca.paa";
				color[] = {1,1,1,0.5};
				colorFocused[] = {1,1,1,0.5};
				colorHover[] = {1,1,1,0.5};
				colorPressed[] = {1,1,1,0.5};
				colorDisabled[] = {1,1,1,0.5};
			};
			class Title: ctrlButton
			{
				x = "5 * (pixelW * pixelGrid * 	0.50)";
				y = "pixelH";
				w = "(	120 - 	5 - 3) * (pixelW * pixelGrid * 	0.50)";
				h = "5 * (pixelH * pixelGrid * 	0.50)";
				style = "0x10 + 0x200";
				font = "RobotoCondensedLight";
				sizeEx = "4.32 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				colorText[] = {1,1,1,0.5};
				colorBackground[] = {0.2,0.2,0.2,1};
				colorFocused[] = {0.2,0.2,0.2,1};
				colorBackgroundActive[] = {0.2,0.2,0.2,1};
				colorShadow[] = {1,1,1,0.5};
				offsetX = 0;
				offsetY = "-pixelH";
				offsetPressedX = 0;
				offsetPressedY = 0;
			};
			class Attributes: ctrlControlsGroupNoScrollbars
			{
				y = "4 * (pixelH * pixelGrid * 	0.50) + 8 * pixelH";
				w = "(	120 - 5) * (pixelW * pixelGrid * 	0.50)";
				class Controls{};
			};
		};
		class AttributeOverlay: ctrlControlsGroupNoScrollbars
		{
			y = "4 * pixelH";
			class Controls
			{
				class AttributeOverlay: ctrlStatic
				{
					style = 2;
					colorBackground[] = {0.2,0.2,0.2,0.9};
				};
				class AttributeEnable: ctrlCheckbox
				{
					w = "5 * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					tooltip = "$STR_3DEN_Display3DENEditAttributes_AttributeEnable_tooltip";
				};
			};
		};
	};
};
class Display3DENUpdates: DisplaySimulated
{
	idd = 330;
	scriptName = "Display3DENUpdates";
	scriptPath = "3DENDisplays";
	onLoad = "[""onLoad"",_this,""Display3DENUpdates"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENUpdates"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class ControlsBackground
	{
		class BackgroundDisable: ctrlStaticBackgroundDisable{};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles{};
		class Background: ctrlStaticBackground
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 10 * (pixelH * pixelGrid * 	0.50)";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - (10 + 	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
	};
	class Controls
	{
		class Title: ctrlStaticTitle
		{
			idc = 200;
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 	5 * (pixelH * pixelGrid * 	0.50)";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			text = "$STR_3DEN_Display3DENUpdates_Title_text";
		};
		class List: ctrlXListbox
		{
			idc = 201;
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 11 * (pixelH * pixelGrid * 	0.50)";
			w = "(		140 - 2) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			cycle = 0;
		};
		class Group: ctrlControlsGroup
		{
			idc = 202;
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + (12 + 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "(		140 - 2) * (pixelW * pixelGrid * 	0.50)";
			h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - (25 + 	5) * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class Content: ctrlStructuredText
				{
					idc = 203;
					w = "(		140 - 3) * (pixelW * pixelGrid * 	0.50)";
					h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - 24 * (pixelH * pixelGrid * 	0.50)";
					size = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					colorBackground[] = {1,1,1,1};
					shadow = 0;
					class Attributes: Attributes
					{
						color = "#000000";
						font = "RobotoCondensedLight";
					};
				};
			};
		};
		class ButtonClose: ctrlButtonClose
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
};
class Display3DENCopy: DisplaySimulated
{
	idd = 319;
	scriptName = "Display3DENCopy";
	scriptPath = "3DENDisplays";
	onLoad = "[""onLoad"",_this,""Display3DENCopy"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENCopy"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class ControlsBackground
	{
		class BackgroundDisable: ctrlStaticBackgroundDisable{};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles{};
		class Background: ctrlStaticBackground
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 10 * (pixelH * pixelGrid * 	0.50)";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - (10 + 	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
	};
	class Controls
	{
		class Title: ctrlStaticTitle
		{
			idc = 200;
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 	5 * (pixelH * pixelGrid * 	0.50)";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class Group: ctrlControlsGroup
		{
			idc = 201;
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 11 * (pixelH * pixelGrid * 	0.50)";
			w = "(		140 - 2) * (pixelW * pixelGrid * 	0.50)";
			h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - 23 * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class Edit: ctrlEditMulti
				{
					idc = 202;
					w = "(		140 - 2) * (pixelW * pixelGrid * 	0.50)";
					h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - 23 * (pixelH * pixelGrid * 	0.50)";
					sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					font = "EtelkaMonospacePro";
					canModify = 0;
				};
				class EditFake: ctrlStructuredText
				{
					idc = 203;
					w = "(		140 - 2) * (pixelW * pixelGrid * 	0.50)";
					h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - 23 * (pixelH * pixelGrid * 	0.50)";
					size = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					show = 0;
					class Attributes: Attributes
					{
						font = "EtelkaMonospacePro";
					};
				};
			};
		};
		class ButtonCopy: ctrlButton
		{
			idc = 204;
			text = "$STR_3DEN_Display3DENCopy_ButtonCopy_text";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5 - 50 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			onButtonClick = "				_display = ctrlparent (_this select 0);				copytoclipboard ctrltext (_display displayctrl 202);			";
		};
		class ButtonClose: ctrlButtonClose
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
};
class RscDisplayHostSettings;
class display3DENHostSettings: RscDisplayHostSettings
{
	idd = "IDD_HOST_SETTINGS";
};
class Display3DENTutorial: DisplaySimulated
{
	idd = 318;
	scriptName = "Display3DENTutorial";
	scriptPath = "3DENDisplays";
	onLoad = "[""onLoad"",_this,""Display3DENTutorial"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENTutorial"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	picture = "#(argb,8,8,3)color(0,0,0,0)";
	pictureCompleted = "\a3\3DEN\Data\Displays\Display3DENTutorial\pictureCompleted_ca.paa";
	class ControlsBackground
	{
		class BackgroundDisable: ctrlStaticBackgroundDisable{};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles{};
		class Background: ctrlStaticBackground
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 10 * (pixelH * pixelGrid * 	0.50)";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - (10 + 	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
	};
	class Controls
	{
		class Title: ctrlStaticTitle
		{
			idc = 200;
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 	5 * (pixelH * pixelGrid * 	0.50)";
			w = "140 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			text = "$STR_3DEN_Display3DENTutorial_Title_text";
		};
		class List: ctrlTree
		{
			idc = 201;
			x = "((getResolution select 2) * 0.5 * pixelW) - (		140 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 + 11 * (pixelH * pixelGrid * 	0.50)";
			w = "(		140 - 2) * (pixelW * pixelGrid * 	0.50)";
			h = "(safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) - 23 * (pixelH * pixelGrid * 	0.50)";
			sizeEx = "5.58 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			colorBorder[] = {0,0,0,0};
			colorBackground[] = {0,0,0,0.5};
			font = "RobotoCondensedLight";
		};
		class ButtonBegin: ctrlButtonOK
		{
			text = "$STR_3DEN_Display3DENTutorial_ButtonBegin_text";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5 - 50 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonClose: ctrlButtonClose
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (		140 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (safezoneH min (	180 * (pixelH * pixelGrid * 	0.50))) * 0.5 - (2 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
};
class display3DENMsgBox
{
	idd = -1;
	movingEnable = 2;
	onKeyDown = "if ((_this select 1) == 0x2E && (_this select 3)) then {copytoclipboard ctrltext ((_this select 0) displayctrl 101);};";
	class Top
	{
		class Title: ctrlStaticTitle
		{
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)))";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50)))";
			w = "(	75) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
	class Middle
	{
		class Background: ctrlStaticBackground
		{
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)))";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + 	5 * (pixelH * pixelGrid * 	0.50)";
			w = "(	75) * (pixelW * pixelGrid * 	0.50)";
			h = "(3 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class Picture: ctrlStaticPictureKeepAspect
		{
			text = "\a3\3DEN\Data\Displays\Display3DENMsgBox\picture_ca.paa";
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50))) + (2) * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + (	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "10 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class Text: ctrlStructuredText
		{
			idc = 101;
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50))) + (	5 + 8) * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + (2 *  	5) * (pixelH * pixelGrid * 	0.50)";
			w = "(	75 - 2 * 	5 - 8) * (pixelW * pixelGrid * 	0.50)";
		};
	};
	class Bottom
	{
		class BottomBackground: ctrlStaticFooter
		{
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)))";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + (3 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
			w = "(	75) * (pixelW * pixelGrid * 	0.50)";
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonOK: ctrlButtonOK
		{
			x = "(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)) + (	75 * 1/3) * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + (3 * 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "(	75 * 1/3 - 1) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonCancel: ctrlButtonCancel
		{
			x = "(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)) + (	75 * 2/3) * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + (3 * 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "(	75 * 1/3 - 1) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
	class Controls
	{
		class Title: ctrlStaticTitle
		{
			idc = 102;
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)))";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50)))";
			w = "(	75) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class Background: ctrlStaticBackground
		{
			idc = 103;
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)))";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + 	5 * (pixelH * pixelGrid * 	0.50)";
			w = "(	75) * (pixelW * pixelGrid * 	0.50)";
			h = "(3 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
		};
		class Picture: ctrlStaticPictureKeepAspect
		{
			idc = 104;
			text = "\a3\3DEN\Data\Displays\Display3DENMsgBox\picture_ca.paa";
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50))) + (2) * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + (	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			w = "10 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class Text: ctrlStructuredText
		{
			idc = 101;
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50))) + (	5 + 8) * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + (2 *  	5) * (pixelH * pixelGrid * 	0.50)";
			w = "(	75 - 2 * 	5 - 8) * (pixelW * pixelGrid * 	0.50)";
		};
		class BottomBackground: ctrlStaticFooter
		{
			idc = 105;
			x = "(	(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)))";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + (3 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
			w = "(	75) * (pixelW * pixelGrid * 	0.50)";
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonOK: ctrlButtonOK
		{
			x = "(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)) + (	75 * 1/3) * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + (3 * 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "(	75 * 1/3 - 1) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonCancel: ctrlButtonCancel
		{
			x = "(0.5 - 0.5 * 	75 * (pixelW * pixelGrid * 	0.50)) + (	75 * 2/3) * (pixelW * pixelGrid * 	0.50)";
			y = "(	(0.5 - 0.5 * 	25 * (pixelH * pixelGrid * 	0.50))) + (3 * 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "(	75 * 1/3 - 1) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
};
class display3DENPublishMission
{
	idd = 165;
	class ControlsBackground
	{
		class BackgroundDisable: ctrlStaticBackgroundDisable{};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles{};
		class Background: ctrlStaticBackground
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		(120) * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "180 * (pixelW * pixelGrid * 	0.50)";
			h = "(		(120) - (2 * 	5)) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		(120) * 0.5 - (2 * 	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			w = "180 * (pixelW * pixelGrid * 	0.50)";
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
	};
	class Controls
	{
		class Title: ctrlStaticTitle
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		(120) * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "180 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			text = "$STR_A3_RscDisplayPublishMission_Title";
		};
		class Scenarios: ctrlListbox
		{
			idc = 105;
			x = "((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		(120) * 0.5 - 12) * (pixelH * pixelGrid * 	0.50)";
			w = "(		180 - 6) * (pixelW * pixelGrid * 	0.50) - 		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50))";
			h = "(		(120) - 28 - 2 * 	5) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonDeleteDummy: ctrlShortcutButton
		{
			text = "$STR_A3_RscDisplayPublishMission_ButtonDelete";
			tooltip = "$STR_A3_RscDisplayPublishMission_ButtonDelete_tooltip";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		(120) * 0.5 - (4 * 	5 + 4.5)) * (pixelH * pixelGrid * 	0.50)";
			w = "(		180 - 6) * (pixelW * pixelGrid * 	0.50) - 		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50))";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			onLoad = "(_this select 0) ctrlenable false;";
		};
		class ButtonDelete: ctrlShortcutButton
		{
			idc = 114;
			text = "$STR_A3_RscDisplayPublishMission_ButtonDelete";
			tooltip = "$STR_A3_RscDisplayPublishMission_ButtonDelete_tooltip";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		(120) * 0.5 - (4 * 	5 + 4.5)) * (pixelH * pixelGrid * 	0.50)";
			w = "(		180 - 6) * (pixelW * pixelGrid * 	0.50) - 		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50))";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class StorageQuota: ctrlStatic
		{
			idc = 111;
			style = 2;
			x = "((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		(120) * 0.5 - (3 * 	5 + 3)) * (pixelH * pixelGrid * 	0.50)";
			w = "(		180 - 6) * (pixelW * pixelGrid * 	0.50) - 		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50))";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			onLoad = "(_this select 0) ctrlenable false;";
		};
		class Storage: ctrlProgress
		{
			idc = 120;
			x = "((getResolution select 2) * 0.5 * pixelW) - (		180 * 0.5 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		(120) * 0.5 - (3 * 	5 + 3)) * (pixelH * pixelGrid * 	0.50)";
			w = "(		180 - 6) * (pixelW * pixelGrid * 	0.50) - 		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50))";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			texture = "";
			textureExt = "";
			colorBar[] = {1,1,1,1};
			colorExtBar[] = {1,1,1,1};
			colorFrame[] = {0.5,0.5,0.5,0.5};
			colorBackground[] = {0.5,0.5,0.5,0.5};
		};
		class Area: ctrlControlsGroupNoScrollbars
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (		180 * 0.5 - 2) * (pixelW * pixelGrid * 	0.50) - 		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50))";
			y = "0.5 - (		(120) * 0.5 - 12) * (pixelH * pixelGrid * 	0.50)";
			w = "((		180 * 0.7) * (pixelW * pixelGrid * 	0.50))";
			h = "(		(120) - 24) * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class NameLabel: ctrlStatic
				{
					text = "$STR_A3_RscDisplayPublishMission_TextName";
					style = 1;
					colorBackground[] = {0,0,0,0};
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
					y = "((0) * 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.25))";
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
				};
				class Name: ctrlEdit
				{
					idc = 101;
					maxChars = 45;
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.25))";
					y = "((0) * 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (	0.75))";
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
				};
				class VisibilityLabel: NameLabel
				{
					text = "$STR_A3_RscDisplayPublishMission_TextVisibility";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
					y = "((1.25) * 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.25))";
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
				};
				class Visibility: ctrlCombo
				{
					idc = 106;
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.25))";
					y = "((1.25) * 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (	0.75))";
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
				};
				class DescriptionLabel: ctrlStaticOverlay
				{
					text = "$STR_A3_RscDisplayPublishMission_TextDescription";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
					y = "((2.5) * 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.65))";
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
				};
				class Description: ctrlEditMulti
				{
					idc = 104;
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
					y = "((3.5) * 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.65))";
					h = "5 * (8.5) * (pixelH * pixelGrid * 	0.50)";
				};
				class TagsLabel: ctrlStaticOverlay
				{
					text = "$STR_A3_RscDisplayPublishMission_TextTags";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		(		0.65 + 0.01)))";
					y = "((2.5) * 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.34))";
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
				};
				class Tags: ctrlEditMulti
				{
					idc = 102;
					canModify = 0;
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		(		0.65 + 0.01)))";
					y = "((3.5) * 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.34))";
					h = "5 * (7.5) * (pixelH * pixelGrid * 	0.50)";
					onLoad = "(_this select 0) ctrlenable false;";
				};
				class TagsButton: ctrlButton
				{
					idc = 115;
					text = "$STR_A3_RscDisplayPublishMission_ButtonEditTags";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		(		0.65 + 0.01)))";
					y = "((11) * 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.34))";
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
				};
				class ChangeNoteLabel: ctrlStaticOverlay
				{
					text = "$STR_A3_RscDisplayPublishMission_TextChangeNotes";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
					y = "((12.25) * 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.65))";
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
				};
				class ChangeNoteDummyFrame: ctrlEditMulti
				{
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
					y = "((13.25) * 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.65))";
					h = "5 * (4.5) * (pixelH * pixelGrid * 	0.50)";
					onLoad = "(_this select 0) ctrlenable false;";
				};
				class ChangeNoteDummy: ctrlStatic
				{
					text = "$STR_a3_rscdisplaypublishmission_textchangenotesdisabled";
					style = "0x02 + 0x10 + 0x200";
					colorText[] = {1,1,1,0.25};
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
					y = "((14.5) * 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.65))";
					h = "5 * (3.25) * (pixelH * pixelGrid * 	0.50)";
				};
				class ChangeNoteGroup: ctrlControlsGroupNoScrollbars
				{
					idc = 121;
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
					y = "((13.25) * 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.65))";
					h = "5 * (4.5) * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class ChangeNoteBackground: ctrlStaticBackground
						{
							x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
							y = "((0) * 	5) * (pixelH * pixelGrid * 	0.50)";
							w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.65))";
							h = "5 * (4.5) * (pixelH * pixelGrid * 	0.50)";
						};
						class ChangeNote: ctrlEditMulti
						{
							idc = 107;
							x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
							y = "((0) * 	5) * (pixelH * pixelGrid * 	0.50)";
							w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.65))";
							h = "5 * (4.5) * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
				class Image: ctrlStaticPictureKeepAspect
				{
					idc = 108;
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		(		0.65 + 0.01)))";
					y = "((12.25) * 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.34))";
					h = "5 * (4.5) * (pixelH * pixelGrid * 	0.50)";
				};
				class ImageDefault: ctrlButton
				{
					idc = 119;
					text = "$STR_A3_RscDisplayPublishMission_ButtonDefaultImage";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		(		0.65 + 0.01)))";
					y = "((16.75) * 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.34 * 0.5))";
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
				};
				class ImageSelect: ctrlButton
				{
					idc = 118;
					text = "$STR_A3_RscDisplayPublishMission_ButtonSelectImage";
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		(		0.65 + 0.01) + 		0.34 * 0.51))";
					y = "((16.75) * 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (		0.34 * 0.49))";
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
				};
				class LicenseBackground: ctrlStatic
				{
					idc = 1001;
					colorBackground[] = {0,0,0,0.25};
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
					y = "((18) * 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (1))";
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
				};
				class LicenseLabel: ctrlStatic
				{
					style = 1;
					text = "$STR_A3_RscDisplayPublishMission_TextLicence";
					shadow = 1;
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0))";
					y = "((18) * 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0.6))";
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
				};
				class License: ctrlActiveText
				{
					idc = 117;
					text = "$STR_A3_RscDisplayPublishMission_ButtonLicence";
					tooltip = "$STR_A3_RscDisplayPublishMission_ButtonLicence_tooltip";
					shadow = 2;
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0.6))";
					y = "((18) * 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0.4))";
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
					onLoad = "(_this select 0) ctrlsettext (ctrltext (_this select 0) + '?');";
				};
				class LicenseCheckboxImage: ctrlCheckbox
				{
					idc = 1002;
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0.96))";
					y = "((18) * 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0.04))";
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
					onLoad = "(_this select 0) ctrlenable false;";
					colorDisabled[] = {1,1,1,1};
				};
				class LicenseCheckbox: ctrlCheckboxesCheckbox
				{
					idc = 109;
					x = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0.96))";
					y = "((18) * 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(		((		180 * 0.7) * (pixelW * pixelGrid * 	0.50)) * (0.04))";
					h = "5 * (1) * (pixelH * pixelGrid * 	0.50)";
					strings[] = {"#(argb,8,8,3)color(0,0,0,0)"};
					checked_strings[] = {"#(argb,8,8,3)color(0,0,0,0)"};
					onCheckBoxesSelChanged = "						(ctrlparent (_this select 0) displayctrl 1002) cbsetchecked ([false,true] select (_this select 2));						(ctrlparent (_this select 0) displayctrl 1001) ctrlsetbackgroundcolor ([[0,0,0,0.25],[0.5,1,0,0.15]] select (_this select 2));					";
				};
			};
		};
		class ButtonPublish: ctrlShortcutButtonOK
		{
			idc = 112;
			text = "$STR_A3_RscDisplayPublishMission_ButtonDoPublish";
			tooltip = "$STR_A3_RscDisplayPublishMission_ButtonDoPublish_tooltip";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		180 * 0.5 - 50 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		(120) * 0.5 - (2 * 	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonUpdate: ButtonPublish
		{
			idc = 113;
			text = "$STR_A3_RscDisplayPublishMission_ButtonDoUpdate";
			tooltip = "$STR_A3_RscDisplayPublishMission_ButtonDoUpdate_tooltip";
			y = "0.5 + (		(120) * 0.5 - (2 * 	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
		};
		class ButtonCancel: ctrlShortcutButtonCancel
		{
			tooltip = "$STR_A3_RscDisplayPublishMission_ButtonCancel_tooltip";
			x = "((getResolution select 2) * 0.5 * pixelW) + (		180 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		(120) * 0.5 - (2 * 	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
};
class display3DENPublishMissionSelectImage
{
	idd = 167;
	class ControlsBackground
	{
		class BackgroundDisable: ctrlStaticBackgroundDisable{};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles{};
		class Background: ctrlStaticBackground
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (	160 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	100 * 0.5 - 10) * (pixelH * pixelGrid * 	0.50)";
			w = "160 * (pixelW * pixelGrid * 	0.50)";
			h = "(	100 - (10 + 	5)) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundPreview: ctrlStatic
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (	160 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	100 * 0.5 - 11) * (pixelH * pixelGrid * 	0.50)";
			w = "(	160 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			h = "(	100 - (23 + 	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			colorBackground[] = {0,0,0,1};
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (	160 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	100 * 0.5 - 2 * (	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
			w = "160 * (pixelW * pixelGrid * 	0.50)";
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
	};
	class Controls
	{
		class Title: ctrlStaticTitle
		{
			text = "$STR_A3_RscDisplayFileSelectImage_Title";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	160 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	100 * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "160 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class Folders: ctrlTree
		{
			idc = 102;
			x = "((getResolution select 2) * 0.5 * pixelW) - (	160 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	100 * 0.5 - 11) * (pixelH * pixelGrid * 	0.50)";
			w = "(	160 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			h = "(	100 - (23 + 	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			font = "EtelkaMonospacePro";
			sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			iconFolder = "\a3\3DEN\Data\Cfg3DEN\Layer\icon_ca.paa";
			iconFolderDefault = "\a3\3DEN\Data\Cfg3DEN\Layer\iconDefault_ca.paa";
		};
		class Files: ctrlListbox
		{
			idc = 103;
			x = "((getResolution select 2) * 0.5 * pixelW) - (	160 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	100 * 0.5 - 11) * (pixelH * pixelGrid * 	0.50)";
			w = "(	160 * 2/4 - 2) * (pixelW * pixelGrid * 	0.50)";
			h = "(	100 - (23 + 	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			font = "EtelkaMonospacePro";
			sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
		};
		class Preview: ctrlStaticPictureKeepAspect
		{
			idc = 104;
			x = "((getResolution select 2) * 0.5 * pixelW) + (	160 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	100 * 0.5 - 11) * (pixelH * pixelGrid * 	0.50)";
			w = "(	160 * 1/4 - 1) * (pixelW * pixelGrid * 	0.50)";
			h = "(	100 - (23 + 	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
		};
		class Name: ctrlStaticMulti
		{
			idc = 101;
			x = "((getResolution select 2) * 0.5 * pixelW) - (	160 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	100 * 0.5 - (3 * 	5 + 3)) * (pixelH * pixelGrid * 	0.50)";
			w = "(	160 - 2) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			font = "EtelkaMonospacePro";
			sizeEx = "2.945 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
		};
		class ButtonOK: ctrlButtonOK
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (	160 * 0.5 - 50 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	100 * 0.5 - (2 * 	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			textSave = "$STR_3den_display3den_menubar_missionsave_text";
			textLoad = "$STR_3den_display3den_menubar_missionopen_text";
			textImport = "$STR_3DEN_Display3DENSave_ButtonOK_textImport";
		};
		class ButtonCancel: ctrlButtonCancel
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (	160 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	100 * 0.5 - (2 * 	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
};
class display3DENPublishMissionSelectTags
{
	idd = 166;
	class ControlsBackground
	{
		class BackgroundDisable: ctrlStaticBackgroundDisable{};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles{};
		class Background: ctrlStaticBackground
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (	80 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	80 * 0.5 - 10) * (pixelH * pixelGrid * 	0.50)";
			w = "80 * (pixelW * pixelGrid * 	0.50)";
			h = "(	80 - (10 + 	5)) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (	80 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	80 * 0.5 - 2 * (	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
			w = "80 * (pixelW * pixelGrid * 	0.50)";
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
	};
	class Controls
	{
		class TitleMain: ctrlStaticTitle
		{
			idc = 107;
			text = "$STR_DISP_TAGS_TITLE";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	80 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	80 * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "80 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class Unused: ctrlListbox
		{
			idc = 101;
			x = "((getResolution select 2) * 0.5 * pixelW) - (	80 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	80 * 0.5 - 11) * (pixelH * pixelGrid * 	0.50)";
			w = "(	80 * 17/40) * (pixelW * pixelGrid * 	0.50)";
			h = "(	80 - (6 * 	5 - 1)) * (pixelH * pixelGrid * 	0.50)";
		};
		class Used: Unused
		{
			idc = 102;
			x = "((getResolution select 2) * 0.5 * pixelW) + (	80 * 3/40 - 1) * (pixelW * pixelGrid * 	0.50)";
		};
		class Add: ctrlActivePictureKeepAspect
		{
			idc = 103;
			text = "\A3\Ui_f\data\GUI\RscCommon\RscHTML\arrow_right_ca.paa";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	80 * 1/20) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	80 * 0.25) * (pixelH * pixelGrid * 	0.50)";
			w = "(	80 * 2/20) * (pixelW * pixelGrid * 	0.50)";
			h = "(	80 - (5 * 	5 - 1)) * 0.25 * (pixelH * pixelGrid * 	0.50)";
		};
		class Remove: Add
		{
			idc = 104;
			text = "\A3\Ui_f\data\GUI\RscCommon\RscHTML\arrow_left_ca.paa";
			y = 0.5;
		};
		class Previous: ctrlButton
		{
			idc = 106;
			text = "$STR_DISP_BACK";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	80 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	80 * 0.5 - (3 * 	5 + 2.5)) * (pixelH * pixelGrid * 	0.50)";
			w = "(	80 * 0.5 - 2) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class Next: Previous
		{
			idc = 105;
			text = "$STR_USRACT_MENU_UP";
			x = "((getResolution select 2) * 0.5 * pixelW)";
			w = "(	80 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
		};
		class OK: ctrlButtonOK
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (	80 * 0.5 - 50 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	80 * 0.5 - (2 * 	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class Cancel: ctrlButtonCancel
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (	80 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	80 * 0.5 - (2 * 	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
};
class Display3DENRequiredAddons: DisplaySimulated
{
	idd = 322;
	scriptName = "Display3DENRequiredAddons";
	scriptPath = "3DENDisplays";
	onLoad = "[""onLoad"",_this,""Display3DENRequiredAddons"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""Display3DENRequiredAddons"",'3DENDisplays'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	iconAddon = "\a3\3DEN\Data\Controls\CtrlMenu\pictureCheckboxEnabled_ca.paa";
	iconAddonMissing = "#(argb,8,8,3)color(0,0,0,0)";
	authorEmpty = "$STR_3DEN_Display3DENRequiredAddons_authorEmpty";
	textCodeMissing = "$STR_3DEN_Display3DENRequiredAddons_textCodeMissing";
	textCodeActive = "$STR_3DEN_Display3DENRequiredAddons_textCodeActive";
	class ControlsBackground
	{
		class BackgroundDisable: ctrlStaticBackgroundDisable{};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles{};
		class Background: ctrlStaticBackground
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (		120 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		100 * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "120 * (pixelW * pixelGrid * 	0.50)";
			h = "(		100 - 10) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (		120 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		100 * 0.5 - 2 * 	5 - 2) * (pixelH * pixelGrid * 	0.50)";
			w = "120 * (pixelW * pixelGrid * 	0.50)";
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundTabs: ctrlStatic
		{
			idc = "IDC_DISPLAY3DEN_TABLEFT_BACKGROUND";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		120 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		100 * 0.5 - 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
			w = "120 * (pixelW * pixelGrid * 	0.50)";
			h = "(2 * 	5 + 	(	5 + 1)) * (pixelH * pixelGrid * 	0.50) - pixelH";
			colorBackground[] = {0.1,0.1,0.1,1};
		};
		class Title: ctrlStaticTitle
		{
			text = "$STR_3DEN_Display3DENRequiredAddons_Title_text";
			x = "((getResolution select 2) * 0.5 * pixelW) - (		120 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		100 * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "120 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class Notification: ctrlStatic
		{
			idc = 103;
			text = "$STR_3DEN_Display3DENRequiredAddons_Notification_text";
			style = 2;
			shadow = 0;
			x = "((getResolution select 2) * 0.5 * pixelW) - (		120 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		100 * 0.5 - 2 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
			w = "(		120 - 2) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			colorBackground[] = {0.12549,0.505882,0.313726,0.9};
		};
		class Warning: Notification
		{
			idc = 104;
			show = 0;
			text = "$STR_3DEN_Display3DENRequiredAddons_Warning_text";
			colorBackground[] = {0.815686,0.266667,0.215686,0.9};
		};
		class Tabs: ctrlToolbox
		{
			idc = 1033;
			x = "((getResolution select 2) * 0.5 * pixelW) - (		120 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		100 * 0.5 - 3 * 	5 - 2) * (pixelH * pixelGrid * 	0.50)";
			w = "(		120 - 2) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			font = "RobotoCondensedLight";
			columns = 2;
			strings[] = {"$STR_3DEN_Display3DENRequiredAddons_Tabs_Basic","$STR_3DEN_Display3DENRequiredAddons_Tabs_Advanced"};
			colorBackground[] = {0,0,0,0};
			colorSelectedBg[] = {0.2,0.2,0.2,1};
			onToolBoxSelChanged = "				_display = ctrlparent (_this select 0);				(_display displayctrl 1001) ctrlshow ((_this select 1) == 0);				(_display displayctrl 1002) ctrlshow ((_this select 1) == 1);			";
		};
		class Basic: ctrlControlsGroupNoScrollbars
		{
			idc = 1001;
			x = "((getResolution select 2) * 0.5 * pixelW) - (		120 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		100 * 0.5 - 4 * 	5 - 3) * (pixelH * pixelGrid * 	0.50)";
			w = "(		120 - 1) * (pixelW * pixelGrid * 	0.50)";
			h = "(		100 - 6 * 	5 - (	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class BackgroundFilter: ctrlStatic
				{
					w = "(		120 - 2) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					colorBackground[] = {0,0,0,1};
				};
				class BackgroundList: ctrlStaticOverlay
				{
					y = "5 * (pixelH * pixelGrid * 	0.50)";
					w = "(		120 - 1) * (pixelW * pixelGrid * 	0.50)";
					h = "(		100 - 9 * 	5 - (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
				};
				class Filter: ctrlListNBox
				{
					idc = 1003;
					w = "(		120 - 2) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					disableOverflow = 1;
					columns[] = {0,0.05,0.6};
					class Items
					{
						class Presence
						{
							text = "";
							value = 1;
							data = "value";
						};
						class Name
						{
							text = "$STR_3DEN_Display3DENRequiredAddons_Filter_Name_text";
							value = -1;
						};
						class Author
						{
							text = "$STR_3DEN_Display3DENRequiredAddons_Filter_Author_text";
							value = -1;
						};
					};
				};
				class List: ctrlListNBox
				{
					idc = 101;
					columns[] = {0,0.6};
					disableOverflow = 1;
					colorDisabled[] = {0.815686,0.266667,0.215686,1};
					colorSelectBackground[] = {1,1,1,0.2};
					colorSelectBackground2[] = {1,1,1,0.2};
					period = 0;
					y = "5 * (pixelH * pixelGrid * 	0.50)";
					w = "(		120 - 1) * (pixelW * pixelGrid * 	0.50)";
					h = "(		100 - 9 * 	5 - (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
				};
				class Info: ctrlControlsGroupNoScrollbars
				{
					y = "(		100 - 8 * 	5 - (	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
					w = "(		120 - 2) * (pixelW * pixelGrid * 	0.50)";
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class Name: ctrlStatic
						{
							idc = 105;
							text = "";
							w = "(		120 - 8 * 	5 - 2) * (pixelW * pixelGrid * 	0.50)";
							h = "5 * (pixelH * pixelGrid * 	0.50)";
						};
						class Author: Name
						{
							idc = 106;
							text = "";
							y = "5 * (pixelH * pixelGrid * 	0.50)";
						};
						class URL: ctrlShortcutButton
						{
							idc = 107;
							text = "$STR_3DEN_Display3DENRequiredAddons_URL_text";
							style = 0;
							x = "(		120 - 7.5 * 	5 - 2) * (pixelW * pixelGrid * 	0.50)";
							y = "0.5 * 	5 * (pixelH * pixelGrid * 	0.50)";
							w = "7 * 	5 * (pixelW * pixelGrid * 	0.50)";
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							onLoad = "								(_this select 0) ctrlenable false;								(_this select 0) ctrlsetstructuredtext parsetext format [""<img image='\a3\3DEN\Data\Controls\ctrlMenu\link_ca.paa'/> %1"",toupper ctrltext (_this select 0)];							";
						};
					};
				};
			};
		};
		class Advanced: ctrlControlsGroup
		{
			show = 0;
			idc = 1002;
			x = "((getResolution select 2) * 0.5 * pixelW) - (		120 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (		100 * 0.5 - 4 * 	5 - 3) * (pixelH * pixelGrid * 	0.50)";
			w = "(		120 - 2) * (pixelW * pixelGrid * 	0.50)";
			h = "(		100 - 6 * 	5 - (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class Code: ctrlEdit
				{
					idc = 102;
					style = 16;
					font = "EtelkaMonospacePro";
					sizeEx = "3.41 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					text = "";
					w = "(		120 - 2) * (pixelW * pixelGrid * 	0.50)";
					h = "(		100 - 6 * 	5 - (	5 + 2)) * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class ButtonCancel: ctrlButtonClose
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (		120 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (		100 * 0.5 - 2 * 	5 - 1) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
};
class DisplayTest: DisplaySimulated
{
	idd = 456;
	class Controls
	{
		class Listbox: ctrlListbox
		{
			idc = 100;
			x = 0;
			y = 0;
			w = 0.3;
			h = 1;
			class Items
			{
				class Item0
				{
					text = "LOL";
					textRight = "ROFL";
					tooltip = "OMG";
					picture = "\a3\Ui_f\data\Map\Markers\Military\warning_CA.paa";
					pictureRight = "\a3\Ui_f\data\Map\Markers\Military\unknown_CA.paa";
					color[] = {1,0,1,1};
					colorRight[] = {1,1,0,1};
					colorPicture[] = {0,1,1,1};
					colorPictureSelected[] = {1,0,0,1};
					colorPictureDisabled[] = {0,0,0,1};
					colorPictureRight[] = {0,1,0,1};
					colorPictureRightSelected[] = {0,0,1,1};
					colorPictureRightDisabled[] = {0,0,0,1};
					data = "WTF";
					value = 42;
					default = 0;
				};
				class AnotherItem
				{
					text = "O RLY";
					default = 1;
				};
			};
		};
		class Combo: ctrlCombo
		{
			idc = 102;
			x = 0.62;
			y = 0;
			w = 0.3;
			h = 0.05;
			class Items
			{
				class Item0
				{
					text = "LOL";
					textRight = "ROFL";
					tooltip = "OMG";
					picture = "\a3\Ui_f\data\Map\Markers\Military\warning_CA.paa";
					pictureRight = "\a3\Ui_f\data\Map\Markers\Military\unknown_CA.paa";
					color[] = {1,0,1,1};
					colorRight[] = {1,1,0,1};
					colorPicture[] = {0,1,1,1};
					colorPictureSelected[] = {1,0,0,1};
					colorPictureDisabled[] = {0,0,0,1};
					colorPictureRight[] = {0,1,0,1};
					colorPictureRightSelected[] = {0,0,1,1};
					colorPictureRightDisabled[] = {0,0,0,1};
					data = "WTF";
					value = 42;
					default = 0;
				};
				class AnotherItem
				{
					text = "O RLY";
					default = 1;
				};
			};
		};
		class XListbox: ctrlXListbox
		{
			idc = 101;
			x = 0.31;
			y = 0;
			w = 0.3;
			h = 0.05;
			tooltip = "Lorem ipsum dolor sit amet, dicam timeam ei mei. Et persecuti disputationi qui, in vim persius fierent. Agam graeci ei sit, duo an legere oportere inciderint,\n\nnovum noluisse voluptatum sit cu. Ne nam affert delectus eleifend, elit philosophia te sit. Mea cu quaeque vulputate maiestatis.";
			class Items
			{
				class Item0
				{
					text = "LOL";
					picture = "\a3\Ui_f\data\Map\Markers\Military\warning_CA.paa";
					color[] = {1,0,1,1};
					colorPicture[] = {0,1,1,1};
					data = "WTF";
					value = 42;
					default = 0;
				};
				class AnotherItem
				{
					text = "O RLY";
					default = 1;
				};
			};
		};
	};
};
class RscDisplayInterrupt: RscStandardDisplay
{
	scriptName = "RscDisplayInterrupt";
	scriptPath = "3DENDisplaysTemp";
	onLoad = "[""onLoad"",_this,""RscDisplayInterrupt"",'3DENDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayInterrupt"",'3DENDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
};
class RscDisplayRemoteMissions;
class RscDisplayServer: RscDisplayRemoteMissions
{
	colorEditor3DEN[] = {0.2,0.8,0.4,1};
	colorMissionEditor3DEN[] = {0.2,0.8,0.4,1};
	textNew = "$STR_3DEN_RscDisplayServer_textNew";
	textNew3DEN = "$STR_3DEN_RscDisplayServer_textNew3DEN";
	textEdit = "$STR_3DEN_Editor2D";
	textEdit3DEN = "$STR_3DEN_Editor3D";
};
class RscDisplayCustomArcade: RscStandardDisplay
{
	class Controls
	{
		class ButtonEdit: RscButtonMenu
		{
			text = "$STR_3DEN_Editor2D";
		};
		class Button3DEN: RscButtonMenu
		{
			IDC = 106;
			text = "$STR_3DEN_Editor3D";
			x = "20.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "23 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 			(safezoneY + safezoneH - 			(			((safezoneW / safezoneH) min 1.2) / 1.2))";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
};
class RscDisplayOptionsAudio
{
	class ControlsBackground
	{
		class Vignette: RscVignette
		{
			onLoad = "(_this select 0) ctrlshow !is3DEN;";
		};
		class TileGroup: RscControlsGroupNoScrollbars
		{
			onLoad = "(_this select 0) ctrlshow !is3DEN;";
		};
		class BackgroundDisable: ctrlStaticBackgroundDisable
		{
			onLoad = "(_this select 0) ctrlshow is3DEN;";
		};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles
		{
			onLoad = "(_this select 0) ctrlshow is3DEN;";
		};
	};
};
class RscDisplayConfigure
{
	class ControlsBackground
	{
		class Vignette: RscVignette
		{
			onLoad = "(_this select 0) ctrlshow !is3DEN;";
		};
		class TileGroup: RscControlsGroupNoScrollbars
		{
			onLoad = "(_this select 0) ctrlshow !is3DEN;";
		};
		class BackgroundDisable: ctrlStaticBackgroundDisable
		{
			onLoad = "(_this select 0) ctrlshow is3DEN;";
		};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles
		{
			onLoad = "(_this select 0) ctrlshow is3DEN;";
		};
	};
};
class RscDisplayConfigureAction
{
	class ControlsBackground
	{
		class Vignette: RscVignette
		{
			onLoad = "(_this select 0) ctrlshow !is3DEN;";
		};
		class TileGroup: RscControlsGroupNoScrollbars
		{
			onLoad = "(_this select 0) ctrlshow !is3DEN;";
		};
		class BackgroundDisable: ctrlStaticBackgroundDisable
		{
			onLoad = "(_this select 0) ctrlshow is3DEN;";
		};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles
		{
			onLoad = "(_this select 0) ctrlshow is3DEN;";
		};
	};
};
class RscDisplayConfigureControllers
{
	class ControlsBackground
	{
		class Vignette: RscVignette
		{
			onLoad = "(_this select 0) ctrlshow !is3DEN;";
		};
		class TileGroup: RscControlsGroupNoScrollbars
		{
			onLoad = "(_this select 0) ctrlshow !is3DEN;";
		};
		class BackgroundDisable: ctrlStaticBackgroundDisable
		{
			onLoad = "(_this select 0) ctrlshow is3DEN;";
		};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles
		{
			onLoad = "(_this select 0) ctrlshow is3DEN;";
		};
	};
};
class RscDisplayGameOptions
{
	class ControlsBackground
	{
		class Vignette: RscVignette
		{
			onLoad = "(_this select 0) ctrlshow !is3DEN;";
		};
		class TileGroup: RscControlsGroupNoScrollbars
		{
			onLoad = "(_this select 0) ctrlshow !is3DEN;";
		};
		class BackgroundDisable: ctrlStaticBackgroundDisable
		{
			onLoad = "(_this select 0) ctrlshow is3DEN;";
		};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles
		{
			onLoad = "(_this select 0) ctrlshow is3DEN;";
		};
	};
};
class RscDisplayArcadeMap_Layout_2: RscMap
{
	class Controls
	{
		class Watermark: ctrlStatic
		{
			style = "0x02 + 0x10";
			x = 0;
			y = "safezoneY + 0.06";
			w = 1;
			h = "15 * (pixelH * pixelGrid * 	0.50)";
			colorText[] = {1,0,0,0.5};
			text = "$STR_3DEN_RscDisplayArcadeMap_Watermark_text";
			font = "RobotoCondensedLight";
			shadow = 0;
			sizeEx = "4.86 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			onLoad = "(_this select 0) ctrlenable false;";
		};
	};
};
class RscDisplayArcadeMap_Layout_6: RscMap
{
	class Controls
	{
		class Watermark: ctrlStatic
		{
			style = "0x02 + 0x10";
			x = 0;
			y = "safezoneY + 0.1";
			w = 1;
			h = "15 * (pixelH * pixelGrid * 	0.50)";
			colorText[] = {1,0,0,0.5};
			text = "$STR_3DEN_RscDisplayArcadeMap_Watermark_text";
			font = "RobotoCondensedLight";
			shadow = 0;
			sizeEx = "4.86 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			onLoad = "(_this select 0) ctrlenable false;";
		};
	};
};
class RscDisplayLoadMission: RscStandardDisplay
{
	scriptName = "RscDisplayLoading";
	scriptPath = "3DENDisplaysTemp";
	onLoad = "[""onLoad"",_this,""RscDisplayLoading"",'3DENDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayLoading"",'3DENDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class Controls
	{
		class Logo3DEN: ctrlStaticPicture
		{
			text = "\a3\3DEN\Data\Logos\3den_512_ca.paa";
			x = "safezoneX + safezoneW - 0.31";
			y = "safezoneY + safezoneH - 0.3";
			w = 0.3;
			h = 0.2;
			show = 0;
			onLoad = "if !(isnull (finddisplay 313)) then {(_this select 0) ctrlshow true;};";
		};
	};
};
class RscDisplayNotFreeze: RscStandardDisplay
{
	scriptName = "RscDisplayLoading";
	scriptPath = "3DENDisplaysTemp";
	onLoad = "[""onLoad"",_this,""RscDisplayLoading"",'3DENDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayLoading"",'3DENDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	class Controls
	{
		class Logo3DEN: ctrlStaticPicture
		{
			text = "\a3\3DEN\Data\Logos\3den_512_ca.paa";
			x = "safezoneX + safezoneW - 0.31";
			y = "safezoneY + safezoneH - 0.3";
			w = 0.3;
			h = 0.2;
			show = 0;
			onLoad = "if !(isnull (finddisplay 313)) then {(_this select 0) ctrlshow true;};";
		};
	};
};
class RscDisplayStart: RscStandardDisplay
{
	scriptName = "RscDisplayLoading";
	scriptPath = "3DENDisplaysTemp";
	onLoad = "[2] call compile preprocessfilelinenumbers gettext (configfile >> 'CfgFunctions' >> 'init'); ['onLoad',_this,'RscDisplayLoading','Loading'] call (uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayLoading"",'3DENDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
};
class RscDisplayLoading
{
	scriptName = "RscDisplayLoading";
	scriptPath = "3DENDisplaysTemp";
	onLoad = "[""onLoad"",_this,""RscDisplayLoading"",'3DENDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	onUnload = "[""onUnload"",_this,""RscDisplayLoading"",'3DENDisplaysTemp'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
};
class RscDisplayPublishMissionSelectTags
{
	idd = 166;
	class ControlsBackground
	{
		delete FullscreenBackground;
		delete TitleBackground;
		delete MainBackground;
		class BackgroundDisable: ctrlStaticBackgroundDisable{};
		class BackgroundDisableTiles: ctrlStaticBackgroundDisableTiles{};
		class Background: ctrlStaticBackground
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (	80 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	80 * 0.5 - 10) * (pixelH * pixelGrid * 	0.50)";
			w = "80 * (pixelW * pixelGrid * 	0.50)";
			h = "(	80 - (10 + 	5)) * (pixelH * pixelGrid * 	0.50)";
		};
		class BackgroundButtons: ctrlStaticFooter
		{
			x = "((getResolution select 2) * 0.5 * pixelW) - (	80 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	80 * 0.5 - 2 * (	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
			w = "80 * (pixelW * pixelGrid * 	0.50)";
			h = "(	5 + 2) * (pixelH * pixelGrid * 	0.50)";
		};
	};
	class Controls
	{
		delete Title;
		delete TextUnused;
		delete TextUsed;
		delete ButtonAdd;
		delete ButtonRemove;
		delete ListUnusedTags;
		delete ListUsedTags;
		delete ButtonNext;
		delete ButtonOK;
		delete ButtonCancel;
		delete ButtonBack;
		class TitleMain: ctrlStaticTitle
		{
			idc = 107;
			text = "$STR_DISP_TAGS_TITLE";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	80 * 0.5) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	80 * 0.5 - 	5) * (pixelH * pixelGrid * 	0.50)";
			w = "80 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class Unused: ctrlListbox
		{
			idc = 101;
			x = "((getResolution select 2) * 0.5 * pixelW) - (	80 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	80 * 0.5 - 11) * (pixelH * pixelGrid * 	0.50)";
			w = "(	80 * 17/40) * (pixelW * pixelGrid * 	0.50)";
			h = "(	80 - (6 * 	5 - 1)) * (pixelH * pixelGrid * 	0.50)";
		};
		class Used: Unused
		{
			idc = 102;
			x = "((getResolution select 2) * 0.5 * pixelW) + (	80 * 3/40 - 1) * (pixelW * pixelGrid * 	0.50)";
		};
		class Add: ctrlActivePictureKeepAspect
		{
			idc = 103;
			text = "\A3\Ui_f\data\GUI\RscCommon\RscHTML\arrow_right_ca.paa";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	80 * 1/20) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 - (	80 * 0.25) * (pixelH * pixelGrid * 	0.50)";
			w = "(	80 * 2/20) * (pixelW * pixelGrid * 	0.50)";
			h = "(	80 - (5 * 	5 - 1)) * 0.25 * (pixelH * pixelGrid * 	0.50)";
		};
		class Remove: Add
		{
			idc = 104;
			text = "\A3\Ui_f\data\GUI\RscCommon\RscHTML\arrow_left_ca.paa";
			y = 0.5;
		};
		class Previous: ctrlButton
		{
			idc = 106;
			text = "$STR_DISP_BACK";
			x = "((getResolution select 2) * 0.5 * pixelW) - (	80 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	80 * 0.5 - (3 * 	5 + 2.5)) * (pixelH * pixelGrid * 	0.50)";
			w = "(	80 * 0.5 - 2) * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class Next: Previous
		{
			idc = 105;
			text = "$STR_USRACT_MENU_UP";
			x = "((getResolution select 2) * 0.5 * pixelW)";
			w = "(	80 * 0.5 - 1) * (pixelW * pixelGrid * 	0.50)";
		};
		class OK: ctrlButtonOK
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (	80 * 0.5 - 50 - 2) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	80 * 0.5 - (2 * 	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
		class Cancel: ctrlButtonCancel
		{
			x = "((getResolution select 2) * 0.5 * pixelW) + (	80 * 0.5 - 25 - 1) * (pixelW * pixelGrid * 	0.50)";
			y = "0.5 + (	80 * 0.5 - (2 * 	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
			w = "25 * (pixelW * pixelGrid * 	0.50)";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
		};
	};
};
class CfgFunctions
{
	class 3DEN
	{
		tag = "BIS";
		project = "arma3";
		class Default
		{
			file = "A3\3DEN\Functions";
			class 3DENExportOldSQM{};
			class 3DENExportTerrainBuilder{};
			class 3DENVisionMode{};
			class 3DENNotification{};
			class 3DENToolbar{};
			class 3DENGrid{};
			class 3DENCamera{};
			class 3DENInterface{};
			class 3DENModuleDescription{};
			class 3DENDrawLocations{};
			class 3DENListLocations{};
			class 3DENMissionPreview{};
			class 3DENStatusBar{};
			class 3DENTutorial{};
			class 3DENEntityMenu{};
			class 3DENControlsHint{};
			class 3DENShowMessage{};
			class 3DENFlashlight{};
			class 3DENIntel{};
			class 3DENDiagCreateList{};
			class 3DENDiagFonts{};
			class 3DENDiagMouseControl{};
			class 3DENExportAttributes{};
			class initAmmoBox{};
			class highlightControl{};
			class initListNBoxSorting{};
			class initSliderValue{};
		};
		class Attributes
		{
			file = "A3\3DEN\Functions\Attributes";
			class 3DENAttributeDoorStates{};
		};
	};
};
class CfgSounds
{
	class 3DEN_visionMode
	{
		sound[] = {"\a3\3DEN\Data\Sound\CfgSound\visionMode",1.0,1};
		titles[] = {};
	};
	class 3DEN_notificationDefault
	{
		sound[] = {"\a3\3DEN\Data\Sound\CfgSound\notificationDefault",1.0,1};
		titles[] = {};
	};
	class 3DEN_notificationWarning
	{
		sound[] = {"\a3\3DEN\Data\Sound\CfgSound\notificationWarning",1.0,1};
		titles[] = {};
	};
};
class CfgWrapperUI
{
	class Cursors
	{
		class 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DEN_ca.paa";
			width = 32;
			height = 32;
			hotspotX = 0.1875;
			hotspotY = 0;
			color[] = {1,1,1,1};
		};
		class 3DENSelect: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENSelect_ca.paa";
			color[] = {1.0,1.0,1.0,1.0};
			hotspotX = 0.1875;
			hotspotY = 0.1875;
		};
		class 3DENSelectWidgetX: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENSelectWidgetX_ca.paa";
			color[] = {0.77,0.18,0.1,1};
			hotspotX = 0.1875;
			hotspotY = 0.1875;
		};
		class 3DENSelectWidgetY: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENSelectWidgetY_ca.paa";
			color[] = {0.58,0.82,0.22,1};
			hotspotX = 0.1875;
			hotspotY = 0.1875;
		};
		class 3DENSelectWidgetZ: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENSelectWidgetZ_ca.paa";
			color[] = {0.26,0.52,0.92,1};
			hotspotX = 0.1875;
			hotspotY = 0.1875;
		};
		class 3DENPlace: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENPlace_ca.paa";
			color[] = {1.0,1.0,1.0,1.0};
			hotspotX = 0.1875;
			hotspotY = 0;
		};
		class 3DENPlaceMulti: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENPlaceMulti_ca.paa";
			color[] = {1.0,1.0,1.0,1.0};
			hotspotX = 0.1875;
			hotspotY = 0;
		};
		class 3DENPlaceZ: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENPlaceZ_ca.paa";
			color[] = {1.0,1.0,1.0,1.0};
			hotspotX = 0.1875;
			hotspotY = 0;
		};
		class 3DENPlaceZMulti: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENPlaceZMulti_ca.paa";
			color[] = {1.0,1.0,1.0,1.0};
			hotspotX = 0.1875;
			hotspotY = 0;
		};
		class 3DENPlaceWaypoint: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENPlaceWaypoint_ca.paa";
			color[] = {0.5,1.0,0.5,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
		class 3DENPlaceWaypointMulti: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENPlaceWaypointMulti_ca.paa";
			color[] = {0.5,1.0,0.5,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
		class 3DENPlaceWaypointAttach: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENPlaceWaypointAttach_ca.paa";
			color[] = {0.5,1.0,0.5,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
		class 3DENPlaceWaypointAttachMulti: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENPlaceWaypointAttachMulti_ca.paa";
			color[] = {0.5,1.0,0.5,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
		class 3DENMove: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENMove_ca.paa";
			color[] = {0.0,1.0,1.0,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
		class 3DENMoveZ: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENMoveZ_ca.paa";
			color[] = {0.0,1.0,1.0,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
		class 3DENMoveSnap: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENMoveSnap_ca.paa";
			color[] = {0.0,1.0,1.0,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
		class 3DENMoveIn: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENMoveIn_ca.paa";
			color[] = {0.0,1.0,1.0,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
		class 3DENMoveInDisabled: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENMoveInDisabled_ca.paa";
			color[] = {1.0,0.5,0.0,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
		class 3DENRotate: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENRotate_ca.paa";
			color[] = {0.0,1.0,1.0,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
		class 3DENConnectGroup: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENConnectGroup_ca.paa";
			color[] = {1.0,1.0,1.0,1.0};
			hotspotX = 0.1875;
			hotspotY = 0;
		};
		class 3DENConnectSync: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENConnectSync_ca.paa";
			color[] = {1.0,1.0,1.0,1.0};
			hotspotX = 0.1875;
			hotspotY = 0;
		};
		class 3DENDisconnect: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENDisconnect_ca.paa";
			color[] = {1.0,0.5,0.0,1.0};
			hotspotX = 0.1875;
			hotspotY = 0;
		};
		class 3DENTransformRotate0: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformRotate0_ca.paa";
			color[] = {0.0,1.0,1.0,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
		class 3DENTransformRotate45: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformRotate45_ca.paa";
			color[] = {0.0,1.0,1.0,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
		class 3DENTransformRotate90: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformRotate90_ca.paa";
			color[] = {0.0,1.0,1.0,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
		class 3DENTransformRotate135: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformRotate135_ca.paa";
			color[] = {0.0,1.0,1.0,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
		class 3DENTransformRotate180: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformRotate180_ca.paa";
			color[] = {0.0,1.0,1.0,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
		class 3DENTransformRotate225: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformRotate225_ca.paa";
			color[] = {0.0,1.0,1.0,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
		class 3DENTransformRotate270: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformRotate270_ca.paa";
			color[] = {0.0,1.0,1.0,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
		class 3DENTransformRotate315: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformRotate315_ca.paa";
			color[] = {0.0,1.0,1.0,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
		class 3DENTransformScale0: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformScale0_ca.paa";
			color[] = {0.0,1.0,1.0,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
		class 3DENTransformScale45: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformScale45_ca.paa";
			color[] = {0.0,1.0,1.0,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
		class 3DENTransformScale90: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformScale90_ca.paa";
			color[] = {0.0,1.0,1.0,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
		class 3DENTransformScale135: 3DEN
		{
			texture = "\a3\3DEN\Data\CfgWrapperUI\Cursors\3DENTransformScale135_ca.paa";
			color[] = {0.0,1.0,1.0,1.0};
			hotspotX = 0.5;
			hotspotY = 0.5;
		};
	};
};
class CfgWaypoints
{
	class Default
	{
		displayName = "$STR_DISP_DEFAULT";
		class Move
		{
			type = "MOVE";
			displayName = "$STR_AC_MOVE";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\Move_ca.paa";
		};
		class Destroy
		{
			type = "DESTROY";
			displayName = "$STR_AC_DESTROY";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\Destroy_ca.paa";
		};
		class GetIn
		{
			type = "GETIN";
			displayName = "$STR_AC_GETIN";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\GetIn_ca.paa";
		};
		class SeekAndDestroy
		{
			type = "SAD";
			displayName = "$STR_AC_SEEKANDDESTROY";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\SeekAndDestroy_ca.paa";
		};
		class Join
		{
			type = "JOIN";
			displayName = "$STR_AC_JOIN";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\Join_ca.paa";
		};
		class Leader
		{
			type = "LEADER";
			displayName = "$STR_AC_LEADER";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\Leader_ca.paa";
		};
		class GetOut
		{
			type = "GETOUT";
			displayName = "$STR_AC_GETOUT";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\GetOut_ca.paa";
		};
		class Cycle
		{
			type = "CYCLE";
			displayName = "$STR_AC_CYCLE";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\Cycle_ca.paa";
		};
		class Load
		{
			type = "LOAD";
			displayName = "$STR_AC_LOAD";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\Load_ca.paa";
		};
		class Unload
		{
			type = "UNLOAD";
			displayName = "$STR_AC_UNLOAD";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\Unload_ca.paa";
		};
		class TransportUnload
		{
			type = "TR UNLOAD";
			displayName = "$STR_AC_TRANSPORTUNLOAD";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\TransportUnload_ca.paa";
		};
		class Hold
		{
			type = "HOLD";
			displayName = "$STR_AC_HOLD";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\Hold_ca.paa";
		};
		class Sentry
		{
			type = "SENTRY";
			displayName = "$STR_AC_SENTRY";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\Sentry_ca.paa";
		};
		class Guard
		{
			type = "GUARD";
			displayName = "$STR_AC_GUARD";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\Guard_ca.paa";
		};
		class Talk
		{
			type = "TALK";
			displayName = "$STR_AC_TALK";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\Talk_ca.paa";
		};
		class Scripted
		{
			type = "SCRIPTED";
			displayName = "$STR_AC_SCRIPTED";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\Scripted_ca.paa";
		};
		class Support
		{
			type = "SUPPORT";
			displayName = "$STR_AC_SUPPORT";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\Support_ca.paa";
		};
		class GetInNearest
		{
			type = "GETIN NEAREST";
			displayName = "$STR_AC_GETINNEAREST";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\GetInNearest_ca.paa";
		};
		class Dismiss
		{
			type = "DISMISS";
			displayName = "$STR_AC_DISMISS";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\Dismiss_ca.paa";
		};
		class Loiter
		{
			type = "LOITER";
			displayName = "$STR_AC_LOITER";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\Loiter_ca.paa";
			class Attributes
			{
				class LoiterDirection
				{
					displayName = "$STR_3den_waypoint_attribute_loiterdirection_displayname";
					data = "LoiterDirection";
					control = "LoiterDirection";
				};
				class LoiterRadius
				{
					displayName = "$STR_3den_waypoint_attribute_loiterradius_displayname";
					data = "LoiterRadius";
					control = "Edit";
					validate = "number";
				};
				class LoiterAltitude
				{
					displayName = "$STR_3den_waypoint_attribute_loiteraltitude_displayname";
					tooltip = "$STR_3den_waypoint_attribute_loiteraltitude_tooltip";
					data = "LoiterAltitude";
					control = "EditZ";
					validate = "number";
				};
			};
		};
		class Follow
		{
			type = "FOLLOW";
			displayName = "$STR_AC_FOLLOW";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\Follow_ca.paa";
		};
		class Hook
		{
			type = "HOOK";
			displayName = "$STR_AC_HOOK";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\Hook_ca.paa";
		};
		class Unhook
		{
			type = "UNHOOK";
			displayName = "$STR_AC_UNHOOK";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\Unhook_ca.paa";
		};
		class VehicleInVehicleGetIn
		{
			type = "VEHICLEINVEHICLEGETIN";
			displayName = "$STR_AC_VEHICLE_IN_VEHICLE_GETIN";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\GetIn_ca.paa";
		};
		class VehicleInVehicleGetOut
		{
			type = "VEHICLEINVEHICLEGETOUT";
			displayName = "$STR_AC_VEHICLE_IN_VEHICLE_GETOUT";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\GetOut_ca.paa";
		};
		class VehicleInVehicleUnload
		{
			type = "VEHICLEINVEHICLEUNLOAD";
			displayName = "$STR_AC_VEHICLE_IN_VEHICLE_UNLOAD";
			tooltip = "";
			icon = "\a3\3DEN\Data\CfgWaypoints\Unload_ca.paa";
		};
	};
};
class Cfg3DEN
{
	class Object
	{
		textSingular = "$STR_3DEN_Object_textSingular";
		textPlural = "$STR_3DEN_Object_textPlural";
		class Mode
		{
			text = "$STR_3DEN_Object_textPlural";
			texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeObjects_ca.paa";
			class Submodes
			{
				class West
				{
					text = "$STR_WEST";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_west_ca.paa";
				};
				class East
				{
					text = "$STR_EAST";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_east_ca.paa";
				};
				class Guer
				{
					text = "$STR_Guerrila";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_guer_ca.paa";
				};
				class Civ
				{
					text = "$STR_Civilian";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_civ_ca.paa";
				};
				class Empty
				{
					text = "$STR_3DEN_Object_Mode_Empty";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_empty_ca.paa";
				};
			};
		};
		class Draw
		{
			iconDriver = "\a3\3DEN\Data\Cfg3DEN\Object\iconDriver_ca.paa";
			iconCommander = "\a3\3DEN\Data\Cfg3DEN\Object\iconCommander_ca.paa";
			iconTurret = "\a3\3DEN\Data\Cfg3DEN\Object\iconTurret_ca.paa";
			iconCargo = "\a3\3DEN\Data\Cfg3DEN\Object\iconCargo_ca.paa";
			iconPlayer = "\a3\3DEN\Data\Cfg3DEN\Object\iconPlayer_ca.paa";
			colorPlayer[] = {0.7,0.1,0,1};
			colorPlayerVehicle[] = {1,1,1,0.5};
			iconPlayable = "\a3\3DEN\Data\Cfg3DEN\Object\iconPlayer_ca.paa";
			colorPlayable[] = {0.7,0,0.7,1};
			colorPlayableVehicle[] = {1,1,1,0.5};
			class 3D
			{
				size = "24 * pixelW";
				sizeBackground = "24 * pixelW";
				textureBackground = "";
				color[] = {"side"};
				colorSimple[] = {0.5,0.5,0.5,1};
				colorSimplePreview[] = {0.5,0.5,0.5,1};
				colorBackground[] = {0,0,0,0};
				colorPreview[] = {"side"};
				colorPreviewBackground[] = {1,1,1,0.5};
				alphaNormal = 0.7;
				alphaNormalBackground = 0;
				alphaSelected = 1;
				alphaSelectedBackground = 0;
				alphaHover = 1;
				alphaHoverBackground = 0;
				shadow = 1;
				fadeDistance = 750;
				fadeDistanceCrew = 20;
				boundingBoxBase = "\a3\3DEN\Objects\boundingBoxBase.p3d";
				sizeSimulation = "64 * pixelW";
				textureSimulationEnabled = "";
				textureSimulationDisabled = "\A3\3DEN\Data\Cfg3DEN\Simulation\simulation5_ca.paa";
				textureSimulationDynamic = "\A3\3DEN\Data\Cfg3DEN\Simulation\simulation5_ca.paa";
				colorSimulationEnabled[] = {0,0,0,0};
				colorSimulationDisabled[] = {1,0.2,0.2,1};
				colorSimulationDynamic[] = {0,0.7,0.8,1};
				colorPreviewSimulationEnabled[] = {0,0,0,0};
				colorPreviewSimulationDisabled[] = {0.5,0.5,0.5,1};
				colorPreviewSimulationDynamic[] = {0,0.7,0.8,1};
				alphaNormalSimulation = 0.7;
				alphaSelectedSimulation = 1;
				alphaHoverSimulation = 1;
			};
			class 2D
			{
				size = "24 * pixelW";
				sizeBackground = "24 * pixelW";
				presenceBorder = 2;
				textureBackground = "";
				color[] = {"side"};
				colorSimple[] = {0.5,0.5,0.5,1};
				colorSimplePreview[] = {0.5,0.5,0.5,1};
				colorBackground[] = {0,0,0,0};
				colorPreview[] = {"side"};
				colorPreviewBackground[] = {0,0,0,0.5};
				alphaNormal = 0.7;
				alphaNormalBackground = 0;
				alphaSelected = 1;
				alphaSelectedBackground = 0;
				alphaHover = 1;
				alphaHoverBackground = 0;
				shadow = 0;
				boundingBoxAlpha = 0.4;
				boundingBoxForceShow = 50;
				sizeSimulation = "64 * pixelW";
				textureSimulationEnabled = "";
				textureSimulationDisabled = "\A3\3DEN\Data\Cfg3DEN\Simulation\simulation5_ca.paa";
				textureSimulationDynamic = "\A3\3DEN\Data\Cfg3DEN\Simulation\simulation5_ca.paa";
				colorSimulationEnabled[] = {0,0,0,0};
				colorSimulationDisabled[] = {1,0.2,0.2,1};
				colorSimulationDynamic[] = {0,0.7,0.8,1};
				colorPreviewSimulationEnabled[] = {0,0,0,0};
				colorPreviewSimulationDisabled[] = {0.5,0.5,0.5,1};
				colorPreviewSimulationDynamic[] = {0,0.7,0.8,1};
				alphaNormalSimulation = 0.7;
				alphaSelectedSimulation = 1;
				alphaHoverSimulation = 1;
			};
		};
		class Tooltip
		{
			vehicleRoleDriver = "$STR_position_driver";
			vehicleRoleTurret = "$STR_position_gunner";
			vehicleRoleCargo = "$STR_GETIN_POS_PASSENGER";
			vehicleRoleCargoVehicle = "$STR_3DEN_Object_Tooltip_vehicleRoleCargoVehicle";
		};
		class AttributeCategories
		{
			class Type
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Type";
				collapsed = 1;
				class Attributes
				{
					class Type
					{
						data = "ItemClass";
						control = "Type";
						displayName = "$STR_3DEN_Object_Attribute_Type_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Type_tooltip";
						wikiType = "[[String]]";
					};
				};
			};
			class Init
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Init";
				class Attributes
				{
					class Name
					{
						data = "Name";
						value = 0;
						unique = 1;
						validate = "variable";
						control = "EditCode";
						displayName = "$STR_3DEN_Object_Attribute_Name_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Name_tooltip";
						wikiType = "[[String]]";
					};
					class Init
					{
						data = "Init";
						value = 0;
						validate = "expression";
						control = "EditCodeMulti5";
						displayName = "$STR_3DEN_Object_Attribute_Init_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Init_tooltip";
						wikiType = "[[String]]";
					};
				};
			};
			class PylonsCategory
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_PylonsCategory";
				collapsed = 1;
				class Attributes
				{
					class PylonAttr
					{
						data = "Pylons";
						control = "PylonControlsGroup";
						displayName = "";
						tooltip = "";
					};
				};
			};
			class Transformation
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Transformation";
				class Attributes
				{
					class Position
					{
						data = "position";
						validate = "number";
						control = "EditXYZ";
						displayName = "$STR_3DEN_Object_Attribute_Position_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Position_tooltip";
						wikiType = "[[Position3D]]";
					};
					class Rotation
					{
						data = "rotation";
						validate = "number";
						control = "EditXYZ";
						displayName = "$STR_3DEN_Object_Attribute_Rotation_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Rotation_tooltip";
						wikiType = "[[Number]]";
					};
					class Size3
					{
						data = "size3";
						control = "EditABC";
						validate = "number";
						displayName = "$STR_3DEN_Trigger_Attribute_Size_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Size_tooltip";
						wikiType = "[[Array]]";
					};
					class Shape
					{
						data = "IsRectangle";
						control = "ShapeTrigger";
						displayName = "$STR_3DEN_Trigger_Attribute_Shape_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Shape_tooltip";
						wikiType = "[[Bool]]";
					};
					class Placement
					{
						data = "placementRadius";
						validate = "number";
						control = "Edit";
						displayName = "$STR_3DEN_Object_Attribute_Placement_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Placement_tooltip";
						wikiType = "[[Number]]";
					};
				};
			};
			class Control
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Control";
				class Attributes
				{
					class ControlSP
					{
						data = "ControlSP";
						value = 0;
						unique = 1;
						control = "ControlSP";
						displayName = "$STR_3DEN_Object_Attribute_ControlSP_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_ControlSP_tooltip";
						wikiType = "[[Bool]]";
					};
					class ControlMP
					{
						data = "ControlMP";
						value = 0;
						control = "ControlMP";
						displayName = "$STR_3DEN_Object_Attribute_ControlMP_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_ControlMP_tooltip";
						wikiType = "[[Bool]]";
					};
					class Description
					{
						data = "description";
						value = 0;
						control = "Edit";
						displayName = "$STR_3DEN_Object_Attribute_Description_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Description_tooltip";
						wikiType = "[[String]]";
						isLocalized = 1;
					};
				};
			};
			class State
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_State";
				class Attributes
				{
					class Lock
					{
						data = "lock";
						control = "Lock";
						displayName = "$STR_3DEN_Object_Attribute_Lock_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Lock_tooltip";
						wikiType = "[[Number]]";
					};
					class Skill
					{
						data = "skill";
						control = "Skill";
						displayName = "$STR_3DEN_Object_Attribute_Skill_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Skill_tooltip";
						wikiType = "[[Number]]";
					};
					class Health
					{
						data = "Health";
						control = "Slider";
						displayName = "$STR_3DEN_Object_Attribute_Health_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Health_tooltip";
						wikiType = "[[Number]]";
					};
					class Fuel
					{
						data = "fuel";
						control = "Slider";
						displayName = "$STR_3DEN_Object_Attribute_Fuel_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Fuel_tooltip";
						wikiType = "[[Number]]";
					};
					class Ammo
					{
						data = "ammo";
						control = "Slider";
						displayName = "$STR_3DEN_Object_Attribute_Ammo_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Ammo_tooltip";
						wikiType = "[[Number]]";
					};
					class Rank
					{
						data = "rank";
						control = "Rank";
						displayName = "$STR_3DEN_Object_Attribute_Rank_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Rank_tooltip";
						wikiType = "[[String]]";
					};
					class UnitPos
					{
						data = "unitPos";
						control = "UnitPos";
						displayName = "$STR_3DEN_Object_Attribute_Stance_displayName";
						condition = "objectBrain";
					};
				};
			};
			class StateSpecial
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_StateSpecial";
				collapsed = 1;
				class Attributes
				{
					class DynamicSimulation
					{
						data = "dynamicSimulation";
						control = "Checkbox";
						displayName = "$STR_3DEN_object_attribute_dynsim_displayname";
						tooltip = "$STR_3DEN_object_attribute_dynsim_tooltip";
						wikiType = "[[Number]]";
					};
					class AddToDynSimGrid
					{
						data = "addToDynSimGrid";
						control = "Checkbox";
						displayName = "$STR_3DEN_object_attribute_wakeupdynsim_displayname";
						tooltip = "$STR_3DEN_object_attribute_wakeupdynsim_tooltip";
						wikiType = "[[Number]]";
					};
					class EnableSimulation
					{
						data = "enableSimulation";
						control = "Checkbox";
						displayName = "$STR_3DEN_Object_Attribute_EnableSimulation_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_EnableSimulation_tooltip";
						wikiType = "[[Bool]]";
					};
					class SimpleObject
					{
						data = "objectIsSimple";
						control = "Checkbox";
						displayName = "$STR_3DEN_Object_Attribute_SimpleObject_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_SimpleObject_tooltip";
						wikiType = "[[Bool]]";
					};
					class HideObject
					{
						property = "hideObject";
						control = "CheckboxReversed";
						displayName = "$STR_3DEN_Object_Attribute_HideObject_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_HideObject_tooltip";
						expression = "if !(is3DEN) then {_this hideobjectglobal _value;};";
						defaultValue = "false";
						wikiType = "[[Bool]]";
					};
					class AllowDamage
					{
						property = "allowDamage";
						control = "Checkbox";
						displayName = "$STR_3DEN_Object_Attribute_AllowDamage_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_AllowDamage_tooltip";
						expression = "_this allowdamage _value;";
						defaultValue = "true";
						wikiType = "[[Bool]]";
					};
					class EnableStamina
					{
						property = "enableStamina";
						control = "Checkbox";
						displayName = "$STR_3DEN_Object_Attribute_EnableStamina_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_EnableStamina_tooltip";
						expression = "_this enablestamina _value;";
						defaultValue = "true";
						condition = "objectBrain";
						wikiType = "[[Bool]]";
					};
					class EnableRevive
					{
						property = "EnableRevive";
						control = "EnableRevive";
						displayName = "$STR_A3_ReviveEnabled";
						tooltip = "$STR_A3_ReviveEnabled_Hint";
						expression = "if (getMissionConfigValue ['ReviveMode',0] == 2) then {_this setVariable ['#rev_enabled', _value, true]};";
						defaultValue = "false";
						condition = "objectControllable";
						wikiType = "[[Bool]]";
					};
					class DoorStates
					{
						property = "DoorStates";
						displayName = "Doors States";
						tooltip = "Set closed, locked or opened state for object doors.";
						control = "DoorStates";
						expression = "['init',_this,_value] call bis_fnc_3DENAttributeDoorStates;";
						defaultValue = "[0,0,0]";
					};
				};
			};
			class Identity
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Identity";
				collapsed = 1;
				class Attributes
				{
					class UnitName
					{
						property = "unitName";
						value = 0;
						control = "Edit";
						displayName = "$STR_3DEN_Object_Attribute_UnitName_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_UnitName_tooltip";
						expression = "_this setname _value;";
						defaultValue = "name _this";
						condition = "objectBrain";
						wikiType = "[[String]]";
						isLocalized = 1;
					};
					class Face
					{
						property = "face";
						value = 0;
						control = "Face";
						displayName = "$STR_3DEN_Object_Attribute_Face_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Face_tooltip";
						expression = "_this setface _value;";
						defaultValue = "face _this";
						condition = "objectBrain";
						wikiType = "[[String]]";
					};
					class NameSound
					{
						property = "NameSound";
						value = 0;
						control = "NameSound";
						displayName = "$STR_3DEN_Object_Attribute_NameSound_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_NameSound_tooltip";
						expression = "_this setNamesound _value;";
						defaultValue = "nameSound _this";
						condition = "objectBrain";
						wikiType = "[[String]]";
					};
					class Speaker
					{
						property = "speaker";
						value = 0;
						control = "Speaker";
						displayName = "$STR_3DEN_Object_Attribute_Speaker_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Speaker_tooltip";
						expression = "_this setspeaker _value;";
						defaultValue = "speaker _this";
						condition = "objectBrain";
						wikiType = "[[String]]";
					};
					class Pitch
					{
						property = "pitch";
						value = 0;
						control = "Pitch";
						displayName = "$STR_3DEN_Object_Attribute_Pitch_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Pitch_tooltip";
						expression = "_this setpitch _value;";
						defaultValue = "pitch _this";
						condition = "objectBrain";
						wikiType = "[[Number]]";
					};
					class UnitInsignia
					{
						property = "unitInsignia";
						value = 0;
						control = "UnitInsignia";
						displayName = "$STR_3DEN_Object_Attribute_UnitInsignia_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_UnitInsignia_tooltip";
						expression = "[_this,_value] call BIS_fnc_setUnitInsignia;";
						defaultValue = "''";
						condition = "objectBrain";
						wikiType = "[[String]]";
					};
				};
			};
			class Presence
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Presence";
				collapsed = 1;
				class Attributes
				{
					class Presence
					{
						data = "presence";
						value = 0;
						control = "Slider";
						displayName = "$STR_3DEN_Object_Attribute_Presence_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Presence_tooltip";
						wikiType = "[[Number]]";
					};
					class PresenceCondition
					{
						data = "presenceCondition";
						value = 0;
						validate = "condition";
						control = "EditCode";
						displayName = "$STR_3DEN_Object_Attribute_PresenceCondition_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_PresenceCondition_tooltip";
						wikiType = "[[String]]";
					};
				};
			};
			class Inventory
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Storage";
				collapsed = 1;
				class Attributes
				{
					class AmmoBox
					{
						property = "ammoBox";
						value = 0;
						control = "AmmoBox";
						displayName = "$STR_3DEN_Object_AttributeCategory_Storage";
						tooltip = "";
						expression = "[_this,_value] call bis_fnc_initAmmoBox;";
						defaultValue = "_this call bis_fnc_initAmmoBox;";
						condition = "objectHasInventoryCargo";
						wikiType = "[[String]]";
					};
				};
			};
			class System
			{
				displayName = "";
				collapsed = 1;
				class Attributes
				{
					class VehicleCustomization
					{
						property = "VehicleCustomization";
						value = 0;
						condition = "0";
						control = "Edit";
						displayName = "";
						tooltip = "";
						defaultValue = "[[],[]]";
						expression = "if (local _this) then {if (isSimpleObject _this) then {_this setVariable ['%s',_value]} else {([_this] + _value) call (uinamespace getvariable 'bis_fnc_initVehicle');};};";
					};
				};
			};
			class VehicleSystems
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_VehicleSystems";
				collapsed = 1;
				class Attributes
				{
					class ReportRemoteTargets
					{
						data = "ReportRemoteTargets";
						control = "Checkbox";
						displayName = "$STR_3DEN_Object_Attribute_ReportRemoteTargets_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_ReportRemoteTargets_tooltip";
						wikiType = "[[Bool]]";
					};
					class ReceiveRemoteTargets
					{
						data = "ReceiveRemoteTargets";
						control = "Checkbox";
						displayName = "$STR_3DEN_Object_Attribute_ReceiveRemoteTargets_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_ReceiveRemoteTargets_tooltip";
						wikiType = "[[Bool]]";
					};
					class ReportOwnPosition
					{
						data = "ReportOwnPosition";
						control = "Checkbox";
						displayName = "$STR_3DEN_Object_Attribute_ReportOwnPosition_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_ReportOwnPosition_tooltip";
						wikiType = "[[Bool]]";
					};
					class Radar
					{
						data = "RadarUsageAI";
						control = "Radar";
						displayName = "$STR_3DEN_Object_Attribute_Radar_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Radar_tooltip";
						wikiType = "[[String]]";
					};
				};
			};
		};
		class AttributeCategoryCustom
		{
			displayName = "$STR_3DEN_Object_Attribute_Custom_displayName";
		};
	};
	class Group
	{
		textSingular = "$STR_3DEN_Group_textSingular";
		textPlural = "$STR_3DEN_Group_textPlural";
		class Mode
		{
			text = "$STR_3DEN_Group_textPlural";
			texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\PanelRight\modeGroups_ca.paa";
			class Submodes
			{
				class West
				{
					text = "$STR_WEST";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_west_ca.paa";
				};
				class East
				{
					text = "$STR_EAST";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_east_ca.paa";
				};
				class Guer
				{
					text = "$STR_Guerrila";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_guer_ca.paa";
				};
				class Civ
				{
					text = "$STR_Civilian";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_civ_ca.paa";
				};
				class Empty
				{
					text = "$STR_3DEN_Object_Mode_Empty";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_empty_ca.paa";
				};
				class Custom
				{
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_custom_ca.paa";
					text = "$STR_3DEN_Group_Mode_Custom";
				};
			};
		};
		class Draw
		{
			textureWest = "\a3\Ui_f\data\Map\Markers\NATO\b_unknown.paa";
			textureEast = "\a3\Ui_f\data\Map\Markers\NATO\o_unknown.paa";
			textureGuer = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
			textureCivilian = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
			textureUnknown = "\a3\Ui_f\data\Map\Markers\NATO\n_unknown.paa";
			iconCustomComposition = "\a3\3DEN\Data\Cfg3DEN\Group\iconCustomComposition_ca.paa";
			class 3D
			{
				size = "32 * pixelW";
				offsetY = 5;
				colorLine[] = {0,0,0,1};
				color[] = {"side"};
				colorPreview[] = {"side"};
				alphaNormal = 0.5;
				alphaSelected = 1;
				alphaHover = 1;
				fadeDistance = 3000;
			};
			class 2D
			{
				size = "32 * pixelW";
				offsetY = 10;
				colorLine[] = {0,0,0,1};
				alphaNormal = 0.5;
				alphaSelected = 1;
				alphaHover = 1;
				color[] = {"side"};
				colorPreview[] = {"side"};
			};
		};
		class AttributeCategories
		{
			class Init
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Init";
				class Attributes
				{
					class Name
					{
						data = "Name";
						value = 0;
						unique = 1;
						validate = "variable";
						control = "EditCode";
						displayName = "$STR_3DEN_Object_Attribute_Name_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Name_tooltip";
						wikiType = "[[String]]";
					};
					class Init
					{
						data = "Init";
						value = 0;
						validate = "expression";
						control = "EditCodeMulti5";
						displayName = "$STR_3DEN_Object_Attribute_Init_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Init_tooltip";
						wikiType = "[[String]]";
					};
					class Callsign
					{
						property = "groupID";
						control = "Edit";
						displayName = "$STR_3DEN_Group_Attribute_Callsign_displayName";
						tooltip = "$STR_3DEN_Group_Attribute_Callsign_tooltip";
						unique = 1;
						expression = "_this setGroupID [_value];";
						defaultValue = "groupID _this";
						wikiType = "[[String]]";
						isLocalized = 1;
					};
					class Placement
					{
						data = "placementRadius";
						validate = "number";
						control = "Edit";
						displayName = "$STR_3DEN_Object_Attribute_Placement_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Placement_tooltip";
						wikiType = "[[Number]]";
					};
				};
			};
			class State
			{
				displayName = "$STR_3DEN_Group_AttributeCategory_State";
				class Attributes
				{
					class CombatMode
					{
						data = "combatMode";
						control = "CombatModeGroup";
						displayName = "$STR_3DEN_Group_Attribute_CombatMode_displayName";
						tooltip = "$STR_3DEN_Group_Attribute_CombatMode_tooltip";
						wikiType = "[[String]]";
					};
					class Behaviour
					{
						data = "behaviour";
						control = "BehaviourGroup";
						displayName = "$STR_3DEN_Group_Attribute_Behaviour_displayName";
						tooltip = "$STR_3DEN_Group_Attribute_Behaviour_tooltip";
						wikiType = "[[String]]";
					};
					class Formation
					{
						data = "formation";
						control = "FormationGroup";
						displayName = "$STR_3DEN_Group_Attribute_Formation_displayName";
						tooltip = "$STR_3DEN_Group_Attribute_Formation_tooltip";
						wikiType = "[[String]]";
					};
					class SpeedMode
					{
						data = "speedMode";
						control = "SpeedModeGroup";
						displayName = "$STR_3DEN_Group_Attribute_SpeedMode_displayName";
						tooltip = "$STR_3DEN_Group_Attribute_SpeedMode_tooltip";
						wikiType = "[[String]]";
					};
					class DynamicSimulation
					{
						data = "dynamicSimulation";
						control = "Checkbox";
						displayName = "$STR_3DEN_group_attribute_dynsim_displayname";
						tooltip = "$STR_3DEN_group_attribute_dynsim_tooltip";
						wikiType = "[[Bool]]";
					};
					class DeleteWhenEmpty
					{
						data = "garbageCollectGroup";
						control = "Checkbox";
						displayName = "$STR_3DEN_group_attribute_deleteempty_displayname";
						tooltip = "$STR_3DEN_group_attribute_deleteempty_tooltip";
						wikiType = "[[Bool]]";
					};
				};
			};
		};
	};
	class Trigger
	{
		textSingular = "$STR_3DEN_Trigger_textSingular";
		textPlural = "$STR_3DEN_Trigger_textPlural";
		class Mode
		{
			text = "$STR_3DEN_Trigger_textPlural";
			texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeTriggers_ca.paa";
			class Submodes
			{
				class Default
				{
					text = "";
					texture = "#(argb,8,8,3)color(0,0,0,0)";
				};
			};
		};
		class Draw
		{
			class 3D
			{
				size = "24 * pixelW";
				alphaNormal = 0.5;
				alphaSelected = 1;
				alphaHover = 1;
				color[] = {0.1,0.1,0.9,1};
				colorPreview[] = {0.1,0.1,0.9,1};
				fadeDistance = 3000;
			};
			class 2D
			{
				areaTexture = "\a3\3DEN\Data\Cfg3DEN\Trigger\areaTexture_ca.paa";
				areaBorder = 1;
				size = "24 * pixelW";
				alphaNormal = 0.5;
				alphaSelected = 1;
				alphaHover = 1;
				color[] = {0.1,0.1,0.9,1};
				colorPreview[] = {0.1,0.1,0.9,1};
			};
		};
		class Tooltip
		{
			activation[] = {"NONE","$STR_3DEN_Attributes_TriggerActivation_None_text","WEST","$STR_WEST","EAST","$STR_EAST","GUER","$STR_GUERRILA","CIV","$STR_CIVILIAN","LOGIC","$STR_LOGIC","ANY","$STR_3DEN_Attributes_TriggerActivation_Any_text","ANYPLAYER","$STR_3DEN_Attributes_TriggerActivation_AnyPlayer_text","ALPHA","$STR_3DEN_Attributes_TriggerActivation_RadioA_text","BRAVO","$STR_3DEN_Attributes_TriggerActivation_RadioB_text","CHARLIE","$STR_3DEN_Attributes_TriggerActivation_RadioC_text","DELTA","$STR_3DEN_Attributes_TriggerActivation_RadioD_text","ECHO","$STR_3DEN_Attributes_TriggerActivation_RadioE_text","FOXTROT","$STR_3DEN_Attributes_TriggerActivation_RadioF_text","GOLF","$STR_3DEN_Attributes_TriggerActivation_RadioG_text","HOTEL","$STR_3DEN_Attributes_TriggerActivation_RadioH_text","INDIA","$STR_3DEN_Attributes_TriggerActivation_RadioI_text","JULIET","$STR_3DEN_Attributes_TriggerActivation_RadioJ_text","WEST SEIZED","$STR_3DEN_Attributes_TriggerActivation_WestSeized_text","EAST SEIZED","$STR_3DEN_Attributes_TriggerActivation_EastSeized_text","GUER SEIZED","$STR_3DEN_Attributes_TriggerActivation_GuerSeized_text","VEHICLE","$STR_3DEN_Attributes_TriggerActivationOwner_Vehicle_text","GROUP","$STR_3DEN_Attributes_TriggerActivationOwner_Group_text","LEADER","$STR_3DEN_Attributes_TriggerActivationOwner_Leader_text","MEMBER","$STR_3DEN_Attributes_TriggerActivationOwner_Member_text"};
			activationType[] = {"PRESENT","$STR_3den_attributes_activationtype_present","NOT PRESENT","$STR_3den_attributes_activationtype_notpresent","WEST D","$STR_3den_attributes_activationtype_westdetected","EAST D","$STR_3den_attributes_activationtype_eastdetected","GUER D","$STR_3den_attributes_activationtype_guerdetected","CIV D","$STR_3den_attributes_activationtype_civdetected"};
		};
		class AttributeCategories
		{
			class Init
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Init";
				class Attributes
				{
					class Name
					{
						data = "name";
						value = 0;
						unique = 1;
						control = "EditCode";
						validate = "variable";
						displayName = "$STR_3DEN_Object_Attribute_Name_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Name_tooltip";
						wikiType = "[[String]]";
					};
					class Text
					{
						data = "text";
						value = 0;
						control = "EditCode";
						displayName = "$STR_3DEN_Trigger_Attribute_Text_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Text_tooltip";
						wikiType = "[[String]]";
					};
				};
			};
			class Transformation
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Transformation";
				class Attributes
				{
					class Position
					{
						data = "position";
						control = "EditXYZ";
						validate = "number";
						displayName = "$STR_3DEN_Object_Attribute_Position_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Position_tooltip";
						wikiType = "[[Position3D]]";
					};
					class Rotation
					{
						data = "rotation";
						control = "EditZ";
						validate = "number";
						displayName = "$STR_3DEN_Object_Attribute_Rotation_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Rotation_tooltip";
						wikiType = "[[Number]]";
					};
					class Size
					{
						data = "size2";
						control = "EditAB";
						validate = "number";
						displayName = "$STR_3DEN_Trigger_Attribute_Size_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Size_tooltip";
						wikiType = "[[Array]]";
					};
					class Size3
					{
						data = "size3";
						control = "EditABC";
						validate = "number";
						displayName = "$STR_3DEN_Trigger_Attribute_Size_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Size_tooltip";
						wikiType = "[[Array]]";
					};
					class Shape
					{
						data = "IsRectangle";
						control = "ShapeTrigger";
						displayName = "$STR_3DEN_Trigger_Attribute_Shape_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Shape_tooltip";
						wikiType = "[[Bool]]";
					};
				};
			};
			class Activation
			{
				displayName = "$STR_3DEN_Trigger_AttributeCategory_Activation";
				class Attributes
				{
					class Type
					{
						data = "TriggerType";
						control = "TriggerType";
						displayName = "$STR_3DEN_Trigger_Attribute_Type_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Type_tooltip";
						wikiType = "[[String]]";
					};
					class Activation
					{
						data = "ActivationBy";
						control = "TriggerActivation";
						displayName = "$STR_3DEN_Trigger_Attribute_Activation_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Activation_tooltip";
						wikiType = "[[String]]";
					};
					class ActivationOwner
					{
						data = "activationByOwner";
						control = "TriggerActivationOwner";
						displayName = "$STR_3DEN_Trigger_Attribute_Activation_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_ActivationOwner_tooltip";
						wikiType = "[[String]]";
					};
					class ActivationType
					{
						data = "activationType";
						control = "ActivationType";
						displayName = "$STR_3DEN_Trigger_Attribute_ActivationType_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_ActivationType_tooltip";
						wikiType = "[[String]]";
					};
					class Repeat
					{
						data = "repeatable";
						control = "Checkbox";
						displayName = "$STR_3DEN_Trigger_Attribute_Repeat_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Repeat_tooltip";
						wikiType = "[[Bool]]";
					};
					class IsServerOnly
					{
						data = "isServerOnly";
						control = "Checkbox";
						displayName = "$STR_3DEN_Trigger_Attribute_IsServerOnly_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_IsServerOnly_tooltip";
						wikiType = "[[Bool]]";
					};
				};
			};
			class Expression
			{
				displayName = "$STR_3DEN_Trigger_AttributeCategory_Expression";
				class Attributes
				{
					class Condition
					{
						data = "condition";
						value = 0;
						control = "EditCodeMulti3";
						validate = "condition";
						displayName = "$STR_3DEN_Trigger_Attribute_Condition_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Condition_tooltip";
						wikiType = "[[String]]";
					};
					class OnActivation
					{
						data = "onActivation";
						value = 0;
						control = "EditCodeMulti5";
						validate = "expression";
						displayName = "$STR_3DEN_Trigger_Attribute_OnActivation_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_OnActivation_tooltip";
						wikiType = "[[String]]";
					};
					class OnDeactivation
					{
						data = "onDeactivation";
						value = 0;
						control = "EditCodeMulti3";
						validate = "expression";
						displayName = "$STR_3DEN_Trigger_Attribute_OnDeactivation_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_OnDeactivation_tooltip";
						wikiType = "[[String]]";
					};
				};
			};
			class Timer
			{
				displayName = "$STR_3DEN_Trigger_AttributeCategory_Timer";
				class Attributes
				{
					class TimeoutType
					{
						data = "interuptable";
						value = 0;
						control = "TimeoutType";
						displayName = "$STR_3DEN_Trigger_Attribute_TimeoutType_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_TimeoutType_tooltip";
						wikiType = "[[Bool]]";
					};
					class Timeout
					{
						data = "timeout";
						value = 0;
						control = "Timeout";
						displayName = "$STR_3DEN_Trigger_Attribute_Timeout_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Timeout_tooltip";
						wikiType = "[[Array]] in format [min, mid, max]";
					};
				};
			};
			class Effects
			{
				displayName = "$STR_3DEN_Trigger_AttributeCategory_Effects";
				collapsed = 1;
				class Attributes
				{
					class Condition
					{
						data = "effectCondition";
						control = "Edit";
						validate = "condition";
						displayName = "$STR_3DEN_Trigger_Attribute_EffectCondition_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_EffectCondition_tooltip";
						wikiType = "[[String]]";
					};
					class Sound
					{
						data = "sound";
						control = "Sound";
						displayName = "$STR_3DEN_Trigger_Attribute_Sound_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Sound_tooltip";
						wikiType = "[[String]]";
					};
					class Voice
					{
						data = "voice";
						control = "SoundVoice";
						displayName = "$STR_3DEN_Trigger_Attribute_Voice_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Voice_tooltip";
						wikiType = "[[String]]";
					};
					class SoundEnvironment
					{
						data = "soundEnvironment";
						control = "SoundEnvironment";
						displayName = "$STR_3DEN_Trigger_Attribute_SoundEnvironment_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_SoundEnvironment_tooltip";
						wikiType = "[[String]]";
					};
					class SoundTrigger
					{
						data = "soundTrigger";
						control = "SoundEffect";
						displayName = "$STR_3DEN_Trigger_Attribute_SoundTrigger_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_SoundTrigger_tooltip";
						wikiType = "[[String]]";
					};
					class Music
					{
						data = "music";
						control = "Music";
						displayName = "$STR_3DEN_Trigger_Attribute_Music_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Music_tooltip";
						wikiType = "[[String]]";
					};
					class RscTitle
					{
						data = "title";
						control = "RscTitle";
						displayName = "$STR_3DEN_Trigger_Attribute_RscTitle_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_RscTitle_tooltip";
						wikiType = "[[String]]";
					};
				};
			};
		};
		class AttributeCategoryCustom
		{
			displayName = "$STR_3DEN_Trigger_Attribute_Custom_displayName";
		};
	};
	class Waypoint
	{
		textSingular = "$STR_3DEN_Waypoint_textSingular";
		textPlural = "$STR_3DEN_Waypoint_textPlural";
		class Mode
		{
			text = "$STR_3DEN_Waypoint_textPlural";
			texture = "\a3\3DEN\Data\Displays\Display3DEN\modeWaypoints_ca.paa";
			class Submodes
			{
				class Default
				{
					text = "";
					texture = "#(argb,8,8,3)color(0,0,0,0)";
				};
			};
		};
		class Draw
		{
			class 3D
			{
				size = "16 * pixelW";
				sizeBackground = "20 * pixelW";
				textureBackground = "\a3\3DEN\Data\Cfg3DEN\Waypoint\textureBackground_ca.paa";
				textureBackgroundAttached = "\a3\3DEN\Data\Cfg3DEN\Waypoint\textureBackgroundAttached_ca.paa";
				color[] = {0,0,0};
				colorBackground[] = {1,1,1};
				colorPreview[] = {0,0,0};
				colorPreviewBackground[] = {1,1,1};
				alphaNormal = 0.5;
				alphaNormalBackground = 0.7;
				alphaSelected = 1;
				alphaSelectedBackground = 1;
				alphaHover = 1;
				alphaHoverBackground = 1;
				fadeDistance = 750;
			};
			class 2D
			{
				size = "16 * pixelW";
				sizeBackground = "20 * pixelW";
				placementBorder = 2;
				completionRadiusBorder = 1;
				textureBackground = "\a3\3DEN\Data\Cfg3DEN\Waypoint\textureBackground_ca.paa";
				textureBackgroundAttached = "\a3\3DEN\Data\Cfg3DEN\Waypoint\textureBackgroundAttached_ca.paa";
				color[] = {0,0,0};
				colorBackground[] = {1,1,1};
				colorPreview[] = {0,0,0};
				colorPreviewBackground[] = {1,1,1};
				alphaNormal = 0.5;
				alphaNormalBackground = 0.7;
				alphaSelected = 1;
				alphaSelectedBackground = 1;
				alphaHover = 1;
				alphaHoverBackground = 1;
			};
		};
		class AttributeCategories
		{
			class Type
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Type";
				class Attributes
				{
					class Type
					{
						data = "itemClass";
						control = "Type";
						displayName = "$STR_3DEN_Object_Attribute_Type_displayName";
						tooltip = "$STR_3DEN_Waypoint_Attribute_Type_tooltip";
						wikiType = "[[String]]";
					};
				};
			};
			class Init
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Init";
				class Attributes
				{
					class Description
					{
						data = "description";
						value = 0;
						control = "Edit";
						displayName = "$STR_3DEN_Waypoint_Attribute_Description_displayName";
						tooltip = "$STR_3DEN_Waypoint_Attribute_Description_tooltip";
						wikiType = "[[String]]";
						isLocalized = 1;
					};
					class Order
					{
						data = "order";
						control = "Combo";
						displayName = "$STR_3DEN_Waypoint_Attribute_Order_displayName";
						tooltip = "$STR_3DEN_Waypoint_Attribute_Order_tooltip";
					};
					class Name
					{
						data = "name";
						value = 0;
						unique = 1;
						control = "Edit";
						displayName = "$STR_3DEN_Waypoint_Attribute_Name_displayName";
						tooltip = "$STR_3DEN_Waypoint_Attribute_Name_tooltip";
						wikiType = "[[String]]";
					};
				};
			};
			class Transformation
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Transformation";
				collapsed = 1;
				class Attributes
				{
					class Position
					{
						data = "position";
						control = "EditXYZ";
						validate = "number";
						displayName = "$STR_3DEN_Object_Attribute_Position_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Position_tooltip";
						wikiType = "[[Position3D]]";
					};
					class PlacementRadius
					{
						data = "placementRadius";
						control = "EditShort";
						validate = "number";
						displayName = "$STR_3DEN_Object_Attribute_Placement_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Placement_tooltip";
						wikiType = "[[Number]]";
					};
					class CompletionRadius
					{
						data = "completionRadius";
						control = "EditShort";
						validate = "number";
						displayName = "$STR_3DEN_Waypoint_Attribute_CompletionRadius_displayName";
						tooltip = "$STR_3DEN_Waypoint_Attribute_CompletionRadius_tooltip";
						wikiType = "[[Number]]";
					};
				};
			};
			class State
			{
				displayName = "$STR_3DEN_Group_AttributeCategory_State";
				class Attributes
				{
					class CombatMode
					{
						data = "combatMode";
						control = "CombatModeWaypoint";
						displayName = "$STR_3DEN_Group_Attribute_CombatMode_displayName";
						tooltip = "$STR_3DEN_Group_Attribute_CombatMode_tooltip";
						wikiType = "[[String]]";
					};
					class Behaviour
					{
						data = "behaviour";
						control = "BehaviourWaypoint";
						displayName = "$STR_3DEN_Group_Attribute_Behaviour_displayName";
						tooltip = "$STR_3DEN_Group_Attribute_Behaviour_tooltip";
						wikiType = "[[String]]";
					};
					class Formation
					{
						data = "formation";
						control = "FormationWaypoint";
						displayName = "$STR_3DEN_Group_Attribute_Formation_displayName";
						tooltip = "$STR_3DEN_Group_Attribute_Formation_tooltip";
						wikiType = "[[String]]";
					};
					class SpeedMode
					{
						data = "speedMode";
						control = "SpeedModeWaypoint";
						displayName = "$STR_3DEN_Group_Attribute_SpeedMode_displayName";
						tooltip = "$STR_3DEN_Group_Attribute_SpeedMode_tooltip";
						wikiType = "[[String]]";
					};
				};
			};
			class Expression
			{
				displayName = "$STR_3DEN_Trigger_AttributeCategory_Expression";
				class Attributes
				{
					class Condition
					{
						data = "condition";
						value = 0;
						control = "EditCodeMulti3";
						validate = "condition";
						displayName = "$STR_3DEN_Trigger_Attribute_Condition_displayName";
						tooltip = "$STR_3DEN_Waypoint_Attribute_Condition_tooltip";
						wikiType = "[[String]]";
					};
					class OnActivation
					{
						data = "onActivation";
						value = 0;
						control = "EditCodeMulti5";
						validate = "expression";
						displayName = "$STR_3DEN_Trigger_Attribute_OnActivation_displayName";
						tooltip = "$STR_3DEN_Waypoint_Attribute_OnActivation_tooltip";
						wikiType = "[[String]]";
					};
					class Script
					{
						data = "script";
						value = 0;
						control = "EditCode";
						displayName = "$STR_3DEN_Waypoint_Attribute_Script_displayName";
						tooltip = "$STR_3DEN_Waypoint_Attribute_Script_tooltip";
						wikiType = "[[String]]";
					};
				};
			};
			class Visibility
			{
				displayName = "$STR_3DEN_Waypoint_AttributeCategory_Visibility";
				class Attributes
				{
					class Show2D
					{
						data = "show2D";
						value = 0;
						control = "Checkbox";
						displayName = "$STR_3DEN_Waypoint_Attribute_Show2D_displayName";
						tooltip = "$STR_3DEN_Waypoint_Attribute_Show2D_tooltip";
						wikiType = "[[Bool]]";
					};
					class Show3D
					{
						data = "show3D";
						value = 0;
						control = "Checkbox";
						displayName = "$STR_3DEN_Waypoint_Attribute_Show3D_displayName";
						tooltip = "$STR_3DEN_Waypoint_Attribute_Show3D_tooltip";
						wikiType = "[[Bool]]";
					};
				};
			};
			class Timer
			{
				displayName = "$STR_3DEN_Trigger_AttributeCategory_Timer";
				class Attributes
				{
					class Timeout
					{
						data = "timeout";
						value = 0;
						control = "Timeout";
						displayName = "$STR_3DEN_Trigger_Attribute_Timeout_displayName";
						tooltip = "$STR_3DEN_Waypoint_Attribute_Timeout_tooltip";
						wikiType = "[[Array]] in format [min, mid, max]";
					};
				};
			};
			class Effects
			{
				displayName = "$STR_3DEN_Trigger_AttributeCategory_Effects";
				collapsed = 1;
				class Attributes
				{
					class Condition
					{
						data = "effectCondition";
						control = "Edit";
						validate = "condition";
						displayName = "$STR_3DEN_Trigger_Attribute_EffectCondition_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_EffectCondition_tooltip";
						wikiType = "[[String]]";
					};
					class Sound
					{
						data = "sound";
						control = "Sound";
						displayName = "$STR_3DEN_Trigger_Attribute_Sound_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Sound_tooltip";
						wikiType = "[[String]]";
					};
					class Voice
					{
						data = "voice";
						control = "SoundVoice";
						displayName = "$STR_3DEN_Trigger_Attribute_Voice_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Voice_tooltip";
						wikiType = "[[String]]";
					};
					class SoundEnvironment
					{
						data = "soundEnvironment";
						control = "SoundEnvironment";
						displayName = "$STR_3DEN_Trigger_Attribute_SoundEnvironment_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_SoundEnvironment_tooltip";
						wikiType = "[[String]]";
					};
					class Music
					{
						data = "music";
						control = "Music";
						displayName = "$STR_3DEN_Trigger_Attribute_Music_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Music_tooltip";
						wikiType = "[[String]]";
					};
					class RscTitle
					{
						data = "title";
						control = "RscTitle";
						displayName = "$STR_3DEN_Trigger_Attribute_RscTitle_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_RscTitle_tooltip";
						wikiType = "[[String]]";
					};
				};
			};
		};
		class AttributeCategoryCustom
		{
			displayName = "$STR_3DEN_Waypoint_Attribute_Custom_displayName";
		};
	};
	class Logic
	{
		textSingular = "$STR_3DEN_Logic_textSingular";
		textPlural = "$STR_3DEN_Logic_textPlural";
		class Mode
		{
			text = "$STR_3DEN_Logic_textPlural";
			texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeModules_ca.paa";
			default = 1;
			class Submodes
			{
				class Logic
				{
					text = "$STR_3DEN_Logic_Mode_Logic";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\submode_logic_logic_ca.paa";
				};
				class Module
				{
					text = "$STR_3DEN_Logic_Mode_Module";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\submode_logic_module_ca.paa";
				};
			};
		};
		class Draw
		{
			class 3D
			{
				size = "16 * pixelW";
				sizeBackground = "24 * pixelW";
				sizeModule = "32 * pixelW";
				sizeBackgroundModule = "48 * pixelW";
				textureBackground = "\a3\3DEN\Data\Cfg3DEN\Logic\textureBackground_ca.paa";
				textureBackgroundModule = "\a3\3DEN\Data\Cfg3DEN\Logic\textureBackgroundModule_ca.paa";
				color[] = {1,1,1};
				colorBackground[] = {0.1,0.1,0.95};
				colorPreview[] = {1,1,1};
				colorPreviewBackground[] = {0.1,0.1,0.95};
				colorModule[] = {0,0,0};
				colorModuleBackground[] = {1,1,1};
				colorModulePreview[] = {0,0,0};
				colorModulePreviewBackground[] = {1,1,1};
				alphaNormal = 0.5;
				alphaNormalBackground = 0.5;
				alphaSelected = 1;
				alphaSelectedBackground = 1;
				alphaHover = 1;
				alphaHoverBackground = 1;
				fadeDistance = 750;
			};
			class 2D
			{
				size = "16 * pixelW";
				sizeBackground = "24 * pixelW";
				sizeModule = "32 * pixelW";
				sizeBackgroundModule = "48 * pixelW";
				presenceBorder = 2;
				textureBackground = "\a3\3DEN\Data\Cfg3DEN\Logic\textureBackground_ca.paa";
				textureBackgroundModule = "\a3\3DEN\Data\Cfg3DEN\Logic\textureBackgroundModule_ca.paa";
				color[] = {1,1,1};
				colorBackground[] = {0.1,0.1,0.95};
				colorPreview[] = {1,1,1};
				colorPreviewBackground[] = {0.1,0.1,0.95};
				colorModule[] = {0,0,0};
				colorModuleBackground[] = {1,1,1};
				colorModulePreview[] = {0,0,0};
				colorModulePreviewBackground[] = {1,1,1};
				alphaNormal = 0.7;
				alphaNormalBackground = 0.7;
				alphaSelected = 1;
				alphaSelectedBackground = 1;
				alphaHover = 1;
				alphaHoverBackground = 1;
			};
		};
		class AttributeCategories
		{
			class Type
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Type";
				collapsed = 1;
				class Attributes
				{
					class Type
					{
						data = "itemClass";
						control = "Type";
						displayName = "$STR_3DEN_Object_Attribute_Type_displayName";
						tooltip = "";
						wikiType = "[[String]]";
					};
				};
			};
			class Init
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Init";
				class Attributes
				{
					class Name
					{
						data = "Name";
						value = 0;
						unique = 1;
						control = "EditCode";
						validate = "variable";
						displayName = "$STR_3DEN_Object_Attribute_Name_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Name_tooltip";
						wikiType = "[[String]]";
					};
					class Init
					{
						data = "Init";
						value = 0;
						control = "EditCodeMulti3";
						validate = "expression";
						displayName = "$STR_3DEN_Object_Attribute_Init_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Init_tooltip";
						wikiType = "[[String]]";
					};
				};
			};
			class Transformation
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Transformation";
				collapsed = 1;
				class Attributes
				{
					class Position
					{
						data = "position";
						control = "EditXYZ";
						validate = "number";
						displayName = "$STR_3DEN_Object_Attribute_Position_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Position_tooltip";
						wikiType = "[[Position3D]]";
					};
					class Rotation
					{
						data = "rotation";
						control = "EditXYZ";
						validate = "number";
						displayName = "$STR_3DEN_Object_Attribute_Rotation_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Rotation_tooltip";
						wikiType = "[[Number]]";
					};
					class Size
					{
						data = "size2";
						control = "EditAB";
						validate = "number";
						displayName = "$STR_3DEN_Trigger_Attribute_Size_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Size_tooltip";
						wikiType = "[[Array]]";
					};
					class Size3
					{
						data = "size3";
						control = "EditABC";
						validate = "number";
						displayName = "$STR_3DEN_Trigger_Attribute_Size_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Size_tooltip";
						wikiType = "[[Array]]";
					};
					class Shape
					{
						data = "IsRectangle";
						control = "ShapeTrigger";
						displayName = "$STR_3DEN_Trigger_Attribute_Shape_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Shape_tooltip";
						wikiType = "[[Bool]]";
					};
					class Placement
					{
						data = "placementRadius";
						validate = "number";
						control = "Edit";
						displayName = "$STR_3DEN_Object_Attribute_Placement_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Placement_tooltip";
						wikiType = "[[Number]]";
					};
				};
			};
			class Control
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Control";
				class Attributes
				{
					class ControlSP
					{
						data = "ControlSP";
						value = 0;
						unique = 1;
						control = "ControlSP";
						displayName = "$STR_3DEN_Object_Attribute_ControlSP_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_ControlSP_tooltip";
						wikiType = "[[Bool]]";
					};
					class ControlMP
					{
						data = "ControlMP";
						value = 0;
						control = "ControlMP";
						displayName = "$STR_3DEN_Object_Attribute_ControlMP_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_ControlMP_tooltip";
						wikiType = "[[Bool]]";
					};
					class Description
					{
						data = "description";
						value = 0;
						control = "Edit";
						displayName = "$STR_3DEN_Object_Attribute_Description_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Description_tooltip";
						wikiType = "[[String]]";
						isLocalized = 1;
					};
				};
			};
			class Presence
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Presence";
				collapsed = 1;
				class Attributes
				{
					class Presence
					{
						data = "presence";
						value = 0;
						control = "Slider";
						displayName = "$STR_3DEN_Object_Attribute_Presence_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Presence_tooltip";
						wikiType = "[[Number]]";
					};
					class PresenceCondition
					{
						data = "presenceCondition";
						value = 0;
						control = "EditCode";
						validate = "condition";
						displayName = "$STR_3DEN_Object_Attribute_PresenceCondition_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_PresenceCondition_tooltip";
						wikiType = "[[String]]";
					};
				};
			};
		};
		class AttributeCategoryCustom
		{
			displayName = "$STR_3DEN_Logic_Attribute_Custom_displayName";
			controlEdit = "Edit";
			controlCombo = "Combo";
			controlCheckbox = "Checkbox";
			expression = "_this setVariable ['%s',_value,true];";
		};
	};
	class Marker
	{
		textSingular = "$STR_3DEN_Marker_textSingular";
		textPlural = "$STR_3DEN_Marker_textPlural";
		class Mode
		{
			text = "$STR_3DEN_Marker_textPlural";
			texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeMarkers_ca.paa";
			class Submodes
			{
				class Icon
				{
					text = "$STR_3DEN_Marker_Mode_Icon";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\submode_marker_icon_ca.paa";
				};
				class Area
				{
					text = "$STR_3DEN_Marker_Mode_Area";
					texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\submode_marker_area_ca.paa";
				};
			};
		};
		class Draw
		{
			textEllipse = "$STR_3den_attributes_shapetrigger_ellipse";
			textRectangle = "$STR_3den_attributes_shapetrigger_rectangle";
			class 2D
			{
				sizeCenter = "16 * pixelW";
				textureCenter = "\a3\3DEN\Data\Cfg3DEN\Marker\textureCenter_ca.paa";
				alphaNormal = 0.5;
				alphaSelected = 1;
				alphaHover = 1;
				iconEllipse = "\a3\3DEN\Data\Cfg3DEN\Marker\iconEllipse_ca.paa";
				iconRectangle = "\a3\3DEN\Data\Cfg3DEN\Marker\iconRectangle_ca.paa";
			};
		};
		class AttributeCategories
		{
			class Type
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Type";
				collapsed = 1;
				class Attributes
				{
					class Type
					{
						data = "itemClass";
						control = "Type";
						displayName = "$STR_3DEN_Object_Attribute_Type_displayName";
						tooltip = "$STR_3DEN_Marker_Attribute_Type_tooltip";
						wikiType = "[[String]]";
					};
				};
			};
			class Init
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Init";
				class Attributes
				{
					class Name
					{
						data = "markerName";
						value = 0;
						unique = 1;
						control = "EditCode";
						validate = "notEmptyString";
						displayName = "$STR_3DEN_Object_Attribute_Name_displayName";
						tooltip = "$STR_3DEN_Marker_Attribute_Name_tooltip";
						wikiType = "[[String]]";
					};
					class Text
					{
						data = "text";
						value = 0;
						control = "Edit";
						displayName = "$STR_3DEN_Marker_Attribute_Text_displayName";
						tooltip = "$STR_3DEN_Marker_Attribute_Text_tooltip";
						wikiType = "[[String]]";
						isLocalized = 1;
					};
				};
			};
			class Transformation
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Transformation";
				class Attributes
				{
					class Position
					{
						data = "position";
						control = "EditXY";
						validate = "number";
						displayName = "$STR_3DEN_Object_Attribute_Position_displayName";
						tooltip = "$STR_3DEN_Marker_Attribute_Position_tooltip";
						wikiType = "[[Position3D]]";
					};
					class Size
					{
						data = "size2";
						control = "EditAB";
						validate = "number";
						displayName = "$STR_3DEN_Trigger_Attribute_Size_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Size_tooltip";
						wikiType = "[[Array]]";
					};
					class Rotation
					{
						data = "rotation";
						control = "EditZ";
						validate = "number";
						displayName = "$STR_3DEN_Object_Attribute_Rotation_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Rotation_tooltip";
						wikiType = "[[Number]]";
					};
				};
			};
			class Style
			{
				displayName = "$STR_3DEN_Marker_AttributeCategory_Style";
				class Attributes
				{
					class Shape
					{
						data = "markerType";
						control = "ShapeMarker";
						displayName = "$STR_3DEN_Trigger_Attribute_Shape_displayName";
						tooltip = "$STR_3DEN_Trigger_Attribute_Shape_tooltip";
						wikiType = "[[String]]";
					};
					class Brush
					{
						data = "brush";
						control = "markerBrush";
						displayName = "$STR_3DEN_Marker_Attribute_Brush_displayName";
						tooltip = "$STR_3DEN_Marker_Attribute_Brush_tooltip";
						wikiType = "[[String]]";
					};
					class Color
					{
						data = "baseColor";
						control = "MarkerColor";
						displayName = "$STR_3DEN_Marker_Attribute_Color_displayName";
						tooltip = "$STR_3DEN_Marker_Attribute_Color_tooltip";
						wikiType = "[[Array]]";
					};
					class Alpha
					{
						data = "alpha";
						control = "Slider";
						displayName = "$STR_3DEN_Marker_Attribute_Alpha_displayName";
						tooltip = "$STR_3DEN_Marker_Attribute_Alpha_tooltip";
						wikiType = "[[Number]]";
					};
				};
			};
		};
		class AttributeCategoryCustom
		{
			displayName = "$STR_3DEN_Marker_Attribute_Custom_displayName";
		};
	};
	class Favorites
	{
		class Mode
		{
			text = "$STR_3DEN_Favorite_textPlural";
			texture = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\modeFavorites_ca.paa";
			class Submodes
			{
				class Default
				{
					text = "";
					texture = "#(argb,8,8,3)color(1,1,1,1)";
				};
			};
		};
	};
	class Layer
	{
		textSingular = "$STR_3DEN_Layer_textSingular";
		textPlural = "$STR_3DEN_Layer_textPlural";
		class DefaultLayers
		{
			west = "$STR_WEST";
			east = "$STR_EAST";
			guer = "$STR_GUERRILA";
			civ = "$STR_CIVILIAN";
			empty = "$STR_3DEN_Object_Mode_Empty";
			logic = "$STR_3DEN_Logic_textPlural";
			triggers = "$STR_3DEN_Trigger_textPlural";
			markers = "$STR_3DEN_Marker_textPlural";
		};
		class Draw
		{
			iconDefault = "\a3\3DEN\Data\Cfg3DEN\Layer\iconDefault_ca.paa";
			icon = "\a3\3DEN\Data\Cfg3DEN\Layer\icon_ca.paa";
			iconHidden = "\a3\3DEN\Data\Cfg3DEN\Layer\iconHidden_ca.paa";
			iconDisabled = "\a3\3DEN\Data\Cfg3DEN\Layer\iconDisabled_ca.paa";
			iconHiddenDisabled = "\a3\3DEN\Data\Cfg3DEN\Layer\iconHiddenDisabled_ca.paa";
		};
		class AttributeCategories
		{
			class Init
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Init";
				class Attributes
				{
					class Name
					{
						data = "Name";
						value = 0;
						control = "Edit";
						displayName = "$STR_3DEN_Layer_Attribute_Name_displayName";
					};
					class Transformation
					{
						data = "Transformation";
						value = 0;
						control = "Checkbox";
						displayName = "$STR_3DEN_Layer_Attribute_Transformation_displayName";
					};
					class Visibility
					{
						data = "Visibility";
						value = 0;
						control = "Checkbox";
						displayName = "$STR_3DEN_Layer_Attribute_Visibility_displayName";
					};
				};
			};
		};
	};
	class Comment
	{
		textSingular = "$STR_3DEN_Comment_textSingular";
		textPlural = "$STR_3DEN_Comment_textPlural";
		class Draw
		{
			texture = "\a3\3DEN\Data\Cfg3DEN\Comment\texture_ca.paa";
			class 3D
			{
				size = "24 * pixelW";
				color[] = {0,1,0.75,1};
				colorPreview[] = {0,1,0.75,1};
				alphaNormal = 0.7;
				alphaSelected = 1;
				alphaHover = 1;
				shadow = 1;
				font = "RobotoCondensed";
				sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				fadeDistance = 750;
			};
			class 2D
			{
				size = "24 * pixelW";
				color[] = {0,1,0.75,1};
				colorPreview[] = {0,1,0.75,1};
				alphaNormal = 0.7;
				alphaSelected = 1;
				alphaHover = 1;
				shadow = 1;
				font = "RobotoCondensed";
				sizeEx = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			};
		};
		class AttributeCategories
		{
			class Init
			{
				displayName = "$STR_3DEN_Object_AttributeCategory_Init";
				class Attributes
				{
					class Name
					{
						data = "Name";
						value = 0;
						control = "Edit";
						displayName = "$STR_3den_comment_attribute_name_displayname";
						tooltip = "";
						wikiType = "[[String]]";
					};
					class Description
					{
						data = "Description";
						value = 0;
						control = "EditMulti5";
						displayName = "$STR_3den_comment_attribute_name_tooltip";
						tooltip = "";
						wikiType = "[[String]]";
					};
					class Position
					{
						data = "position";
						validate = "number";
						control = "EditXYZ";
						displayName = "$STR_3DEN_Object_Attribute_Position_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Position_tooltip";
						wikiType = "[[Position3D]]";
					};
					class Rotation
					{
						data = "rotation";
						control = "EditZ";
						validate = "number";
						displayName = "$STR_3DEN_Object_Attribute_Rotation_displayName";
						tooltip = "$STR_3DEN_Object_Attribute_Rotation_tooltip";
						wikiType = "[[Number]]";
					};
				};
			};
		};
	};
	class Mission
	{
		class Intel
		{
			displayName = "$STR_3DEN_Environment_textSingular";
			display = "Display3DENEditAttributesIntel";
			class AttributeCategories
			{
				class Date
				{
					displayName = "$STR_3DEN_Environment_Attribute_Date_displayName";
					class Attributes
					{
						class Date
						{
							data = "IntelDate";
							value = 0;
							control = "Date";
							displayName = "$STR_3DEN_Environment_Attribute_Date_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_Date_tooltip";
							expression = "";
							defaultValue = "";
							wikiType = "[[Array]] in format [year, month, day]";
						};
						class Daytime
						{
							data = "IntelTime";
							value = 0;
							control = "SliderTimeDay";
							tooltip = "$STR_3DEN_Environment_Attribute_Daytime_tooltip";
							displayName = "$STR_3DEN_Environment_Attribute_Daytime_displayName";
							expression = "";
							defaultValue = "";
							wikiType = "[[Number]]";
						};
					};
				};
				class ForecastTime
				{
					displayName = "$STR_3DEN_Environment_AttributeCategory_ForecastTime";
					collapsed = 1;
					class Attributes
					{
						class ForecastTime
						{
							data = "IntelTimeOfChanges";
							value = 0;
							control = "SliderTimeForecast";
							displayName = "$STR_3DEN_Environment_Attribute_ForecastTime_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_ForecastTime_tooltip";
							expression = "";
							defaultValue = "1";
							wikiType = "[[Number]]";
						};
					};
				};
				class Overcast
				{
					displayName = "$STR_3DEN_Environment_AttributeCategory_Overcast";
					class Attributes
					{
						class OvercastStart
						{
							data = "IntelWeatherStart";
							value = 0;
							control = "Overcast";
							displayName = "$STR_3DEN_Environment_Attribute_OvercastStart_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_OvercastStart_tooltip";
							wikiType = "[[Number]]";
						};
						class OvercastForecast
						{
							data = "IntelWeatherForecast";
							value = 0;
							control = "Slider";
							displayName = "$STR_3DEN_Environment_Attribute_OvercastForecast_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_OvercastForecast_tooltip";
							wikiType = "[[Number]]";
						};
					};
				};
				class Fog
				{
					displayName = "$STR_3DEN_Environment_AttributeCategory_Fog";
					class Attributes
					{
						class FogStart
						{
							data = "IntelFogStart";
							value = 0;
							control = "Fog";
							displayName = "$STR_3DEN_Environment_Attribute_FogStart_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_FogStart_tooltip";
							wikiType = "[[Number]]";
						};
						class FogForecast
						{
							data = "IntelFogForecast";
							value = 0;
							control = "Fog";
							displayName = "$STR_3DEN_Environment_Attribute_FogForecast_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_FogForecast_tooltip";
							wikiType = "[[Number]]";
						};
					};
				};
				class Rain
				{
					displayName = "$STR_3DEN_Environment_AttributeCategory_Rain";
					collapsed = 1;
					class Attributes
					{
						class RainForced
						{
							data = "IntelRainIsForced";
							value = 0;
							control = "CheckboxState";
							displayName = "$STR_3DEN_Environment_Attribute_Forced_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_Forced_tooltip";
							wikiType = "[[Bool]]";
						};
						class RainStart
						{
							data = "IntelRainStart";
							value = 0;
							control = "Rain";
							displayName = "$STR_3DEN_Environment_Attribute_RainStart_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_RainStart_tooltip";
							wikiType = "[[Number]]";
						};
						class RainForecast
						{
							data = "IntelRainForecast";
							value = 0;
							control = "Slider";
							displayName = "$STR_3DEN_Environment_Attribute_RainForecast_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_RainForecast_tooltip";
							wikiType = "[[Number]]";
						};
					};
				};
				class Lightnings
				{
					displayName = "$STR_3DEN_Environment_AttributeCategory_Lightnings";
					collapsed = 1;
					class Attributes
					{
						class LightningsForced
						{
							data = "IntelLightningIsForced";
							value = 0;
							control = "CheckboxState";
							displayName = "$STR_3DEN_Environment_Attribute_Forced_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_Forced_tooltip";
							wikiType = "[[Bool]]";
						};
						class LightningsStart
						{
							data = "IntelLightningStart";
							value = 0;
							control = "Slider";
							displayName = "$STR_3DEN_Environment_Attribute_LightningsStart_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_LightningsStart_tooltip";
							wikiType = "[[Number]]";
						};
						class LightningsForecast
						{
							data = "IntelLightningForecast";
							value = 0;
							control = "Slider";
							displayName = "$STR_3DEN_Environment_Attribute_LightningsForecast_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_LightningsForecast_tooltip";
							wikiType = "[[Number]]";
						};
					};
				};
				class Waves
				{
					displayName = "$STR_3DEN_Environment_AttributeCategory_Waves";
					collapsed = 1;
					class Attributes
					{
						class WavesForced
						{
							data = "IntelWavesIsForced";
							value = 0;
							control = "CheckboxState";
							displayName = "$STR_3DEN_Environment_Attribute_Forced_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_Forced_tooltip";
							wikiType = "[[Bool]]";
						};
						class WavesStart
						{
							data = "IntelWavesStart";
							value = 0;
							control = "Waves";
							displayName = "$STR_3DEN_Environment_Attribute_WavesStart_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_WavesStart_tooltip";
							wikiType = "[[Number]]";
						};
						class WavesForecast
						{
							data = "IntelWavesForecast";
							value = 0;
							control = "Slider";
							displayName = "$STR_3DEN_Environment_Attribute_WavesForecast_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_WavesForecast_tooltip";
							wikiType = "[[Number]]";
						};
					};
				};
				class Wind
				{
					displayName = "$STR_3DEN_Environment_AttributeCategory_Wind";
					collapsed = 1;
					class Attributes
					{
						class WindForced
						{
							data = "IntelWindIsForced";
							value = 0;
							control = "CheckboxState";
							displayName = "$STR_3DEN_Environment_Attribute_Forced_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_Forced_tooltip";
							wikiType = "[[Bool]]";
						};
						class WindStart
						{
							data = "IntelWindStart";
							value = 0;
							control = "Wind";
							displayName = "$STR_3DEN_Environment_Attribute_WindStart_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_WindStart_tooltip";
							wikiType = "[[Number]]";
						};
						class WindForecast
						{
							data = "IntelWindForecast";
							value = 0;
							control = "Slider";
							displayName = "$STR_3DEN_Environment_Attribute_WindForecast_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_WindForecast_tooltip";
							wikiType = "[[Number]]";
						};
						class GustsStart
						{
							data = "IntelWindGustStart";
							value = 0;
							control = "Slider";
							displayName = "$STR_3DEN_Environment_Attribute_GustsStart_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_GustsStart_tooltip";
							wikiType = "[[Number]]";
						};
						class GustsForecast
						{
							data = "IntelWindGustForecast";
							value = 0;
							control = "Gusts";
							displayName = "$STR_3DEN_Environment_Attribute_GustsForecast_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_GustsForecast_tooltip";
							wikiType = "[[Number]]";
						};
						class DirectionStart
						{
							data = "IntelWindDirectionStart";
							value = 0;
							control = "WindDir";
							displayName = "$STR_3DEN_Environment_Attribute_DirectionStart_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_DirectionStart_tooltip";
							wikiType = "[[Number]]";
						};
						class DirectionForecast
						{
							data = "IntelWindDirectionForecast";
							value = 0;
							control = "EditZ";
							displayName = "$STR_3DEN_Environment_Attribute_DirectionForecast_displayName";
							tooltip = "$STR_3DEN_Environment_Attribute_DirectionForecast_tooltip";
							wikiType = "[[Number]]";
						};
					};
				};
			};
		};
		class Scenario
		{
			displayName = "$STR_3DEN_Scenario_textSingular";
			class AttributeCategories
			{
				class Presentation
				{
					displayName = "$STR_3DEN_Scenario_AttributeCategory_Presentation_displayName";
					class Attributes
					{
						class BriefingName
						{
							data = "IntelBriefingName";
							value = 0;
							control = "Edit";
							displayName = "$STR_3DEN_Scenario_Attribute_BriefingName_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_BriefingName_tooltip";
							defaultValue = "''";
							wikiType = "[[String]]";
							isLocalized = 1;
						};
						class Author
						{
							data = "Author";
							value = 0;
							control = "Edit";
							displayName = "$STR_3DEN_Scenario_Attribute_Author_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_Author_tooltip";
							defaultValue = "profileNameSteam";
							wikiType = "[[String]]";
							isLocalized = 1;
						};
					};
				};
				class Overview
				{
					displayName = "$STR_3DEN_Scenario_AttributeCategory_Overview_displayName";
					class Attributes
					{
						class OverviewPicture
						{
							data = "OverviewPicture";
							value = 0;
							control = "Edit";
							displayName = "$STR_3DEN_Scenario_Attribute_OverviewPicture_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_OverviewPicture_tooltip";
							defaultValue = "''";
							wikiType = "[[String]]";
						};
						class OverviewText
						{
							data = "OverviewText";
							value = 0;
							control = "EditMulti5";
							displayName = "$STR_3DEN_Scenario_Attribute_OverviewText_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_OverviewText_tooltip";
							defaultValue = "''";
							wikiType = "[[String]]";
							isLocalized = 1;
						};
						class AppId
						{
							data = "AppId";
							value = 0;
							control = "AppId";
							displayName = "$STR_3DEN_Scenario_Attribute_AppId_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_AppId_tooltip";
							defaultValue = "0";
							wikiType = "[[Number]]";
						};
						class AssetType
						{
							data = "AssetType";
							value = 0;
							control = "AssetType";
							displayName = "$STR_3DEN_Scenario_Attribute_AssetType_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_AssetType_tooltip";
							defaultValue = "'restricted'";
							wikiType = "[[String]]";
						};
					};
				};
				class OverviewLocked
				{
					displayName = "$STR_3DEN_Scenario_AttributeCategory_OverviewLocked_displayName";
					collapsed = 1;
					class Attributes
					{
						class OverviewPictureLocked
						{
							data = "OverviewPictureLocked";
							value = 0;
							control = "Edit";
							displayName = "$STR_3DEN_Scenario_Attribute_OverviewPicture_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_OverviewPictureLocked_tooltip";
							defaultValue = "''";
							wikiType = "[[String]]";
						};
						class OverviewTextLocked
						{
							data = "OverviewTextLocked";
							value = 0;
							control = "EditMulti5";
							displayName = "$STR_3DEN_Scenario_Attribute_OverviewText_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_OverviewTextLocked_tooltip";
							defaultValue = "''";
							wikiType = "[[String]]";
							isLocalized = 1;
						};
					};
				};
				class Loading
				{
					displayName = "$STR_3DEN_Scenario_AttributeCategory_Loading_displayName";
					collapsed = 1;
					class Attributes
					{
						class LoadScreen
						{
							data = "LoadScreen";
							value = 0;
							control = "Edit";
							displayName = "$STR_3DEN_Scenario_Attribute_OverviewPicture_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_LoadScreen_tooltip";
							defaultValue = "''";
							wikiType = "[[String]]";
						};
						class OnLoadMission
						{
							data = "OnLoadMission";
							value = 0;
							control = "EditMulti5";
							displayName = "$STR_3DEN_Scenario_Attribute_OverviewText_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_OnLoadMission_tooltip";
							defaultValue = "''";
							wikiType = "[[String]]";
							isLocalized = 1;
						};
					};
				};
				class States
				{
					displayName = "$STR_3DEN_Scenario_AttributeCategory_States_displayName";
					collapsed = 1;
					class Attributes
					{
						class Briefing
						{
							data = "Briefing";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3DEN_Scenario_Attribute_Briefing_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_Briefing_tooltip";
							wikiType = "[[Bool]]";
						};
						class Debriefing
						{
							data = "Debriefing";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3DEN_Scenario_Attribute_Debriefing_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_Debriefing_tooltip";
							wikiType = "[[Bool]]";
						};
						class Saving
						{
							data = "Saving";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3DEN_Scenario_Attribute_Saving_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_Saving_tooltip";
							wikiType = "[[Bool]]";
						};
						class ShowMap
						{
							data = "ShowMap";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3DEN_Scenario_Attribute_ShowMap_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_ShowMap_tooltip";
							wikiType = "[[Bool]]";
						};
						class ShowCompass
						{
							data = "ShowCompass";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3DEN_Scenario_Attribute_ShowCompass_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_ShowCompass_tooltip";
							wikiType = "[[Bool]]";
						};
						class ShowWatch
						{
							data = "ShowWatch";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3DEN_Scenario_Attribute_ShowWatch_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_ShowWatch_tooltip";
							wikiType = "[[Bool]]";
						};
						class ShowGPS
						{
							data = "ShowGPS";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3DEN_Scenario_Attribute_ShowGPS_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_ShowGPS_tooltip";
							wikiType = "[[Bool]]";
						};
						class ShowHUD
						{
							data = "ShowHUD";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3DEN_Scenario_Attribute_ShowHUD_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_ShowHUD_tooltip";
							wikiType = "[[Bool]]";
						};
						class ShowUAVFeed
						{
							data = "ShowUAVFeed";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3DEN_Scenario_Attribute_ShowUAVFeed_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_ShowUAVFeed_tooltip";
							wikiType = "[[Bool]]";
						};
						class ForceRotorLibSimulation
						{
							data = "ForceRotorLibSimulation";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3DEN_Scenario_Attribute_ForceRotorLibSimulation_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_ForceRotorLibSimulation_tooltip";
							wikiType = "[[Bool]]";
						};
						class EnableDebugConsole
						{
							property = "EnableDebugConsole";
							value = 0;
							control = "EnableDebugConsole";
							displayName = "$STR_3den_display3den_menubar_debugconsole_text";
							tooltip = "$STR_3DEN_Scenario_Attribute_EnableDebugConsole_tooltip";
							defaultValue = "0";
							expression = "true";
							typeName = "NUMBER";
							wikiType = "[[Number]]";
						};
					};
				};
				class Unlock
				{
					displayName = "$STR_3DEN_Scenario_AttributeCategory_Unlock_displayName";
					collapsed = 1;
					class Attributes
					{
						class DoneKeys
						{
							data = "DoneKeys";
							value = 0;
							control = "EditArray";
							displayName = "$STR_3DEN_Scenario_Attribute_DoneKeys_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_DoneKeys_tooltip";
							defaultValue = "[]";
							wikiType = "[[Array]]";
						};
						class Keys
						{
							data = "Keys";
							value = 0;
							control = "EditArray";
							displayName = "$STR_3DEN_Scenario_Attribute_Keys_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_Keys_tooltip";
							defaultValue = "[]";
							wikiType = "[[Array]]";
						};
						class KeysLimit
						{
							data = "KeysLimit";
							value = 0;
							control = "EditShort";
							displayName = "$STR_3DEN_Scenario_Attribute_KeysLimit_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_KeysLimit_tooltip";
							defaultValue = "0";
							wikiType = "[[Number]]";
						};
					};
				};
				class Init
				{
					displayName = "$STR_3DEN_Object_AttributeCategory_Init";
					collapsed = 1;
					class Attributes
					{
						class Init
						{
							property = "Init";
							value = 0;
							control = "EditCodeMulti5";
							displayName = "$STR_3DEN_Object_Attribute_Init_displayName";
							tooltip = "$STR_3DEN_Object_Attribute_Init_tooltip";
							expression = "if !(is3DEN) then {[] call compile _value;};";
							defaultValue = "''";
							validate = "expression";
							wikiType = "[[String]]";
						};
					};
				};
				class Misc
				{
					displayName = "$STR_3DEN_Scenario_AttributeCategory_Misc_displayName";
					class Attributes
					{
						class GuerAllegiance
						{
							data = "IntelIndepAllegiance";
							value = 0;
							control = "GuerAllegiance";
							displayName = "$STR_3DEN_Scenario_Attribute_GuerAllegiance_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_GuerAllegiance_tooltip";
							expression = "";
							defaultValue = "true";
							wikiType = "[[Array]] in format [west:[[Number]],east:[[Number]]]";
						};
						class Binarize
						{
							data = "SaveBinarized";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3DEN_Scenario_Attribute_Binarize_displayName";
							tooltip = "$STR_3DEN_Scenario_Attribute_Binarize_tooltip";
							wikiType = "[[Bool]]";
						};
					};
				};
			};
		};
		class Multiplayer
		{
			displayName = "$STR_3DEN_Multiplayer_textSingular";
			class AttributeCategories
			{
				class Type
				{
					displayName = "$STR_3DEN_Multiplayer_AttributeCategory_Type_displayName";
					class Attributes
					{
						class GameType
						{
							data = "GameType";
							value = 0;
							control = "GameType";
							displayName = "$STR_3DEN_Multiplayer_Attribute_GameType_displayName";
							tooltip = "$STR_3DEN_Multiplayer_Attribute_GameType_tooltip";
							defaultValue = 0;
							wikiType = "[[String]]";
						};
						class MinPlayers
						{
							data = "MinPlayers";
							value = 0;
							validate = "number";
							control = "EditShort";
							displayName = "$STR_3DEN_Multiplayer_Attribute_MinPlayers_displayName";
							tooltip = "$STR_3DEN_Multiplayer_Attribute_MinPlayers_tooltip";
							wikiType = "[[Number]]";
						};
						class MaxPlayers
						{
							data = "MaxPlayers";
							value = 0;
							validate = "number";
							control = "EditShort";
							displayName = "$STR_3DEN_Multiplayer_Attribute_MaxPlayers_displayName";
							tooltip = "$STR_3DEN_Multiplayer_Attribute_MaxPlayers_tooltip";
							wikiType = "[[Number]]";
						};
					};
				};
				class Lobby
				{
					displayName = "$STR_3DEN_Multiplayer_AttributeCategory_Lobby_displayName";
					class Attributes
					{
						class OverviewText
						{
							data = "IntelOverviewText";
							value = 0;
							control = "Edit";
							displayName = "$STR_3DEN_Multiplayer_Attribute_OverviewText_displayName";
							tooltip = "$STR_3DEN_Multiplayer_Attribute_OverviewText_tooltip";
							defaultValue = "''";
							wikiType = "[[Text]]";
						};
						class DisabledAI
						{
							data = "DisabledAI";
							value = 0;
							control = "CheckboxReversed";
							displayName = "$STR_3DEN_Multiplayer_Attribute_DisabledAI_displayName";
							tooltip = "$STR_3DEN_Multiplayer_Attribute_DisabledAI_tooltip";
							wikiType = "[[Bool]]";
						};
						class JoinUnassigned
						{
							data = "JoinUnassigned";
							value = 0;
							control = "CheckboxReversed";
							displayName = "$STR_3DEN_Multiplayer_Attribute_JoinUnassigned_displayName";
							tooltip = "$STR_3DEN_Multiplayer_Attribute_JoinUnassigned_tooltip";
							wikiType = "[[Bool]]";
						};
					};
				};
				class Respawn
				{
					displayName = "$STR_3DEN_Multiplayer_AttributeCategory_Respawn_displayName";
					class Attributes
					{
						class Respawn
						{
							data = "Respawn";
							value = 0;
							control = "Respawn";
							displayName = "$STR_3DEN_Multiplayer_AttributeCategory_Respawn_displayName";
							tooltip = "$STR_3DEN_Multiplayer_Attribute_Respawn_tooltip";
							wikiType = "[[Number]]";
						};
						class RespawnTemplates
						{
							property = "RespawnTemplates";
							value = 0;
							control = "RespawnTemplates";
							displayName = "$STR_3DEN_Multiplayer_Attribute_RespawnTemplates_displayName";
							tooltip = "$STR_3DEN_Multiplayer_Attribute_RespawnTemplates_tooltip";
							defaultValue = "['']";
							expression = "true";
							wikiType = "[[Array]]";
						};
						class RespawnDelay
						{
							data = "RespawnDelay";
							value = 0;
							control = "SliderTimeRespawn";
							displayName = "$STR_3DEN_Multiplayer_Attribute_RespawnDelay_displayName";
							tooltip = "$STR_3DEN_Multiplayer_Attribute_RespawnDelay_tooltip";
							respawnTypes[] = {2,3};
							wikiType = "[[Number]]";
						};
						class RespawnVehicleDelay
						{
							data = "RespawnVehicleDelay";
							value = 0;
							control = "SliderTimeRespawn";
							displayName = "$STR_3DEN_Multiplayer_Attribute_RespawnVehicleDelay_displayName";
							tooltip = "$STR_3DEN_Multiplayer_Attribute_RespawnVehicleDelay_tooltip";
							wikiType = "[[Number]]";
						};
						class RespawnDialog
						{
							data = "RespawnDialog";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3DEN_Multiplayer_Attribute_RespawnDialog_displayName";
							tooltip = "$STR_3DEN_Multiplayer_Attribute_RespawnDialog_tooltip";
							respawnTypes[] = {2,3};
							wikiType = "[[Bool]]";
						};
						class RespawnButton
						{
							property = "RespawnButton";
							value = 0;
							control = "CheckboxNumber";
							displayName = "$STR_3DEN_Multiplayer_Attribute_RespawnButton_displayName";
							tooltip = "$STR_3DEN_Multiplayer_Attribute_RespawnButton_tooltip";
							defaultValue = 1;
							respawnTypes[] = {2,3,4,5};
							expression = "true";
							wikiType = "[[Bool]]";
						};
						class EnableTeamSwitch
						{
							data = "EnableTeamSwitch";
							value = 0;
							control = "CheckboxNumber";
							displayName = "$STR_3DEN_Multiplayer_Attribute_EnableTeamSwitch_displayName";
							tooltip = "$STR_3DEN_Multiplayer_Attribute_EnableTeamSwitch_tooltip";
							respawnTypes[] = {5};
							expression = "true";
							wikiType = "[[Bool]]";
						};
						class AIKills
						{
							data = "AIKills";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3DEN_Multiplayer_Attribute_AIKills_displayName";
							tooltip = "$STR_3DEN_Multiplayer_Attribute_AIKills_tooltip";
							wikiType = "[[Bool]]";
						};
					};
				};
				class Tasks
				{
					displayName = "$STR_3den_multiplayer_attributecategory_tasks_displayname";
					collapsed = 1;
					class Attributes
					{
						class SharedObjectives
						{
							control = "SharedObjectives";
							property = "SharedObjectives";
							displayName = "$STR_3den_multiplayer_attribute_sharedobjectives_displayname";
							tooltip = "$STR_3den_multiplayer_attribute_sharedobjectives_tooltip";
							expression = "if (isMultiplayer) then {[_value] spawn bis_fnc_sharedObjectives;};";
							defaultValue = "0";
							typeName = "number";
							wikiType = "[[String]]";
						};
					};
				};
				class Revive
				{
					displayName = "$STR_A3_ReviveTitle";
					collapsed = 0;
					class Attributes
					{
						class ReviveMode
						{
							control = "ReviveMode";
							property = "ReviveMode";
							displayName = "$STR_A3_ReviveMode";
							tooltip = "$STR_A3_ReviveMode_Hint";
							expression = "";
							defaultValue = "0";
							typeName = "number";
							wikiType = "[[String]]";
						};
						class ReviveRequiredTrait
						{
							control = "ReviveRequiredTrait";
							property = "ReviveRequiredTrait";
							displayName = "$STR_A3_RequiredTrait";
							tooltip = "$STR_A3_RequiredTrait_Hint";
							expression = "";
							defaultValue = "0";
							typeName = "number";
							wikiType = "[[String]]";
						};
						class ReviveRequiredItems
						{
							control = "ReviveRequiredItems";
							property = "ReviveRequiredItems";
							displayName = "$STR_A3_RequiredItems";
							tooltip = "$STR_A3_RequiredItems_Hint";
							expression = "";
							defaultValue = "0";
							typeName = "number";
							wikiType = "[[String]]";
						};
						class ReviveDuration
						{
							control = "ReviveDuration";
							property = "ReviveDelay";
							displayName = "$STR_A3_ReviveDuration";
							tooltip = "$STR_A3_ReviveDuration_Hint";
							expression = "";
							defaultValue = "6";
							typeName = "number";
							wikiType = "[[String]]";
						};
						class ReviveMedicSpeedMultiplier
						{
							control = "ReviveMedicSpeedMultiplier";
							property = "ReviveMedicSpeedMultiplier";
							displayName = "$STR_A3_MedicSpeedMultiplier";
							tooltip = "$STR_A3_MedicSpeedMultiplier_Hint";
							expression = "";
							defaultValue = "2";
							typeName = "number";
							wikiType = "[[String]]";
						};
						class ReviveForceRespawnDuration
						{
							control = "ReviveForceRespawnDuration";
							property = "ReviveForceRespawnDelay";
							displayName = "$STR_A3_ForceRespawnDuration";
							tooltip = "$STR_A3_ForceRespawnDuration_Hint";
							expression = "";
							defaultValue = "3";
							typeName = "number";
							wikiType = "[[String]]";
						};
						class ReviveUnconsciousStateMode
						{
							control = "ReviveUnconsciousStateMode";
							property = "ReviveUnconsciousStateMode";
							displayName = "$STR_A3_IncapacitationMode";
							tooltip = "$STR_A3_IncapacitationMode_Hint";
							expression = "";
							defaultValue = "0";
							typeName = "number";
							wikiType = "[[String]]";
						};
						class ReviveUnconsciousStateDuration
						{
							control = "ReviveUnconsciousStateDuration";
							property = "ReviveBleedOutDelay";
							displayName = "$STR_A3_BleedOutDuration";
							tooltip = "$STR_A3_BleedOutDuration_Hint";
							expression = "";
							defaultValue = "120";
							typeName = "number";
							wikiType = "[[String]]";
						};
					};
				};
			};
		};
		class GarbageCollection
		{
			displayName = "$STR_3DEN_Performance_textSingular";
			class AttributeCategories
			{
				class GarbageCollection
				{
					displayName = "$STR_3DEN_GarbageCollection_textSingular";
					collapsed = 1;
					class Attributes
					{
						class MinPlayerDistance
						{
							data = "MinPlayerDistance";
							value = 0;
							control = "Edit";
							displayName = "$STR_3DEN_GarbageCollection_Attribute_MinDistance_displayName";
							tooltip = "$STR_3DEN_GarbageCollection_Attribute_MinDistance_tooltip";
							wikiType = "[[Number]]";
						};
						class GarbageCollectionSubCategory_CharacterCorpses
						{
							data = "AttributeSystemSubcategory";
							control = "SubCategory";
							displayName = "$STR_3DEN_GarbageCollection_AttributeCategory_Corpse";
							description = "";
						};
						class CorpseManagerMode
						{
							data = "CorpseManagerMode";
							value = 0;
							control = "GarbageCollectorMode";
							displayName = "$STR_3DEN_GarbageCollection_Attribute_Mode_displayName";
							tooltip = "$STR_3DEN_GarbageCollection_Attribute_ManagerMode_tooltip";
							defaultValue = "0";
							wikiType = "[[Number]]";
						};
						class CorpseLimit
						{
							data = "CorpseLimit";
							value = 0;
							validate = "number";
							control = "EditShort";
							displayName = "$STR_3DEN_GarbageCollection_Attribute_Limit_displayName";
							tooltip = "$STR_3DEN_GarbageCollection_Attribute_Limit_tooltip";
							defaultValue = "15";
							wikiType = "[[Number]]";
						};
						class CorpseRemovalMinTime
						{
							data = "CorpseRemovalMinTime";
							value = 0;
							control = "SliderTime";
							displayName = "$STR_3DEN_GarbageCollection_Attribute_RemovalMinTime_displayName";
							tooltip = "$STR_3DEN_GarbageCollection_Attribute_RemovalMinTime_tooltip";
							defaultValue = "10";
							wikiType = "[[Number]]";
						};
						class CorpseRemovalMaxTime
						{
							data = "CorpseRemovalMaxTime";
							value = 0;
							control = "SliderTime";
							displayName = "$STR_3DEN_GarbageCollection_Attribute_RemovalMaxTime_displayName";
							tooltip = "$STR_3DEN_GarbageCollection_Attribute_RemovalMaxTime_tooltip";
							defaultValue = "3600";
							wikiType = "[[Number]]";
						};
						class GarbageCollectionSubCategory_Wrecks
						{
							data = "AttributeSystemSubcategory";
							control = "SubCategory";
							displayName = "$STR_3DEN_GarbageCollection_AttributeCategory_Wreck_tooltip";
							description = "";
						};
						class WreckManagerMode
						{
							data = "WreckManagerMode";
							value = 0;
							control = "GarbageCollectorMode";
							displayName = "$STR_3DEN_GarbageCollection_Attribute_Mode_displayName";
							tooltip = "$STR_3DEN_GarbageCollection_Attribute_ManagerMode_tooltip";
							defaultValue = "0";
							wikiType = "[[Number]]";
						};
						class WreckLimit
						{
							data = "WreckLimit";
							value = 0;
							validate = "number";
							control = "EditShort";
							displayName = "$STR_3DEN_GarbageCollection_Attribute_Limit_displayName";
							tooltip = "$STR_3DEN_GarbageCollection_Attribute_Limit_tooltip";
							defaultValue = "15";
							wikiType = "[[Number]]";
						};
						class WreckRemovalMinTime
						{
							data = "WreckRemovalMinTime";
							value = 0;
							control = "SliderTime";
							displayName = "$STR_3DEN_GarbageCollection_Attribute_RemovalMinTime_displayName";
							tooltip = "$STR_3DEN_GarbageCollection_Attribute_RemovalMinTime_tooltip";
							defaultValue = "10";
							wikiType = "[[Number]]";
						};
						class WreckRemovalMaxTime
						{
							data = "WreckRemovalMaxTime";
							value = 0;
							control = "SliderTime";
							displayName = "$STR_3DEN_GarbageCollection_Attribute_RemovalMaxTime_displayName";
							tooltip = "$STR_3DEN_GarbageCollection_Attribute_RemovalMaxTime_tooltip";
							defaultValue = "3600";
							wikiType = "[[Number]]";
						};
					};
				};
				class DynamicSimulation
				{
					displayName = "$STR_3DEN_DynamicSimulation_textSingular";
					collapsed = 0;
					class Attributes
					{
						class DynSimEnabled
						{
							control = "Checkbox";
							data = "DynSimEnabled";
							displayName = "$STR_3DEN_dynsim_enabled_displayname";
							tooltip = "$STR_3DEN_dynsim_enabled_tooltip";
							typeName = "number";
						};
						class DynSimSubCategory_ActivationDistances
						{
							data = "AttributeSystemSubcategory";
							control = "SubCategory";
							displayName = "$STR_3DEN_dynsim_attributecategory_distances";
							description = "$STR_3DEN_dynsim_attributecategory_distances_desc";
						};
						class DynSimDistGroup
						{
							control = "DynSimDist";
							typeName = "number";
							data = "DynSimDistGroup";
							displayName = "$STR_3DEN_dynsim_characters_displayname";
						};
						class DynSimDistVehicle
						{
							control = "DynSimDist";
							typeName = "number";
							data = "DynSimDistVehicle";
							displayName = "$STR_3DEN_dynsim_mannedvehicles_displayname";
						};
						class DynSimDistProp
						{
							control = "DynSimDist";
							typeName = "number";
							data = "DynSimDistProp";
							displayName = "$STR_3DEN_dynsim_props_displayname";
						};
						class DynSimDistEmptyVehicle
						{
							control = "DynSimDist";
							typeName = "number";
							data = "DynSimDistEmptyVehicle";
							displayName = "$STR_3DEN_dynsim_emptyvehicles_displayname";
						};
						class DynSimSubCategory_ActivationDistanceModifiers
						{
							data = "AttributeSystemSubcategory";
							control = "SubCategory";
							displayName = "$STR_3DEN_dynsim_attributecategory_modifiers";
							description = "";
						};
						class DynSimDistMultIsMoving
						{
							data = "DynSimMovingCoef";
							control = "DynSimDistMultIsMoving";
							displayName = "$STR_3DEN_dynsim_ismoving_displayname";
							tooltip = "$STR_3DEN_dynsim_ismoving_tooltip";
							typeName = "number";
						};
						class DynSimSaturateByObjDist
						{
							control = "Checkbox";
							data = "DynSimSaturateByObjDist";
							displayName = "$STR_3DEN_dynsim_limitbyview_displayname";
							tooltip = "$STR_3DEN_dynsim_limitbyview_tooltip";
							typeName = "number";
						};
					};
				};
			};
		};
		class Preferences
		{
			displayName = "$STR_3DEN_Preferences_textSingular";
			class AttributeCategories
			{
				class Saving
				{
					displayName = "$STR_3DEN_Preferences_AttributeCategory_Saving_displayName";
					class Attributes
					{
						class Autosave
						{
							data = "Autosave";
							value = 0;
							control = "PreferencesSavegame";
							displayName = "$STR_3DEN_Preferences_Attribute_Autosave_displayName";
							tooltip = "$STR_3DEN_Preferences_Attribute_Autosave_tooltip";
						};
						class Autoload
						{
							data = "Autoload";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3DEN_Preferences_Attribute_Autoload_displayName";
							tooltip = "$STR_3DEN_Preferences_Attribute_Autoload_tooltip";
							defaultValue = 0;
						};
						class Binarize
						{
							data = "SaveBinarized";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3DEN_Preferences_Attribute_Binarize_displayName";
							tooltip = "$STR_3DEN_Preferences_Attribute_Binarize_tooltip";
							wikiType = "[[Bool]]";
						};
					};
				};
				class Camera
				{
					displayName = "$STR_3DEN_Preferences_AttributeCategory_Camera_displayName";
					class Attributes
					{
						class CameraSpeedCoefDefault
						{
							data = "CameraSpeedMod";
							value = 0;
							control = "SliderCameraSpeedMult";
							displayName = "$STR_3DEN_Preferences_Attribute_CameraSpeedCoefDefault_displayName";
							tooltip = "$STR_3DEN_Preferences_Attribute_CameraSpeedCoefDefault_tooltip";
							defaultValue = 1;
							typeName = "number";
						};
						class CameraSpeedCoefModified
						{
							data = "CameraSpeedFastMod";
							value = 0;
							control = "SliderCameraSpeedMult";
							displayName = "$STR_3DEN_Preferences_Attribute_CameraSpeedCoefModified_displayName";
							tooltip = "$STR_3DEN_Preferences_Attribute_CameraSpeedCoefModified_tooltip";
							defaultValue = 1;
							typeName = "number";
						};
						class CameraZoomSpeedMod
						{
							data = "CameraZoomSpeedMod";
							value = 0;
							control = "SliderCameraSpeedMult";
							displayName = "$STR_3den_preferences_attribute_camerazoomspeedmod_displayname";
							tooltip = "$STR_3den_preferences_attribute_camerazoomspeedmod_tooltip";
							defaultValue = 1;
							typeName = "number";
						};
						class CameraATL
						{
							data = "CameraATL";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3DEN_Preferences_Attribute_CameraATL_displayName";
							tooltip = "$STR_3DEN_Preferences_Attribute_CameraATL_tooltip";
							defaultValue = "false";
						};
						class CameraAdaptiveSpeed
						{
							data = "CameraAdaptiveSpeed";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3DEN_Preferences_Attribute_CameraAdaptiveSpeed_displayName";
							tooltip = "$STR_3DEN_Preferences_Attribute_CameraAdaptiveSpeed_tooltip";
							defaultValue = "true";
						};
						class StartMap
						{
							property = "StartMap";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3DEN_Preferences_Attribute_StartMap_displayName";
							tooltip = "$STR_3DEN_Preferences_Attribute_StartMap_tooltip";
							defaultValue = "false";
							expression = "true";
						};
						class StartRandom
						{
							property = "StartRandom";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3den_preferences_attribute_startrandom_displayname";
							tooltip = "$STR_3den_preferences_attribute_startrandom_tooltip";
							defaultValue = "true";
							expression = "true";
						};
					};
				};
				class Misc
				{
					displayName = "$STR_3DEN_Scenario_AttributeCategory_Misc_displayName";
					class Attributes
					{
						class AutoGroup
						{
							data = "AutoGrouping";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3DEN_Preferences_Attribute_AutoGroup_displayName";
							tooltip = "$STR_3DEN_Preferences_Attribute_AutoGroup_tooltip";
							defaultValue = "true";
							expression = "true";
						};
						class RecompileFunctions
						{
							property = "RecompileFunctions";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3DEN_Preferences_Attribute_RecompileFunctions_displayName";
							tooltip = "$STR_3DEN_Preferences_Attribute_RecompileFunctions_tooltip";
							defaultValue = "false";
							expression = "true";
						};
						class EnableEnvironment
						{
							property = "EnableEnvironment";
							value = 0;
							control = "Checkbox";
							displayName = "$STR_3DEN_Preferences_Attribute_EnableEnvironment_displayName";
							tooltip = "$STR_3DEN_Preferences_Attribute_EnableEnvironment_tooltip";
							defaultValue = "false";
							expression = "enableEnvironment _value;";
						};
					};
				};
				class Internal
				{
					displayName = "Internal";
					class Attributes
					{
						class CustomMissionFolders
						{
							data = "CustomMissionFolders";
							value = 0;
							control = "Edit";
							displayName = "$STR_3DEN_Preferences_Attribute_CustomMissionFolders_displayName";
							tooltip = "$STR_3DEN_Preferences_Attribute_CustomMissionFolders_tooltip";
						};
					};
				};
			};
		};
	};
	class Default
	{
		class Draw
		{
			location = "\a3\3DEN\Data\Displays\Display3DEN\PanelLeft\location_ca.paa";
			locationList = "\a3\3DEN\Data\Displays\Display3DEN\PanelLeft\locationList_ca.paa";
			colorNotificationDefault[] = {0.12549,0.505882,0.313726,0.9};
			colorNotificationWarning[] = {0.8,0.35,0,0.9};
			colorNotificationError[] = {0.815686,0.266667,0.215686,0.9};
			colorWest[] = {"(profilenamespace getvariable ['Map_BLUFOR_R',0])","(profilenamespace getvariable ['Map_BLUFOR_G',1])","(profilenamespace getvariable ['Map_BLUFOR_B',1])","(profilenamespace getvariable ['Map_BLUFOR_A',0.8])"};
			colorEast[] = {"(profilenamespace getvariable ['Map_OPFOR_R',0])","(profilenamespace getvariable ['Map_OPFOR_G',1])","(profilenamespace getvariable ['Map_OPFOR_B',1])","(profilenamespace getvariable ['Map_OPFOR_A',0.8])"};
			colorGuer[] = {"(profilenamespace getvariable ['Map_Independent_R',0])","(profilenamespace getvariable ['Map_Independent_G',1])","(profilenamespace getvariable ['Map_Independent_B',1])","(profilenamespace getvariable ['Map_Independent_A',0.8])"};
			colorCiv[] = {"(profilenamespace getvariable ['Map_Civilian_R',0])","(profilenamespace getvariable ['Map_Civilian_G',1])","(profilenamespace getvariable ['Map_Civilian_B',1])","(profilenamespace getvariable ['Map_Civilian_A',0.8])"};
			colorEmpty[] = {"(profilenamespace getvariable ['Map_Unknown_R',0])","(profilenamespace getvariable ['Map_Unknown_G',1])","(profilenamespace getvariable ['Map_Unknown_B',1])","(profilenamespace getvariable ['Map_Unknown_A',0.8])"};
			colorAmbient[] = {0,1,0.5,1};
			colorX[] = {0.77,0.18,0.1,1};
			colorY[] = {0.58,0.82,0.22,1};
			colorZ[] = {0.26,0.52,0.92,1};
			colorAxisHover[] = {1,1,1,1};
			translationUnit = "$STR_3DEN_translationUnit";
			rotationUnit = "$STR_3DEN_rotationUnit";
			scaleUnit = "$STR_3DEN_translationUnit";
			fontUnit = "RobotoCondensedLight";
			sizeExUnit = "4.32 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
			class 3D
			{
				modelAreaRectangle = "\a3\3DEN\Objects\rectangle.p3d";
				modelAreaRectangleLimited = "\a3\3DEN\Objects\rectangleLimited.p3d";
				modelAreaEllipse = "\a3\3DEN\Objects\ellipse.p3d";
				modelAreaEllipseLimited = "\a3\3DEN\Objects\ellipseLimited.p3d";
				modelCursor = "\a3\3DEN\Objects\cursor.p3d";
				colorConnectionHover[] = {1,1,1,1};
				colorAreaEdit[] = {0.75,0.75,0.75,1};
				iconAreaEdit = "\a3\3DEN\Data\Cfg3DEN\Default\iconAreaEdit_ca.paa";
			};
			class 2D
			{
				colorConnectionHover[] = {0.7,0.7,0.7,1};
				colorAreaEdit[] = {0.6,0.6,0.6,1};
			};
			class IconContainer
			{
				columns = 3;
				size = "24 * pixelW";
				spacing = "4 * pixelW";
				colorBackground[] = {0.2,0.2,0.2,0.5};
				textureBackground = "#(argb,8,8,3)color(1,0,1,0.4)";
				texture = "#(argb,8,8,3)color(0,0,0,0)";
			};
		};
		class Grid
		{
			textCustom = "$STR_3DEN_Grid_textCustom";
			translationUnit = "$STR_3DEN_Grid_translationUnit";
			translationDefault = 1;
			translation[] = {0.125,0.25,0.5,1,2,4,8,16,32,64};
			rotationUnit = "$STR_3DEN_Grid_rotationUnit";
			rotationDefault = 15;
			rotation[] = {1,5,15,45,90};
			scalingUnit = "$STR_3DEN_Grid_translationUnit";
			scalingDefault = 1;
			scaling[] = {0.1,1,10,100};
		};
	};
	class Camera
	{
		textSingular = "$STR_3DEN_Camera_textSingular";
		textPlural = "$STR_3DEN_Camera_textSingular";
		class Draw
		{
			class 2D
			{
				cameraTexture = "\a3\3DEN\Data\Cfg3DEN\Camera\cameraTexture_ca.paa";
				cameraColor[] = {0.4,0,0.2,1};
				cameraMaxLineDistance = 1000;
			};
		};
		moveOffset[] = {0,-25,25};
		moveMinMapZoom = 1500;
	};
	class Connections
	{
		class Group
		{
			displayName = "$STR_3DEN_Connections_Group";
			data = "Group";
			color[] = {0,1,1,1};
			cursor = "3DENConnectGroup";
		};
		class Sync
		{
			displayName = "$STR_3DEN_Connections_Sync";
			data = "Sync";
			color[] = {0,0,1,1};
			cursor = "3DENConnectSync";
		};
		class RandomStart
		{
			displayName = "$STR_3DEN_Connections_RandomStart";
			data = "RandomStart";
			color[] = {0.5,0.5,0.5,0.5};
			cursor = "3DENConnectSync";
		};
		class TriggerOwner
		{
			displayName = "$STR_3DEN_Connections_TriggerOwner";
			data = "TriggerOwner";
			color[] = {0,1,1,1};
			cursor = "3DENConnectSync";
		};
		class WaypointActivation
		{
			displayName = "$STR_3DEN_Connections_WaypointActivation";
			data = "WaypointActivation";
			color[] = {0,0,1,1};
			cursor = "3DENConnectSync";
		};
	};
	class Messages
	{
		editorClose = "$STR_3DEN_Messages_editorClose";
		editorCloseServer = "$STR_3DEN_Messages_editorCloseServer";
		missionOverwrite = "$STR_3DEN_Messages_missionOverwrite";
		missionDelete = "$STR_3DEN_Messages_missionDelete";
		missionLoadError = "$STR_3DEN_Messages_missionLoadError";
		missionLoadRequiredAddons = "$STR_3DEN_Messages_missionLoadRequiredAddons";
		missionSaveError = "$STR_3DEN_Messages_missionSaveError";
		missionSaveInvalidChar = "$STR_3DEN_Messages_missionSaveInvalidChar";
		MissionLoadImported = "$STR_3DEN_Messages_MissionLoadImported";
		missionDiscard = "$STR_3DEN_Messages_missionDiscard";
		missionPreviewWillEndServer = "$STR_3DEN_Messages_missionPreviewWillEndServer";
		groupLimitExceeded = "$STR_3DEN_Messages_groupLimitExceeded";
		emptyFileName = "$STR_3DEN_Messages_emptyFileName";
		folderDelete = "$STR_3DEN_Messages_folderDelete";
		uniqueAttributeUsed = "$STR_3DEN_Messages_uniqueAttributeUsed";
		editCrewType = "$STR_3DEN_Messages_editCrewType";
		customCompositionDelete = "$STR_3DEN_Messages_customCompositionDelete";
		customCompositionOverwrite = "$STR_3DEN_Messages_customCompositionOverwrite";
		customCompositionEmptyName = "$STR_3DEN_Messages_customCompositionEmptyName";
		missionMergeErrorOldSQM = "$STR_3DEN_Messages_missionMergeErrorOldSQM";
		missionMerge = "$STR_3DEN_Messages_missionMerge";
	};
	class Notifications
	{
		class MissionSaved
		{
			text = "$STR_3DEN_Notifications_MissionSaved_text";
			isWarning = 0;
		};
		class MissionAutoSaved
		{
			text = "$STR_3DEN_Notifications_MissionAutoSaved_text";
			isWarning = 0;
		};
		class MissionNoPlayer
		{
			text = "$STR_3DEN_Notifications_MissionNoPlayer_text";
			isWarning = 1;
		};
		class MissionExportSP
		{
			text = "$STR_3DEN_Notifications_MissionExportSP_text";
			isWarning = 0;
		};
		class MissionExportMP
		{
			text = "$STR_3DEN_Notifications_MissionExportMP_text";
			isWarning = 0;
		};
		class MissionExportError
		{
			text = "$STR_3den_notifications_missionexporterror_text";
			isWarning = 1;
		};
		class VehicleFull
		{
			text = "$STR_3DEN_Notifications_VehicleFull_text";
			isWarning = 1;
		};
		class VehicleEnemy
		{
			text = "$STR_3DEN_Notifications_VehicleEnemy_text";
			isWarning = 1;
		};
		class TooltipExported
		{
			text = "LOC: Tooltip exported to clipboard";
			isWarning = 0;
		};
	};
	class EventHandlers
	{
		class BIS
		{
			onUndo = "['History'] call bis_fnc_3DENToolbar;";
			onRedo = "['History'] call bis_fnc_3DENToolbar;";
			onHistoryChange = "['History'] call bis_fnc_3DENToolbar;";
			onWidgetToggle = "['WidgetToggle'] call bis_fnc_3DENToolbar;";
			onWidgetNone = "['WidgetToggle'] call bis_fnc_3DENToolbar;";
			onWidgetTranslation = "['WidgetToggle'] call bis_fnc_3DENToolbar;";
			onWidgetRotation = "['WidgetToggle'] call bis_fnc_3DENToolbar;";
			onWidgetScale = "['WidgetToggle'] call bis_fnc_3DENToolbar;";
			onWidgetArea = "['WidgetToggle'] call bis_fnc_3DENToolbar;";
			onGridChange = "['OnGridChange',_this,true] call bis_fnc_3DENGrid;";
			onMoveGridToggle = "['MoveGridToggle'] call bis_fnc_3DENToolbar;";
			onRotateGridToggle = "['RotateGridToggle'] call bis_fnc_3DENToolbar;";
			onScaleGridToggle = "['ScaleGridToggle'] call bis_fnc_3DENToolbar;";
			onVerticalToggle = "['VerticalToggle'] call bis_fnc_3DENToolbar;";
			onSurfaceSnapToggle = "['SurfaceSnapToggle'] call bis_fnc_3DENToolbar;";
			onWorkspacePartSwitch = "['MissionSection'] spawn bis_fnc_3DENToolbar;";
			onModeChange = "['showInterface',true] call bis_fnc_3DENInterface; ['showPanelRight',true] call bis_fnc_3DENInterface; ['mode'] spawn bis_fnc_3DENInterface; ['subMode'] spawn bis_fnc_3DENInterface;";
			onSubmodeChange = "['showInterface',true] call bis_fnc_3DENInterface; ['showPanelRight',true] call bis_fnc_3DENInterface; ['subMode'] spawn bis_fnc_3DENInterface;";
			onMapOpened = "['ToggleMap'] call bis_fnc_3DENToolbar;";
			onMapClosed = "['ToggleMap'] call bis_fnc_3DENToolbar;";
			onSearchEdit = "['TabLeft',0] call bis_fnc_3DENInterface;";
			onSearchCreate = "['TabRight',0] call bis_fnc_3DENInterface;";
			onMissionListChange = "['onMissionListChange',0] call bis_fnc_3DENInterface;";
			onMissionPreview = "['onMissionPreview',_this] spawn bis_fnc_3DENMissionPreview;";
			onMissionPreviewEnd = "		['onMissionPreviewEnd',_this] call bis_fnc_3DENMissionPreview;		true call bis_fnc_3DENDrawLocations;		'server' call bis_fnc_3DENStatusBar;		[] spawn bis_fnc_3dentutorial;		['reset'] call bis_fnc_3DENEntityMenu;		-2 spawn BIS_fnc_3DENVisionMode;		-2 call BIS_fnc_3DENFlashlight;		enableenvironment ('Preferences' get3DENMissionAttribute 'EnableEnvironment');	";
			init = "		'init' call bis_fnc_3DENStatusBar;		'init' call bis_fnc_3DENControlsHint;		'init' call bis_fnc_3DENInterface;	";
			onTerrainNew = "		true call bis_fnc_3DENDrawLocations;		'init' call bis_fnc_3DENListLocations;		'ButtonPlay' call bis_fnc_3DENInterface;		'FadeIn' spawn bis_fnc_3DENInterface;		['Init'] call bis_fnc_3DENToolbar;		0 call BIS_fnc_3DENVisionMode;		0 call BIS_fnc_3DENFlashlight;		if (missionname == '' && ('preferences' get3denmissionattribute 'StartRandom')) then {'random' call bis_fnc_3DENCamera;};		'onTerrainNew' call bis_fnc_3DENInterface;		enableenvironment ('Preferences' get3DENMissionAttribute 'EnableEnvironment');	";
			onMissionNew = "		['History'] call bis_fnc_3DENToolbar;		['MissionSection'] spawn bis_fnc_3DENToolbar;		['PlaceEmpty'] spawn bis_fnc_3DENInterface;		0 call BIS_fnc_3DENVisionMode;		0 call BIS_fnc_3DENFlashlight;	";
			onMissionLoad = "		['Init'] call bis_fnc_3DENToolbar;		['History'] call bis_fnc_3DENToolbar;		['MissionSection'] spawn bis_fnc_3DENToolbar;		['PlaceEmpty'] spawn bis_fnc_3DENInterface;	";
			onMissionAutosave = "1 call bis_fnc_3DENNotification;";
			onMessage = "_this call bis_fnc_3DENNotification;";
			onServerToggle = "'Server' call bis_fnc_3DENStatusBar; 'ButtonPlay' call bis_fnc_3DENInterface;";
			onEntityMenu = "['onEntityMenu',_this] call bis_fnc_3DENEntityMenu;";
			onSelectionChange = "'select' call bis_fnc_3DENControlsHint;";
			onConnectingStart = "['connectStart',_this] call bis_fnc_3DENControlsHint;";
			onConnectingEnd = "['connectEnd',_this] call bis_fnc_3DENControlsHint;";
			onTogglePlaceEmptyVehicle = "['PlaceEmpty'] spawn bis_fnc_3DENInterface;";
		};
	};
	class History
	{
		class CreateObject
		{
			displayName = "$STR_3DEN_History_CreateObject_displayName";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\Create_ca.paa";
		};
		class CreateGroup
		{
			displayName = "$STR_3DEN_History_CreateGroup_displayName";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\Create_ca.paa";
		};
		class CreateTrigger
		{
			displayName = "$STR_3DEN_History_CreateTrigger_displayName";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\Create_ca.paa";
		};
		class CreateWaypoint
		{
			displayName = "$STR_3DEN_History_CreateWaypoint_displayName";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\Create_ca.paa";
		};
		class CreateModule
		{
			displayName = "$STR_3DEN_History_CreateLogic_displayName";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\Create_ca.paa";
		};
		class CreateMarker
		{
			displayName = "$STR_3DEN_History_CreateMarker_displayName";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\Create_ca.paa";
		};
		class CreateCustomComposition
		{
			displayName = "$STR_3den_display3den_entitymenu_customcomposition_text";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\Create_ca.paa";
		};
		class PasteItems
		{
			displayName = "$STR_3den_display3den_menubar_entitypaste_text";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\PasteItems_ca.paa";
			tooltip = "%s";
		};
		class DeleteItems
		{
			displayName = "$STR_3DEN_Delete";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\DeleteItems_ca.paa";
			tooltip = "%s";
		};
		class MoveItems
		{
			displayName = "$STR_3DEN_Display3DEN_ControlsHint_Move";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\MoveItems_ca.paa";
			tooltip = "%s";
		};
		class RotateItems
		{
			displayName = "$STR_3DEN_Display3DEN_ControlsHint_Rotate";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\RotateItems_ca.paa";
			tooltip = "%s";
		};
		class ScaleItems
		{
			displayName = "$STR_3DEN_History_ScaleItems_displayName";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\ScaleItems_ca.paa";
		};
		class ConnectItems
		{
			displayName = "$STR_3DEN_History_ConnectItems_displayName";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\ConnectItems_ca.paa";
		};
		class DisconnectItems
		{
			displayName = "$STR_3DEN_History_DisconnectItems_displayName";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\DisconnectItems_ca.paa";
		};
		class ChangeAttributes
		{
			displayName = "$STR_3DEN_History_ChangeAttributes_displayName";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\ChangeAttributes_ca.paa";
			tooltip = "%s";
		};
		class ChangeGlobalAttributes
		{
			displayName = "$STR_3DEN_History_ChangeGlobalAttributes_displayName";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\ChangeAttributes_ca.paa";
		};
		class MakeNewLayer
		{
			displayName = "$STR_3DEN_Display3DEN_EditLayer_tooltip";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\MakeNewLayer_ca.paa";
		};
		class AddToLayer
		{
			displayName = "$STR_3DEN_History_AddToLayer_displayName";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\AddToLayer_ca.paa";
		};
		class RemoveFromLayer
		{
			displayName = "$STR_3DEN_Display3DEN_RemoveLayer_tooltip";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\RemoveFromLayer_ca.paa";
		};
		class MultipleOperations
		{
			displayName = "$STR_3DEN_History_MultipleOperations_displayName";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\MultipleOperations_ca.paa";
		};
		class MissionNew
		{
			displayName = "$STR_3DEN_History_MissionNew_displayName";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\MissionNew_ca.paa";
		};
		class ChangeSeat
		{
			displayName = "$STR_3DEN_Display3DEN_EntityMenu_ChangeSeat_text";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\ChangeSeat_ca.paa";
		};
		class CreateComment
		{
			displayName = "$STR_3den_display3den_entitymenu_createcomment_text";
			icon = "\a3\3DEN\Data\Cfg3DEN\History\CreateComment_ca.paa";
		};
	};
	class Updates
	{
		path = "\a3\3DEN\Updates\";
		class DEV1
		{
			date[] = {2015,9,22};
		};
		class DEV2
		{
			date[] = {2015,9,29};
		};
		class DEV3
		{
			date[] = {2015,10,6};
		};
		class DEV4
		{
			date[] = {2015,10,21};
		};
		class DEV5
		{
			date[] = {2015,11,12};
		};
		class DEV6
		{
			date[] = {2015,11,30};
		};
	};
	class Tutorials
	{
		class Intro
		{
			displayName = "$STR_3DEN_Tutorials_Intro_text";
			class Sections
			{
				class Intro
				{
					displayName = "$STR_3DEN_Tutorials_Intro_Sections_Intro_text";
					class Steps
					{
						class Intro
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_Intro_Intro_text";
						};
						class Workspace
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_Intro_Workspace_text";
						};
						class Scene3D
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_Intro_Scene3D_text";
						};
						class Scene2D
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_Intro_Scene2D_text";
							highlight = 10303;
							expression = "['showInterface',true] call bis_fnc_3DENInterface;";
						};
						class MenuBar
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_Intro_MenuBar_text";
							highlight = 120;
							expression = "['showInterface',true] call bis_fnc_3DENInterface;";
							x = "safezoneX + (	60 + 1) * (pixelW * pixelGrid * 	0.50)";
							y = "safezoneY + (		5 + 	(	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
						};
						class Toolbar
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_Intro_Toolbar_text";
							highlight = 1000;
							expression = "['showInterface',true] call bis_fnc_3DENInterface;";
							y = "safezoneY + (		5 + 	(	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
						};
						class CreateList
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_Intro_CreateList_text";
							highlight = 1039;
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabRight',0] call bis_fnc_3DENInterface;";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class EditList
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_Intro_EditList_text";
							highlight = 1037;
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabLeft',0] call bis_fnc_3DENInterface;";
							x = "safezoneX + (	60 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Preview
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_Intro_Preview_text";
							highlight = 1023;
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabRight',0] call bis_fnc_3DENInterface;";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
							y = "safezoneY + safezoneH - (		4 + 40) * (pixelH * pixelGrid * 	0.50)";
						};
						class Outro
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_Intro_Outro_text";
						};
					};
				};
				class OldEditor
				{
					displayName = "$STR_3DEN_Tutorials_Intro_Sections_OldEditor_text";
					class Steps
					{
						class Intro
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_OldEditor_Intro_text";
						};
						class Discontinued
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_OldEditor_Discontinued_text";
						};
						class Search
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_OldEditor_Search_text";
							highlight = 82;
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabRight',0] call bis_fnc_3DENInterface;";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
							y = "safezoneY + (	5 + 	(	5 + 2) + 	(	5 + 1)) * (pixelH * pixelGrid * 	0.50)";
						};
						class Systems
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_OldEditor_Systems_text";
							highlight = 1039;
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;		['tabRight',0] call bis_fnc_3DENInterface;		do3DENAction 'SelectModuleMode';		do3DENAction 'SelectSubmode1';	";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Composition
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_OldEditor_Composition_text";
							highlight = 65;
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;		['tabRight',0] call bis_fnc_3DENInterface;		do3DENAction 'SelectGroupMode';		do3DENAction 'SelectSubmode5';	";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Vehicle
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_OldEditor_Vehicle_text";
							expression = "		profilenamespace setvariable ['bis_fnc_3DENInterface_emptyVehicles',true];		saveprofilenamespace;		['showInterface',true] call bis_fnc_3DENInterface;		['tabRight',0] call bis_fnc_3DENInterface;		['warningEmptyVehicles'] call bis_fnc_3DENInterface;		do3DENAction 'SelectObjectMode';		do3DENAction 'SelectSubmode5';	";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Crew
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_OldEditor_Crew_text";
						};
						class WaypointPlace
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_OldEditor_WaypointPlace_text";
						};
						class WaypointAttach
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_OldEditor_WaypointAttach_text";
						};
						class Connecting
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_OldEditor_Connecting_text";
						};
						class AttributesGroup
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_OldEditor_AttributesGroup_text";
						};
						class AttributesMulti
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_OldEditor_AttributesMulti_text";
						};
						class Undo
						{
							text = "$STR_3DEN_Tutorials_Intro_Sections_OldEditor_Undo_text";
							highlight = 1010;
							x = "safezoneX + 2 * 	(	5 * (pixelW * pixelGrid * 	0.50))";
							y = "safezoneY + (		5 + 	(	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class Editing
		{
			displayName = "$STR_3DEN_Tutorials_Editing_text";
			class Sections
			{
				class Placing
				{
					displayName = "$STR_3DEN_Tutorials_Editing_Sections_Placing_text";
					class Steps
					{
						class Intro
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Placing_Intro_text";
						};
						class AssetBrowser
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Placing_AssetBrowser_text";
							highlight = 1039;
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;		['tabRight',0] call bis_fnc_3DENInterface;	";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Search
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Placing_Search_text";
							highlight = 82;
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;		['tabRight',0] call bis_fnc_3DENInterface;	";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
							y = "safezoneY + (	5 + 	(	5 + 2) + 	(	5 + 1) + 20) * (pixelH * pixelGrid * 	0.50)";
						};
						class Click
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Placing_Click_text";
							highlight = 1049;
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;		['tabRight',0] call bis_fnc_3DENInterface;	";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Drag
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Placing_Drag_text";
							highlight = 1049;
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;		['tabRight',0] call bis_fnc_3DENInterface;	";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Alt
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Placing_Alt_text";
							highlight = 1049;
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;		['tabRight',0] call bis_fnc_3DENInterface;	";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class EmptyVehicles
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Placing_EmptyVehicles_text";
							highlight = 1062;
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;		['tabRight',0] call bis_fnc_3DENInterface;		do3DENAction 'SelectObjectMode';		do3DENAction 'SelectSubmode1';	";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Doubleclick
						{
							text = "$STR_3den_tutorials_editing_sections_placing_doubleclick_text";
						};
						class Area
						{
							text = "$STR_3den_tutorials_editing_sections_placing_area_text";
						};
						class Outro
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Placing_Outro_text";
						};
					};
				};
				class Transforming
				{
					displayName = "$STR_3DEN_Tutorials_Editing_Sections_Transforming_text";
					class Steps
					{
						class Intro
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Transforming_Intro_text";
						};
						class MoveXY
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Transforming_MoveXY_text";
							variables[] = {"<img image='\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ATL_ca.paa' />","<img image='\a3\3DEN\Data\Displays\Display3DEN\ToolBar\vert_ASL_ca.paa' />"};
						};
						class MoveZ
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Transforming_MoveZ_text";
						};
						class Rotate
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Transforming_Rotate_text";
						};
						class VerticalMode
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Transforming_VerticalMode_text";
							highlight = 1017;
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;	";
							x = "safezoneX + (12 * 	(	5 * (pixelW * pixelGrid * 	0.50)))";
							y = "safezoneY + (	5 + 	(	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
						};
						class SurfaceSnap
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Transforming_SurfaceSnap_text";
							highlight = 1018;
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;	";
							x = "safezoneX + (12 * 	(	5 * (pixelW * pixelGrid * 	0.50)))";
							y = "safezoneY + (	5 + 	(	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
						};
						class Outro
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Transforming_Outro_text";
						};
					};
				};
				class Crew
				{
					displayName = "$STR_3DEN_Tutorials_Editing_Sections_Crew_text";
					class Steps
					{
						class Intro
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Crew_Intro_text";
						};
						class Roles
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Crew_Roles_text";
							variables[] = {"<img image='\a3\3DEN\Data\Cfg3DEN\Object\iconDriver_ca.paa' />","<img image='\a3\3DEN\Data\Cfg3DEN\Object\iconCommander_ca.paa' />","<img image='\a3\3DEN\Data\Cfg3DEN\Object\iconTurret_ca.paa' />","<img image='\a3\3DEN\Data\Cfg3DEN\Object\iconCargo_ca.paa' />"};
						};
						class Panel
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Crew_Panel_text";
						};
						class Drag
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Crew_Drag_text";
						};
						class DragEnemy
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Crew_DragEnemy_text";
						};
						class SeatChange
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Crew_ChangeSeat_text";
							variables[] = {"$STR_3DEN_Display3DEN_EntityMenu_ChangeSeat_text"};
						};
						class Outro
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Crew_Outro_text";
						};
					};
				};
				class Widget
				{
					displayName = "$STR_3den_display3den_menubar_widget_text";
					class Steps
					{
						class Intro
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Widget_Intro_text";
							variables[] = {"RobotoCondensedBold","#c42e1a","#94d138","#4285eb"};
						};
						class Toggle
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Widget_Toggle_text";
							highlight = 1004;
							variables[] = {{57}};
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;	";
							x = "safezoneX + (7 * 	(	5 * (pixelW * pixelGrid * 	0.50)))";
							y = "safezoneY + (	5 + 	(	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
						};
						class Translation
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Widget_Translation_text";
							highlight = 10042;
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;	";
							x = "safezoneX + (7 * 	(	5 * (pixelW * pixelGrid * 	0.50)))";
							y = "safezoneY + (	5 + 	(	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
						};
						class Rotation: Translation
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Widget_Rotation_text";
							highlight = 10043;
						};
						class Scaling: Translation
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Widget_Scaling_text";
							highlight = 10044;
						};
						class Area: Translation
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Widget_Area_text";
							highlight = 10045;
						};
						class CoordinateSystem
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Widget_CoordinateSystem_text";
							highlight = 1016;
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;	";
							x = "safezoneX + (12 * 	(	5 * (pixelW * pixelGrid * 	0.50)))";
							y = "safezoneY + (	5 + 	(	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
						};
						class Outro
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Widget_Outro_text";
						};
					};
				};
				class Attributes
				{
					displayName = "$STR_3DEN_Tutorials_Editing_Sections_Attributes_text";
					displays[] = {315};
					class Steps
					{
						class Intro
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Attributes_Intro_text";
						};
						class AccessDoubleClick
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Attributes_AccessDoubleClick_text";
						};
						class AccessContextMenu
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Attributes_AccessContextMenu_text";
						};
						class Window
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Attributes_Window_text";
						};
						class Save
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Attributes_Save_text";
						};
						class Multi
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Attributes_Multi_text";
						};
						class Specific
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Attributes_Specific_text";
						};
						class Outro
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Attributes_Outro_text";
						};
					};
				};
				class Connecting
				{
					displayName = "$STR_3DEN_Tutorials_Editing_Sections_Connecting_text";
					class Steps
					{
						class Intro
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Connecting_Intro_text";
						};
						class Connect
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Connecting_Connect_text";
						};
						class Disconnect
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Connecting_Disconnect_text";
						};
						class Show
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Connecting_Show_text";
						};
						class Types
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Connecting_Types_text";
						};
						class Group
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Connecting_Group_text";
							variables[] = {"t size='1.3' font='RobotoCondensed'","t color='#99000000'","&#60;&#62;"};
						};
						class Sync: Group
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Connecting_Sync_text";
						};
						class TriggerOwner: Group
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Connecting_TriggerOwner_text";
						};
						class RandomStart: Group
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Connecting_RandomStart_text";
						};
						class WaypointActivation: Group
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Connecting_WaypointActivation_text";
						};
						class Outro
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Connecting_Outro_text";
						};
					};
				};
				class Layers
				{
					displayName = "$STR_3DEN_Layer_textPlural";
					class Steps
					{
						class Intro
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Layers_Intro_text";
						};
						class Types
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Layers_Types_text";
							variables[] = {"<img image='\a3\3DEN\Data\Cfg3DEN\Layer\iconDefault_ca.paa' />","<img image='\a3\3DEN\Data\Cfg3DEN\Layer\icon_ca.paa' />"};
						};
						class Create
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Layers_Create_text";
							highlight = 84;
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabLeft',0] call bis_fnc_3DENInterface;";
							x = "safezoneX + (	60 + 1) * (pixelW * pixelGrid * 	0.50)";
							y = "safezoneY + safezoneH - (		4 + 50) * (pixelH * pixelGrid * 	0.50)";
						};
						class Drag
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Layers_Drag_text";
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabLeft',0] call bis_fnc_3DENInterface;";
							x = "safezoneX + (	60 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Attributes
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Layers_Attributes_text";
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabLeft',0] call bis_fnc_3DENInterface;";
							x = "safezoneX + (	60 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Select
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Layers_Select_text";
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabLeft',0] call bis_fnc_3DENInterface;";
							x = "safezoneX + (	60 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Remove
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Layers_Remove_text";
							highlight = 86;
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabLeft',0] call bis_fnc_3DENInterface;";
							x = "safezoneX + (	60 + 1) * (pixelW * pixelGrid * 	0.50)";
							y = "safezoneY + safezoneH - (		4 + 40) * (pixelH * pixelGrid * 	0.50)";
						};
						class Compositions
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Layers_Compositions_text";
							highlight = 65;
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;		['tabRight',0] call bis_fnc_3DENInterface;		do3DENAction 'SelectGroupMode';		do3DENAction 'SelectSubmode5';	";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Outro
						{
							text = "$STR_3DEN_Tutorials_Editing_Sections_Layers_Outro_text";
						};
					};
				};
			};
		};
		class Entities
		{
			displayName = "$STR_3DEN_Tutorials_Entities_text";
			class Sections
			{
				class Object
				{
					displayName = "$STR_3DEN_Object_textPlural";
					class Steps
					{
						class Intro
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Object_Intro_text";
						};
						class Types
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Object_Types_text";
						};
						class Character
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Object_Character_text";
						};
						class Vehicle
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Object_Vehicle_text";
						};
						class Prop
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Object_Prop_text";
						};
						class Outro
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Object_Outro_text";
						};
					};
				};
				class Group
				{
					displayName = "$STR_3DEN_Group_textPlural";
					class Steps
					{
						class Intro
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Group_Intro_text";
						};
						class Create
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Group_Create_text";
						};
						class Leader
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Group_Leader_text";
						};
						class Side
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Group_Side_text";
						};
						class Icon
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Group_Icon_text";
						};
						class EntityList
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Group_EntityList_text";
							highlight = 1037;
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabLeft',0] call bis_fnc_3DENInterface;";
							x = "safezoneX + (	60 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class Outro
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Group_Outro_text";
						};
					};
				};
				class CustomCompositions
				{
					displayName = "$STR_3den_tutorials_entities_sections_customcompositions_text";
					displays[] = {317,"IDD_DISPLAY3DENSAVECOMPOSITION"};
					class Steps
					{
						class Intro
						{
							text = "$STR_3DEN_tutorials_entities_sections_customcompositions_Intro_text";
						};
						class Save
						{
							text = "$STR_3DEN_tutorials_entities_sections_customcompositions_Save_text";
						};
						class SaveWindow
						{
							text = "$STR_3DEN_tutorials_entities_sections_customcompositions_SaveWindow_text";
						};
						class Place
						{
							text = "$STR_3DEN_tutorials_entities_sections_customcompositions_Place_text";
							highlight = 71;
							expression = "['showInterface',true] call bis_fnc_3DENInterface; ['tabRight',0] call bis_fnc_3DENInterface; do3denaction 'SelectGroupMode'; do3denaction 'SelectSubMode6';";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
						class PlaceATL
						{
							text = "$STR_3DEN_tutorials_entities_sections_customcompositions_PlaceATL_text";
							highlight = 1017;
							expression = "['showInterface',true] call bis_fnc_3DENInterface;";
							x = "safezoneX + (12 * 	(	5 * (pixelW * pixelGrid * 	0.50)))";
							y = "safezoneY + (	5 + 	(	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
						};
						class Edit
						{
							text = "$STR_3DEN_tutorials_entities_sections_customcompositions_Edit_text";
							highlight = 91;
							expression = "do3denaction 'SelectGroupMode'; do3denaction 'SelectSubMode6';";
							x = "safezoneX + safezoneW - (	60 + 	80 + 1) * (pixelW * pixelGrid * 	0.50)";
						};
					};
				};
				class Trigger
				{
					displayName = "$STR_3DEN_Trigger_textPlural";
					class Steps
					{
						class Intro
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Trigger_Intro_text";
						};
						class Condition
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Trigger_Condition_text";
						};
						class TriggerOwner
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Trigger_TriggerOwner_text";
						};
						class Timer
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Trigger_Timer_text";
						};
						class Activation
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Trigger_Activation_text";
						};
						class Repeat
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Trigger_Repeat_text";
						};
						class Outro
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Trigger_Outro_text";
						};
					};
				};
				class Waypoint
				{
					displayName = "$STR_3DEN_Waypoint_textPlural";
					class Steps
					{
						class Intro
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Waypoint_Intro_text";
						};
						class Type
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Waypoint_Type_text";
						};
						class QuickPlace
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Waypoint_QuickPlace_text";
						};
						class Snap
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Waypoint_Snap_text";
							variables[] = {"\a3\3DEN\Data\Cfg3DEN\Waypoint\textureBackgroundAttached_ca.paa","\a3\3DEN\Data\Cfg3DEN\Waypoint\textureBackground_ca.paa"};
						};
						class Condition
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Waypoint_Condition_text";
						};
						class Outro
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Waypoint_Outro_text";
						};
					};
				};
				class System
				{
					displayName = "$STR_3DEN_Logic_textPlural";
					class Steps
					{
						class Intro
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_System_Intro_text";
						};
						class Module
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_System_Module_text";
						};
						class Logic
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_System_Logic_text";
						};
						class Playable
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_System_Playable_text";
						};
						class Outro
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_System_Outro_text";
						};
					};
				};
				class Marker
				{
					displayName = "$STR_3DEN_Marker_textPlural";
					class Steps
					{
						class Intro
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Marker_Intro_text";
						};
						class Icon
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Marker_Icon_text";
						};
						class Area
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Marker_Area_text";
						};
						class Outro
						{
							text = "$STR_3DEN_Tutorials_Entities_Sections_Marker_Outro_text";
						};
					};
				};
			};
		};
		class Scenario
		{
			displayName = "$STR_3DEN_Tutorials_Scenario_text";
			class Sections
			{
				class Attributes
				{
					displayName = "$STR_3DEN_Tutorials_Scenario_Sections_Attributes_text";
					class Steps
					{
						class Intro
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Attributes_Intro_text";
							highlight = 120;
							expression = "['showInterface',true] call bis_fnc_3DENInterface;";
						};
						class General
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Attributes_General_text";
						};
						class Environment
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Attributes_Environment_text";
						};
						class Multiplayer
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Attributes_Multiplayer_text";
						};
						class GarbageCollection
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Attributes_Performance_text";
						};
						class Ext
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Attributes_Ext_text";
							variables[] = {"a href='https://community.bistudio.com/wiki/Eden_Editor:_Scenario_Attributes'","/a"};
						};
						class Outro
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Attributes_Outro_text";
						};
					};
				};
				class Phases
				{
					displayName = "$STR_3DEN_Tutorials_Scenario_Sections_Phases_text";
					class Steps
					{
						class Intro
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Phases_Intro_text";
							highlight = 10306;
							expression = "		['showInterface',true] call bis_fnc_3DENInterface;	";
							x = "safezoneX + (21.5 * 	(	5 * (pixelW * pixelGrid * 	0.50)))";
							y = "safezoneY + (	5 + 	(	5 + 2) + 1) * (pixelH * pixelGrid * 	0.50)";
						};
						class Sequence
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Phases_Sequence_text";
						};
						class PhaseScenario
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Phases_PhaseScenario_text";
						};
						class PhaseIntro
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Phases_PhaseIntro_text";
						};
						class PhaseOutro
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Phases_PhaseOutro_text";
						};
						class Outro
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Phases_Outro_text";
						};
					};
				};
				class Preview
				{
					displayName = "$STR_3DEN_Tutorials_Scenario_Sections_Preview_text";
					class Steps
					{
						class Intro
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Preview_Intro_text";
						};
						class Return
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Preview_Return_text";
						};
						class PreviewSP
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Preview_PreviewSP_text";
							variables[] = {{28}};
						};
						class PreviewSPBriefing
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Preview_PreviewSPBriefing_text";
						};
						class PreviewMP
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Preview_PreviewMP_text";
							variables[] = {{28}};
						};
						class PreviewMP2
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Preview_PreviewMP2_text";
							variables[] = {{28}};
						};
						class PreviewCamera
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Preview_PreviewCamera_text";
						};
						class PreviewSpectator
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Preview_PreviewSpectator_text";
						};
						class PreviewAsCharacter
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Preview_PreviewAsCharacter_text";
						};
						class Outro
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Preview_Outro_text";
						};
					};
				};
				class Publishing
				{
					displayName = "$STR_3DEN_Tutorials_Scenario_Sections_Publishing_text";
					class Steps
					{
						class Intro
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Publishing_Intro_text";
						};
						class SteamWorkshop
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Publishing_SteamWorkshop_text";
							highlight = 120;
							expression = "['showInterface',true] call bis_fnc_3DENInterface;";
						};
						class Export
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Publishing_Export_text";
							highlight = 120;
							expression = "['showInterface',true] call bis_fnc_3DENInterface;";
						};
						class Outro
						{
							text = "$STR_3DEN_Tutorials_Scenario_Sections_Publishing_Outro_text";
							variables[] = {"a href='https://community.bistudio.com/wiki/Eden_Editor:_Publishing'","/a"};
						};
					};
				};
			};
		};
	};
	class Attributes
	{
		class Default: ctrlControlsGroupNoScrollbars
		{
			w = "(	48 + 	82) * (pixelW * pixelGrid * 	0.50) + pixelW";
			h = "5 * (pixelH * pixelGrid * 	0.50)";
			attributeLoad = "";
			attributeSave = "";
		};
		class Title: Default
		{
			class Controls
			{
				class Title: ctrlStatic
				{
					style = 1;
					x = 0;
					w = "48 * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					colorBackground[] = {0,0,0,0};
				};
			};
		};
		class TitleWide: Default
		{
			class Controls
			{
				class Title: ctrlStatic
				{
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					w = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					colorBackground[] = {0,0,0,0};
				};
			};
		};
		class Combo: Title
		{
			attributeLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlCombo = _this controlsGroupCtrl 100;		_cfgValues = _config >> 'Values';		if (isclass _cfgValues) then {			{				_lbadd = _ctrlCombo lbadd gettext (_x >> 'name');				if (isnumber (_x >> 'value')) then {					_valueConfig = getnumber (_x >> 'value');					_ctrlCombo lbsetdata [_lbadd,str _valueConfig];					_ctrlCombo lbsetvalue [_lbadd,_valueConfig];				} else {					_ctrlCombo lbsetdata [_lbadd,gettext (_x >> 'value')];				};				if (getnumber (_x >> 'default') > 0) then {_ctrlCombo lbsetcursel _lbadd;};			} foreach configproperties [_cfgValues,'isclass _x'];		};		if (lbsize _ctrlCombo == 0) then {			{				_lbAdd = _ctrlCombo lbadd _x;				_ctrlCombo lbsetvalue [_lbAdd,1 - _foreachindex];				_ctrlCombo lbsetdata [_lbAdd,str (1 - _foreachindex)];			} foreach [localize 'str_enabled',localize 'str_disabled'];		};		if (_value isequaltype true) then {			_value = [0,1] select _value;		} else {			if (_value isequaltype '') then {_value = tolower _value;};		};		for '_i' from 0 to (lbsize _ctrlCombo - 1) do {			if (_value in [parsenumber (_ctrlCombo lbdata _i),tolower (_ctrlCombo lbdata _i),_ctrlCombo lbvalue _i]) exitwith {_ctrlCombo lbsetcursel _i;};		};	";
			attributeSave = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlCombo = _this controlsGroupCtrl 100;		switch toupper gettext (_config >> 'typeName') do {			case 'NUMBER': {				_returnData = parsenumber (_ctrlCombo lbdata lbcursel _ctrlCombo);				_returnValue = _ctrlCombo lbvalue lbcursel _ctrlCombo;				if (round _returnData != _returnValue) then {_returnData = _returnValue;};				_returnData			};			case 'BOOL': {				[false,true] select ((parsenumber (_ctrlCombo lbdata lbcursel _ctrlCombo)) max 0 min 1)			};			default {_ctrlCombo lbdata lbcursel _ctrlCombo};		};	";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlCombo
				{
					idc = 100;
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					w = "82 * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					colorTextRight[] = {1,1,1,0.5};
					colorSelectRight[] = {0,0,0,0.5};
					onLoad = "				comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';				_control = _this select 0;				_config = _this select 1;				_configItems = _config >> 'itemsconfig';				if (isclass _configItems) then {					_pathRoots = if (getnumber (_configItems >> 'localConfig') > 0) then {[configfile,campaignconfigfile,missionconfigfile]} else {[configfile]};					_paths = [];					{						_path = _x;						{_path = _path >> _x;} foreach getarray (_configItems >> 'path');						_paths pushback _path;					} foreach _pathRoots;					_propertyText = gettext (_configItems >> 'propertyText');					_propertyTextRight = gettext (_configItems >> 'propertyTextRight');					_propertyColor = gettext (_configItems >> 'propertyColor');					_propertyPicture = gettext (_configItems >> 'propertyPicture');					_tooltip = gettext (_configItems >> 'tooltip');					if (_tooltip == '') then {_tooltip = '%1\n%2';};					_sort = getnumber (_configItems >> 'sort');					{						{							_text = gettext (_x >> _propertyText);							if (_text != '') then {								_lbadd = _control lbadd _text;								_control lbsetdata [_lbadd,configname _x];								if (_propertyPicture != '') then {_control lbsetpicture [_lbadd,gettext (_x >> _propertyPicture)];};								if (_propertyTextRight != '') then {_control lbsettextright [_lbadd,gettext (_x >> _propertyTextRight)];};								_control lbsettooltip [_lbadd,format [_tooltip,_control lbtext _lbadd,_control lbdata _lbadd]];								_dlcLogo = if (configsourcemod _x == '') then {''} else {modParams [configsourcemod  _x,['logo']] param [0,'']};								if (_dlcLogo != '') then {_control lbsetpictureright [_lbadd,_dlcLogo];};							};						} foreach configproperties [_x,'isclass _X'];					} foreach _paths;					if (_sort > 1) then {lbsortbyvalue _control} else {if (_sort > 0) then {lbsort _control};};				};			";
				};
			};
		};
		class ComboPreview: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					idc = 100;
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					w = "(	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Preview: ctrlButtonPictureKeepAspect
				{
					idc = 101;
					x = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					w = "0.99 * 	5 * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					text = "\a3\3DEN\Data\Attributes\ComboPreview\play_ca.paa";
					onMouseButtonClick = "				comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';				_ctrlButton = _this select 0;				_ctrlGroup = ctrlParentControlsGroup _ctrlButton;				_ctrlCombo = _ctrlGroup controlsgroupctrl 100;				_path = [configfile,campaignconfigfile,missionconfigfile] select ((_ctrlCombo lbvalue lbcursel _ctrlCombo) max 0);				_cfg = configfile >> 'cfg3den' >> 'attributes' >> ctrlclassname _ctrlGroup >> 'Controls' >> ctrlclassname _ctrlCombo >> 'ItemsConfig';				{_path = _path >> _x;} foreach getarray (_cfg >> 'path');				_data = _ctrlCombo lbdata lbcursel _ctrlCombo;				switch (tolower configname _path) do {					case 'cfgmusic': {						playmusic _data;					};					case 'cfgsound': {						playsound _data;					};					case 'cfgvoice': {						_protocol = gettext (_path >> _data >> 'protocol');						_directory = getarray (_path >> _data >> 'directories') param [0,''];						if (_directory != '') then {							_word = selectrandom ['AwaitingOrders','IAmReady','ReadyForOrders','StandingBy','Waiting'];							_wordPath = getarray (configfile >> _protocol >> 'Words' >> _word) param [0,''];							if (_wordPath != '') then {								_path = _directory + _wordPath;								if (_path select [0,1] == '\') then {_path = _path select [1];};								playsound3d [_path,get3dencamera];							};						};					};					default {						_item = _path >> _data;						if (isclass _item) then {							_soundArray = getarray (_item >> 'sounds');							if (count _soundArray > 0) then {								_soundArray = getarray (_item >> (_soundArray select 0));							} else {								_soundArray = getarray (_item >> 'sound');							};							if (count _soundArray > 0) then {								playsound3d [_soundArray select 0,get3dencamera];								playsound3d [(_soundArray select 0) + '.wss',get3dencamera];							};						};					};				};			";
				};
			};
		};
		class Checkbox: Title
		{
			attributeLoad = "		_checked = switch (true) do {			case (_value isequaltype 0): {([false,true] select (_value max 0 min 1))};			case (_value isequaltype ''): {([false,true] select ((parsenumber _value) max 0 min 1))};			default {_value};		};		(_this controlsGroupCtrl 100) cbsetchecked _checked;	";
			attributeSave = "cbchecked (_this controlsGroupCtrl 100)";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlCheckboxBaseline
				{
					idc = 100;
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					w = "5 * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class CheckboxNumber: Checkbox
		{
			attributeSave = "[0,1] select cbchecked (_this controlsGroupCtrl 100)";
		};
		class CheckboxState: Checkbox
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					onCheckedChanged = "					_ctrlCheckbox = _this select 0;					_state = [false,true] select (cbChecked _ctrlCheckbox);					_fade = [0.75,0] select _state;					_ctrlGroup = ctrlParentControlsGroup ctrlParentControlsGroup _ctrlCheckbox;					{						if (ctrlParentControlsGroup _x == _ctrlGroup) then {							_x ctrlenable _state;							_x ctrlsetfade _fade;							_x ctrlcommit 0;						};					} foreach (allcontrols (ctrlparent _ctrlCheckbox) - [ctrlParentControlsGroup _ctrlCheckbox]);			";
					onLoad = "				_this spawn {					disableserialization;					_ctrlCheckbox = _this select 0;					_state = [false,true] select (cbChecked _ctrlCheckbox);					_fade = [0.75,0] select _state;					_ctrlGroup = ctrlParentControlsGroup ctrlParentControlsGroup _ctrlCheckbox;					{						if (ctrlParentControlsGroup _x == _ctrlGroup) then {							_x ctrlenable _state;							_x ctrlsetfade _fade;							_x ctrlcommit 0;						};					} foreach (allcontrols (ctrlparent _ctrlCheckbox) - [ctrlParentControlsGroup _ctrlCheckbox]);				};			";
				};
			};
		};
		class CheckboxReversed: Checkbox
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					textureChecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureUnchecked_ca.paa";
					textureUnchecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureChecked_ca.paa";
					textureFocusedChecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureUnchecked_ca.paa";
					textureFocusedUnchecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureChecked_ca.paa";
					textureHoverChecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureUnchecked_ca.paa";
					textureHoverUnchecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureChecked_ca.paa";
					texturePressedChecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureUnchecked_ca.paa";
					texturePressedUnchecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureChecked_ca.paa";
					textureDisabledChecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureUnchecked_ca.paa";
					textureDisabledUnchecked = "\a3\3DEN\Data\Controls\ctrlCheckbox\textureChecked_ca.paa";
				};
			};
		};
		class Edit: Title
		{
			attributeLoad = "		if (typename _value != typename '') then {_value = str _value;};		(_this controlsGroupCtrl 100) ctrlSetText _value;	";
			attributeSave = "		_value = ctrlText (_this controlsGroupCtrl 100);		if (gettext (_config >> 'validate') == 'NUMBER' || {gettext (_config >> 'typeName') == 'NUMBER'}) then {_value = parsenumber _value;};		_value	";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlEdit
				{
					idc = 100;
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					w = "82 * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class EditShort: Edit
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					w = "round(	82 / 3) * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class EditMulti3: Edit
		{
			h = "4 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Background: ctrlStaticOverlay
				{
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "0.4 * 	5 * (pixelH * pixelGrid * 	0.50)";
					w = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					h = "3.1 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Title: ctrlStaticFrame
				{
					colorBackground[] = {0,0,0,0.5};
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "0 * 	5 * (pixelH * pixelGrid * 	0.50)";
					w = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					h = "3.5 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					style = "0x10 + 0x200";
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
					w = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					h = "3 * 	5 * (pixelH * pixelGrid * 	0.50)";
					colorBackground[] = {0,0,0,0};
				};
			};
		};
		class EditMulti5: EditMulti3
		{
			h = "6 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Background: Background
				{
					h = "5.1 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Title: Title
				{
					h = "5.5 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					h = "5 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class EditCode: Edit
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					idc = 100;
					autocomplete = "scripting";
					font = "EtelkaMonospacePro";
					sizeEx = "3.41 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
			};
		};
		class EditCodeShort: EditCode
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					w = "82 / 3";
				};
			};
		};
		class EditCodeMulti3: EditMulti3
		{
			h = "(	5 + 3 * 	3.5) * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Background: Background
				{
					h = "(3 * 	3.5 + 0.6 * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class Title: Title
				{
					h = "(3 * 	3.5 + 1 * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					autocomplete = "scripting";
					font = "EtelkaMonospacePro";
					sizeEx = "3.41 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					h = "3 * 	3.5 * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class EditCodeMulti5: EditMulti5
		{
			h = "(	5 + 5 * 	3.5) * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Background: Background
				{
					h = "(5 * 	3.5 + 0.6 * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class Title: Title
				{
					h = "(5 * 	3.5 + 1 * 	5) * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					autocomplete = "scripting";
					font = "EtelkaMonospacePro";
					sizeEx = "3.41 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					h = "5 * 	3.5 * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class EditXYZ: Title
		{
			idc = 100;
			attributeLoad = "		(_this controlsGroupCtrl 101) ctrlSetText str (_value select 0);		(_this controlsGroupCtrl 102) ctrlSetText str (_value select 1);		(_this controlsGroupCtrl 103) ctrlSetText str (_value select 2);	";
			attributeSave = "		[			parsenumber ctrlText (_this controlsGroupCtrl 101),			parsenumber ctrlText (_this controlsGroupCtrl 102),			parsenumber ctrlText (_this controlsGroupCtrl 103)		]	";
			class Controls: Controls
			{
				class Title: Title{};
				class TitleX: ctrlStatic
				{
					text = "$STR_3DEN_Axis_X";
					style = 2;
					shadow = 0;
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					w = "(	5) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					colorBackground[] = {0.77,0.18,0.1,1};
				};
				class ValueX: ctrlEdit
				{
					idc = 101;
					text = "0";
					x = "(	48 + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
					w = "(	82 / 3 - 	5) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					font = "EtelkaMonospacePro";
					sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class TitleY: TitleX
				{
					text = "$STR_3DEN_Axis_Y";
					x = "(	48 + 	82 * (1/3)) * (pixelW * pixelGrid * 	0.50)";
					colorBackground[] = {0.58,0.82,0.22,1};
				};
				class ValueY: ValueX
				{
					idc = 102;
					x = "(	48 + 	82 * (1/3) + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
				class TitleZ: TitleX
				{
					text = "$STR_3DEN_Axis_Z";
					x = "(	48 + 	82 * (2/3)) * (pixelW * pixelGrid * 	0.50)";
					colorBackground[] = {0.26,0.52,0.92,1};
				};
				class ValueZ: ValueX
				{
					idc = 103;
					x = "(	48 + 	82 * (2/3) + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class EditXY: Title
		{
			idc = 100;
			attributeLoad = "		(_this controlsGroupCtrl 101) ctrlSetText str (_value select 0);		(_this controlsGroupCtrl 102) ctrlSetText str (_value select 1);		(_this controlsGroupCtrl 103) ctrlSetText str (_value select 2);	";
			attributeSave = "		[			parsenumber ctrlText (_this controlsGroupCtrl 101),			parsenumber ctrlText (_this controlsGroupCtrl 102),			parsenumber ctrlText (_this controlsGroupCtrl 103)		]	";
			onLoad = "			((_this select 0) controlsGroupCtrl 103) ctrlSetFade 1;			((_this select 0) controlsGroupCtrl 103) ctrlCommit 0;			((_this select 0) controlsGroupCtrl 203) ctrlSetFade 1;			((_this select 0) controlsGroupCtrl 203) ctrlCommit 0;	";
			class Controls: Controls
			{
				class Title: Title{};
				class TitleX: ctrlStatic
				{
					text = "$STR_3DEN_Axis_X";
					style = 2;
					shadow = 0;
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					w = "(	5) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					colorBackground[] = {0.77,0.18,0.1,1};
				};
				class ValueX: ctrlEdit
				{
					idc = 101;
					text = "0";
					x = "(	48 + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
					w = "(	82 / 3 - 	5) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					font = "EtelkaMonospacePro";
					sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class TitleY: TitleX
				{
					text = "$STR_3DEN_Axis_Y";
					x = "(	48 + 	82 * (1/3)) * (pixelW * pixelGrid * 	0.50)";
					colorBackground[] = {0.58,0.82,0.22,1};
				};
				class ValueY: ValueX
				{
					idc = 102;
					x = "(	48 + 	82 * (1/3) + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
				class TitleZ: TitleX
				{
					idc = 203;
					text = "$STR_3DEN_Axis_Z";
					x = "(	48 + 	82 * (2/3)) * (pixelW * pixelGrid * 	0.50)";
					colorBackground[] = {0.26,0.52,0.92,1};
				};
				class ValueZ: ValueX
				{
					idc = 103;
					x = "(	48 + 	82 * (2/3) + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class EditZ: Title
		{
			attributeLoad = "		(_this controlsGroupCtrl 100) ctrlSetText str _value;	";
			attributeSave = "		parsenumber ctrlText (_this controlsGroupCtrl 100),	";
			class Controls: Controls
			{
				class Title: Title{};
				class TitleZ: ctrlStatic
				{
					text = "$STR_3DEN_Axis_Z";
					style = 2;
					shadow = 0;
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					w = "(	5) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.26,0.52,0.92,1};
				};
				class ValueZ: ctrlEdit
				{
					idc = 100;
					text = "0";
					x = "(	48 + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
					w = "(	82 / 3 - 	5) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					font = "EtelkaMonospacePro";
					sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
			};
		};
		class EditAB: Title
		{
			idc = 100;
			attributeLoad = "		(_this controlsGroupCtrl 101) ctrlSetText str (_value select 0);		(_this controlsGroupCtrl 102) ctrlSetText str (_value select 1);	";
			attributeSave = "		[			parsenumber ctrlText (_this controlsGroupCtrl 101),			parsenumber ctrlText (_this controlsGroupCtrl 102)		]	";
			class Controls: Controls
			{
				class Title: Title{};
				class TitleA: ctrlStatic
				{
					text = "$STR_3DEN_Axis_A";
					style = 2;
					shadow = 0;
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					w = "(	5) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.77,0.18,0.1,1};
				};
				class ValueA: ctrlEdit
				{
					idc = 101;
					text = "0";
					x = "(	48 + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
					w = "(	82 / 3 - 	5) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					font = "EtelkaMonospacePro";
					sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class TitleB: TitleA
				{
					text = "$STR_3DEN_Axis_B";
					x = "(	48 + 	82 * (1/3)) * (pixelW * pixelGrid * 	0.50)";
					colorBackground[] = {0.58,0.82,0.22,1};
				};
				class ValueB: ValueA
				{
					idc = 102;
					x = "(	48 + 	82 * (1/3) + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class EditABC: Title
		{
			idc = 100;
			attributeLoad = "		(_this controlsGroupCtrl 101) ctrlSetText str (_value select 0);		(_this controlsGroupCtrl 102) ctrlSetText str (_value select 1);		(_this controlsGroupCtrl 103) ctrlSetText str (_value select 2);	";
			attributeSave = "		[			parsenumber ctrlText (_this controlsGroupCtrl 101),			parsenumber ctrlText (_this controlsGroupCtrl 102),			parsenumber ctrlText (_this controlsGroupCtrl 103)		]	";
			class Controls: Controls
			{
				class Title: Title{};
				class TitleA: ctrlStatic
				{
					text = "$STR_3DEN_Axis_A";
					style = 2;
					shadow = 0;
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					w = "(	5) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					colorText[] = {1,1,1,1};
					colorBackground[] = {0.77,0.18,0.1,1};
				};
				class ValueA: ctrlEdit
				{
					idc = 101;
					text = "0";
					x = "(	48 + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
					w = "(	82 / 3 - 	5) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					font = "EtelkaMonospacePro";
					sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class TitleB: TitleA
				{
					text = "$STR_3DEN_Axis_B";
					x = "(	48 + 	82 * (1/3)) * (pixelW * pixelGrid * 	0.50)";
					colorBackground[] = {0.58,0.82,0.22,1};
				};
				class ValueB: ValueA
				{
					idc = 102;
					x = "(	48 + 	82 * (1/3) + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
				class TitleC: TitleA
				{
					text = "C";
					x = "(	48 + 	82 * (2/3)) * (pixelW * pixelGrid * 	0.50)";
					colorBackground[] = {0.26,0.52,0.92,1};
				};
				class ValueC: ValueA
				{
					idc = 103;
					x = "(	48 + 	82 * (2/3) + 	(	5)) * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class EditArray: Edit
		{
			attributeLoad = "		_valueText = '';		{			_add = if (_foreachindex == 0) then {_x} else {format [', %1',_x]};			_valueText = _valueText + _add;		} foreach _value;		(_this controlsGroupCtrl 100) ctrlSetText _valueText;	";
			attributeSave = "		_value = ctrlText (_this controlsGroupCtrl 100);		_values = [_value,';, '] call bis_fnc_splitString;		_values	";
		};
		class Slider: Title
		{
			onLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlGroup = _this select 0;		[_ctrlGroup controlsgroupctrl 100,_ctrlGroup controlsgroupctrl 101] call bis_fnc_initSliderValue;	";
			attributeLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlGroup = _this;		[_ctrlGroup controlsgroupctrl 100,_ctrlGroup controlsgroupctrl 101,nil,_value] call bis_fnc_initSliderValue;	";
			attributeSave = "sliderposition (_this controlsGroupCtrl 100)";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlXSliderH
				{
					idc = 100;
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					w = "(	82 - (	10 + 1)) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Edit: ctrlEdit
				{
					idc = 101;
					x = "(	48 + 	82 - (	10 + 1)) * (pixelW * pixelGrid * 	0.50)";
					w = "(	10 + 1) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class SliderDistance: Slider
		{
			onLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlGroup = _this select 0;		[_ctrlGroup controlsgroupctrl 100,_ctrlGroup controlsgroupctrl 101,'m'] call bis_fnc_initSliderValue;	";
			attributeLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlGroup = _this;		[_ctrlGroup controlsgroupctrl 100,_ctrlGroup controlsgroupctrl 101,'m',_value] call bis_fnc_initSliderValue;	";
			class Controls: Controls
			{
				class Value: Value
				{
					sliderRange[] = {50,5000};
					sliderPosition = 500;
					lineSize = 50;
				};
			};
		};
		class SliderMultiplier: Slider
		{
			onLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlGroup = _this select 0;		[_ctrlGroup controlsgroupctrl 100,_ctrlGroup controlsgroupctrl 101,'x'] call bis_fnc_initSliderValue;	";
			attributeLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlGroup = _this;		[_ctrlGroup controlsgroupctrl 100,_ctrlGroup controlsgroupctrl 101,'x',_value] call bis_fnc_initSliderValue;	";
		};
		class SliderTime: Title
		{
			attributeLoad = "		(_this controlsGroupCtrl 100) slidersetposition _value;		[_this controlsGroupCtrl 100,_value] call compile gettext (configfile >> 'Cfg3DEN' >> 'Attributes' >> 'SliderTime' >> 'Controls' >> 'Value' >> 'onSliderPosChanged');	";
			attributeSave = "		sliderposition (_this controlsGroupCtrl 100)	";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlXSliderH
				{
					idc = 100;
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					w = "(	82 - 	8 * 3) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					sliderRange[] = {0,3600};
					sliderPosition = 0;
					pageSize = 1;
					onSliderPosChanged = "				comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';				_ctrlSlider = _this select 0;				_value = (_this select 1) * (sliderspeed _ctrlSlider select 1);				_valueHour = floor (_value / 3600);				_valueMinute = floor ((_value / 60) % 60);				_valueSecond = floor (_value % 60);				_textHour = if (_valueHour < 10) then {'0' + str _valueHour} else {str _valueHour};				_textMinute = if (_valueMinute < 10) then {'0' + str _valueMinute} else {str _valueMinute};				_textSecond = if (_valueSecond < 10) then {'0' + str _valueSecond} else {str _valueSecond};				_ctrlGroup = ctrlParentControlsGroup _ctrlSlider;				_ctrlHour = _ctrlGroup controlsgroupctrl 101;				_ctrlMinute = _ctrlGroup controlsgroupctrl 102;				_ctrlSecond = _ctrlGroup controlsgroupctrl 103;				_ctrlHour ctrlsettext _textHour;				_ctrlMinute ctrlsettext _textMinute;				_ctrlSecond ctrlsettext _textSecond;				_ctrlCfg = configfile >> 'Cfg3DEN' >> 'Attributes' >> ctrlclassname _ctrlGroup;				_code = gettext (_ctrlCfg >> 'onValueChanged');				if (_code != '') then {[_ctrlGroup,_value] call compile _code;};			";
				};
				class Frame: ctrlStaticFrame
				{
					x = "(	48 + 	82 - 	8 * 3) * (pixelW * pixelGrid * 	0.50)";
					w = "3 * 	8 * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Separator: ctrlStatic
				{
					style = 2;
					x = "(	48 + 	82 - 	8 * 3) * (pixelW * pixelGrid * 	0.50)";
					w = "3 * 	8 * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					font = "EtelkaMonospacePro";
					sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					colorBackground[] = {0,0,0,0.5};
					text = ":   :";
				};
				class Hour: ctrlEdit
				{
					idc = 101;
					text = "00";
					tooltip = "$STR_3DEN_Attributes_SliderTime_Hour_tooltip";
					style = "0x02 + 0x200";
					x = "(	48 + 	82 - 	8 * 3) * (pixelW * pixelGrid * 	0.50)";
					w = "8 * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					colorBackground[] = {0,0,0,0};
					font = "EtelkaMonospacePro";
					sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
					onKillFocus = "				comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';				_ctrlGroup = ctrlParentControlsGroup (_this select 0);				_ctrlSlider = _ctrlGroup controlsgroupctrl 100;				_ctrlHour = _ctrlGroup controlsgroupctrl 101;				_ctrlMinute = _ctrlGroup controlsgroupctrl 102;				_ctrlSecond = _ctrlGroup controlsgroupctrl 103;				_range = sliderrange _ctrlSlider;				_value = (round (parsenumber ctrltext _ctrlHour) + round (parsenumber ctrltext _ctrlMinute) / 60 + round (parsenumber ctrltext _ctrlSecond) / 3600) * 3600;				_ctrlSlider slidersetposition (_value / (sliderspeed _ctrlSlider select 1));				_ctrlCfg = configfile >> 'Cfg3DEN' >> 'Attributes' >> ctrlclassname _ctrlGroup;				[_ctrlSlider,sliderposition _ctrlSlider] call compile gettext (_ctrlCfg >> 'Controls' >> 'Value' >> 'onSliderPosChanged');			";
				};
				class Minute: Hour
				{
					idc = 102;
					tooltip = "$STR_3DEN_Attributes_SliderTime_Minute_tooltip";
					x = "(	48 + 	82 - 	8 * 2) * (pixelW * pixelGrid * 	0.50)";
					w = "8 * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Second: Hour
				{
					idc = 103;
					tooltip = "$STR_3DEN_Attributes_SliderTime_Second_tooltip";
					x = "(	48 + 	82 - 	8) * (pixelW * pixelGrid * 	0.50)";
					w = "8 * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class SliderTimeDay: SliderTime
		{
			h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
			onValueChanged = "_this call bis_fnc_3DENIntel;";
			class Controls: Controls
			{
				class Title: Title{};
				class Preview: ctrlControlsGroupNoScrollbars
				{
					idc = 110;
					x = "(	48 + 1.11 * 	5) * (pixelW * pixelGrid * 	0.50)";
					y = 0;
					w = "(	82 - 	8 * 3 - 2.22 * 	5) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					onLoad = "uinamespace setvariable ['AttributeSliderTimeDay_group',_this select 0];";
					class Controls
					{
						class PreviewNight1: ctrlStaticPicture
						{
							idc = 111;
							text = "\a3\3DEN\Data\Attributes\SliderTimeDay\night_ca.paa";
							colorText[] = {1,1,1,0.6};
							x = 0;
							w = "0.5 * 	5 * (pixelW * pixelGrid * 	0.50)";
							h = "5 * (pixelH * pixelGrid * 	0.50)";
						};
						class PreviewNight2: PreviewNight1
						{
							idc = 112;
						};
						class PreviewDay: PreviewNight1
						{
							idc = 113;
							text = "\a3\3DEN\Data\Attributes\SliderTimeDay\day_ca.paa";
						};
						class PreviewSunrise: PreviewNight1
						{
							idc = 114;
							text = "\a3\3DEN\Data\Attributes\SliderTimeDay\sunrise_ca.paa";
						};
						class PreviewSunset: PreviewNight1
						{
							idc = 115;
							text = "\a3\3DEN\Data\Attributes\SliderTimeDay\sunset_ca.paa";
						};
						class Sun: ctrlStaticPicture
						{
							idc = 116;
							text = "\a3\3DEN\Data\Attributes\SliderTimeDay\sun_ca.paa";
							colorText[] = {1,1,1,0.6};
							x = "(	82 - 	8 * 3 - (2.22 + 1) * 	5) * 0.5 * (pixelW * pixelGrid * 	0.50)";
							w = "5 * (pixelW * pixelGrid * 	0.50)";
							h = "5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
				class Value: Value
				{
					idc = 100;
					sliderRange[] = {0,23.9999};
					sliderPosition = 12;
					lineSize = 1;
					pageSize = 3600;
					border = "\a3\3DEN\Data\Attributes\SliderTimeDay\border_ca.paa";
					thumb = "\a3\3DEN\Data\Attributes\SliderTimeDay\thumb_ca.paa";
					color[] = {1,1,1,0.6};
					colorActive[] = {1,1,1,1};
				};
				class Frame: Frame{};
				class Separator: Separator{};
				class Hour: Hour{};
				class Minute: Minute{};
				class Second: Second{};
			};
		};
		class SliderTimeForecast: SliderTime
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					sliderRange[] = {1800,28800};
					sliderPosition = 3600;
					lineSize = 1800;
				};
				class Frame: Frame{};
				class Separator: Separator{};
				class Hour: Hour{};
				class Minute: Minute{};
				class Second: Second{};
			};
		};
		class SliderTimeRespawn: SliderTime
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					sliderRange[] = {0,300};
					sliderPosition = 0;
					lineSize = 5;
				};
				class Frame: Frame{};
				class Separator: Separator{};
				class Hour: Hour{};
				class Minute: Minute{};
				class Second: Second{};
			};
		};
		class Toolbox: Title
		{
			attributeLoad = "";
			attributeSave = "";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: ctrlToolbox
				{
					idc = 100;
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					w = "82 * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class ControlSP: Checkbox
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					onCheckedChanged = "					_ctrlCheckbox = _this select 0;					_state = [true,false] select (cbChecked _ctrlCheckbox);					_fade = [0.75,0] select _state;					_ctrlGroup = ctrlParentControlsGroup ctrlParentControlsGroup _ctrlCheckbox;					{						if (ctrlclassname _x == 'ControlMP') then {							_x ctrlenable _state;							_x ctrlsetfade _fade;							_x ctrlcommit 0;							_ctrlCheckbox = _x controlsGroupCtrl 100;							_ctrlCheckbox ctrlshow _state;							_ctrlCheckboxDisabled = _x controlsGroupCtrl 101;							_ctrlCheckboxDisabled ctrlshow !_state;						};					} foreach (allcontrols (ctrlparent _ctrlCheckbox) - [ctrlParentControlsGroup _ctrlCheckbox]);			";
					onLoad = "				_this spawn {					disableserialization;					_ctrlCheckbox = _this select 0;					_state = [true,false] select (cbChecked _ctrlCheckbox);					_fade = [0.75,0] select _state;					_ctrlGroup = ctrlParentControlsGroup ctrlParentControlsGroup _ctrlCheckbox;					{						if (ctrlclassname _x == 'ControlMP') then {							_x ctrlenable _state;							_x ctrlsetfade _fade;							_x ctrlcommit 0;							_ctrlCheckbox = _x controlsGroupCtrl 100;							_ctrlCheckbox ctrlshow _state;							_ctrlCheckboxDisabled = _x controlsGroupCtrl 101;							_ctrlCheckboxDisabled ctrlshow !_state;						};					} foreach (allcontrols (ctrlparent _ctrlCheckbox) - [ctrlParentControlsGroup _ctrlCheckbox]);				};			";
				};
			};
		};
		class ControlMP: Checkbox
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value{};
				class ValueDisabled: Value
				{
					idc = 101;
					show = 0;
					checked = 1;
				};
			};
		};
		class FormationGroup: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel (['wedge','vee','line','column','file','stag_column','ech_left','ech_right','diamond'] find _value);";
			attributeSave = "['wedge','vee','line','column','file','stag_column','ech_left','ech_right','diamond'] select (missionnamespace getvariable ['FormationGroup_value',0]);";
			h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Background: ctrlStatic
				{
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					w = "82 * (pixelW * pixelGrid * 	0.50)";
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					colorBackground[] = {0,0,0,0.5};
				};
				class Value: Value
				{
					idc = 100;
					style = "0x02 + 0x30 + 0x800";
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					colorBackground[] = {0,0,0,0};
					rows = 1;
					columns = 9;
					strings[] = {"\a3\3DEN\Data\Attributes\Formation\wedge_ca.paa","\a3\3DEN\Data\Attributes\Formation\vee_ca.paa","\a3\3DEN\Data\Attributes\Formation\line_ca.paa","\a3\3DEN\Data\Attributes\Formation\column_ca.paa","\a3\3DEN\Data\Attributes\Formation\file_ca.paa","\a3\3DEN\Data\Attributes\Formation\stag_column_ca.paa","\a3\3DEN\Data\Attributes\Formation\ech_left_ca.paa","\a3\3DEN\Data\Attributes\Formation\ech_right_ca.paa","\a3\3DEN\Data\Attributes\Formation\diamond_ca.paa"};
					values[] = {0,1,2,3,4,5,6,7,8};
					tooltips[] = {"$STR_WEDGE","$STR_VEE","$STR_LINE","$STR_COLUMN","$STR_FILE","$STR_STAGGERED","$STR_ECHL","$STR_ECHR","$STR_DIAMOND"};
					onToolboxSelChanged = "missionnamespace setvariable ['FormationGroup_value',_this select 1];";
				};
			};
		};
		class FormationWaypoint: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel (['no change','wedge','vee','line','column','file','stag_column','ech_left','ech_right','diamond'] find _value);";
			attributeSave = "['no change','wedge','vee','line','column','file','stag_column','ech_left','ech_right','diamond'] select (missionnamespace getvariable ['FormationWaypoint_value',0]);";
			h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					idc = 100;
					style = "0x02 + 0x30 + 0x800";
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					rows = 1;
					columns = 10;
					strings[] = {"\a3\3DEN\Data\Attributes\default_ca.paa","\a3\3DEN\Data\Attributes\Formation\wedge_ca.paa","\a3\3DEN\Data\Attributes\Formation\vee_ca.paa","\a3\3DEN\Data\Attributes\Formation\line_ca.paa","\a3\3DEN\Data\Attributes\Formation\column_ca.paa","\a3\3DEN\Data\Attributes\Formation\file_ca.paa","\a3\3DEN\Data\Attributes\Formation\stag_column_ca.paa","\a3\3DEN\Data\Attributes\Formation\ech_left_ca.paa","\a3\3DEN\Data\Attributes\Formation\ech_right_ca.paa","\a3\3DEN\Data\Attributes\Formation\diamond_ca.paa"};
					values[] = {-1,0,1,2,3,4,5,6,7,8};
					tooltips[] = {"$STR_3den_attributes_default_unchanged_text","$STR_WEDGE","$STR_VEE","$STR_LINE","$STR_COLUMN","$STR_FILE","$STR_STAGGERED","$STR_ECHL","$STR_ECHR","$STR_DIAMOND"};
					onToolboxSelChanged = "missionnamespace setvariable ['FormationWaypoint_value',_this select 1];";
				};
			};
		};
		class SpeedModeGroup: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel (['limited','normal','full'] find _value);";
			attributeSave = "['limited','normal','full'] select (missionnamespace getvariable ['SpeedModeGroup_value',1]);";
			h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					idc = 100;
					style = "0x02 + 0x30 + 0x800";
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					rows = 1;
					columns = 3;
					strings[] = {"\a3\3DEN\Data\Attributes\SpeedMode\limited_ca.paa","\a3\3DEN\Data\Attributes\SpeedMode\normal_ca.paa","\a3\3DEN\Data\Attributes\SpeedMode\full_ca.paa"};
					values[] = {0,1,2};
					tooltips[] = {"$STR_3den_attributes_speedmode_limited","$STR_3den_attributes_speedmode_normal","$STR_3den_attributes_speedmode_full"};
					onToolboxSelChanged = "missionnamespace setvariable ['SpeedModeGroup_value',_this select 1];";
				};
			};
		};
		class SpeedModeWaypoint: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel (['unchanged','limited','normal','full'] find _value);";
			attributeSave = "['unchanged','limited','normal','full'] select (missionnamespace getvariable ['SpeedModeWaypoint_value',1]);";
			h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					idc = 100;
					style = "0x02 + 0x30 + 0x800";
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					rows = 1;
					columns = 4;
					strings[] = {"\a3\3DEN\Data\Attributes\default_ca.paa","\a3\3DEN\Data\Attributes\SpeedMode\limited_ca.paa","\a3\3DEN\Data\Attributes\SpeedMode\normal_ca.paa","\a3\3DEN\Data\Attributes\SpeedMode\full_ca.paa"};
					values[] = {-1,0,1,2};
					tooltips[] = {"$STR_3den_attributes_default_unchanged_text","$STR_3den_attributes_speedmode_limited","$STR_3den_attributes_speedmode_normal","$STR_3den_attributes_speedmode_full"};
					onToolboxSelChanged = "missionnamespace setvariable ['SpeedModeWaypoint_value',_this select 1];";
				};
			};
		};
		class Rank: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel (['private','corporal','sergeant','lieutenant','captain','major','colonel'] find _value);";
			attributeSave = "['private','corporal','sergeant','lieutenant','captain','major','colonel'] select (missionnamespace getvariable ['Rank_value',0]);";
			h = "8 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "8 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					idc = 100;
					style = "0x02 + 0x30 + 0x800";
					h = "8 * (pixelH * pixelGrid * 	0.50)";
					rows = 1;
					columns = 7;
					strings[] = {"\a3\Ui_f\data\GUI\Cfg\Ranks\private_gs.paa","\a3\Ui_f\data\GUI\Cfg\Ranks\corporal_gs.paa","\a3\Ui_f\data\GUI\Cfg\Ranks\sergeant_gs.paa","\a3\Ui_f\data\GUI\Cfg\Ranks\lieutenant_gs.paa","\a3\Ui_f\data\GUI\Cfg\Ranks\captain_gs.paa","\a3\Ui_f\data\GUI\Cfg\Ranks\major_gs.paa","\a3\Ui_f\data\GUI\Cfg\Ranks\colonel_gs.paa"};
					tooltips[] = {"$STR_Private","$STR_Corporal","$STR_Sergeant","$STR_Lieutenant","$STR_Captain","$STR_Major","$STR_Colonel"};
					values[] = {0,1,2,3,4,5,6};
					onToolboxSelChanged = "missionnamespace setvariable ['Rank_value',_this select 1];";
				};
			};
		};
		class UnitPos: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel (['auto','down','middle','up'] find _value);";
			attributeSave = "['auto','down','middle','up'] select (missionnamespace getvariable ['Stance_value',0]);";
			h = "8 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "8 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					idc = 100;
					style = "0x02 + 0x30 + 0x800";
					h = "8 * (pixelH * pixelGrid * 	0.50)";
					rows = 1;
					columns = 4;
					strings[] = {"\a3\3DEN\Data\Attributes\default_ca.paa","\a3\3DEN\Data\Attributes\Stance\down_ca.paa","\a3\3DEN\Data\Attributes\Stance\middle_ca.paa","\a3\3DEN\Data\Attributes\Stance\up_ca.paa"};
					tooltips[] = {"$STR_3den_attributes_stance_default","$STR_3den_attributes_stance_down","$STR_3den_attributes_stance_middle","$STR_3den_attributes_stance_up"};
					values[] = {3,2,1,0};
					onToolboxSelChanged = "missionnamespace setvariable ['Stance_value',_this select 1];";
				};
			};
		};
		class ShapeTrigger: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel _value;";
			attributeSave = "missionnamespace getvariable ['ShapeTrigger_value',0];";
			h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					idc = 100;
					style = "0x02 + 0x30 + 0x800";
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					w = "82 * (2/3) * (pixelW * pixelGrid * 	0.50)";
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					rows = 1;
					columns = 2;
					strings[] = {"\a3\3DEN\Data\Attributes\Shape\ellipse_ca.paa","\a3\3DEN\Data\Attributes\Shape\rectangle_ca.paa"};
					values[] = {0,1};
					tooltips[] = {"$STR_3den_attributes_shapetrigger_ellipse","$STR_3den_attributes_shapetrigger_rectangle"};
					onToolboxSelChanged = "missionnamespace setvariable ['ShapeTrigger_value',_this select 1];";
				};
			};
		};
		class ShapeMarker: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel (['ICON','ELLIPSE','RECTANGLE'] find _value);";
			attributeSave = "['ICON','ELLIPSE','RECTANGLE'] select (missionnamespace getvariable ['ShapeMarker_value',2]);";
			h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					idc = 100;
					style = "0x02 + 0x30 + 0x800";
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					rows = 1;
					columns = 2;
					strings[] = {"\a3\3DEN\Data\Attributes\Shape\rectangle_ca.paa","\a3\3DEN\Data\Attributes\Shape\ellipse_ca.paa"};
					values[] = {1,2};
					tooltips[] = {"$STR_3den_attributes_shapetrigger_rectangle","$STR_3den_attributes_shapetrigger_ellipse"};
					onToolboxSelChanged = "missionnamespace setvariable ['ShapeMarker_value',_this select 1];";
				};
			};
		};
		class Repeat: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel _value;";
			attributeSave = "missionnamespace getvariable ['Repeat_value',0];";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					idc = 100;
					rows = 1;
					columns = 2;
					strings[] = {"$STR_3den_attributes_repeat_once","$STR_3den_attributes_repeat_repeatedly"};
					values[] = {0,1};
					onToolboxSelChanged = "missionnamespace setvariable ['Repeat_value',_this select 1];";
				};
			};
		};
		class ActivationType: Title
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel (['present','not present','west d','east d','guer d','civ d'] find _value);";
			attributeSave = "['present','not present','west d','east d','guer d','civ d'] select (missionnamespace getvariable ['ActivationType_value',2]);";
			h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: ctrlCombo
				{
					idc = 100;
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					w = "82 * (pixelW * pixelGrid * 	0.50)";
					h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Items
					{
						class Present
						{
							text = "$STR_3den_attributes_activationtype_present";
							tooltip = "$STR_3DEN_attributes_ActivationType_Present_tooltip";
							value = 0;
							data = "PRESENT";
						};
						class NotPresent
						{
							text = "$STR_3den_attributes_activationtype_notpresent";
							tooltip = "$STR_3DEN_attributes_ActivationType_NotPresent_tooltip";
							value = 1;
							data = "NOT PRESENT";
						};
						class WestDetected
						{
							text = "$STR_3den_attributes_activationtype_westdetected";
							tooltip = "$STR_3DEN_attributes_ActivationType_WestDetected_tooltip";
							value = 2;
							data = "WEST D";
						};
						class EastDetected: WestDetected
						{
							text = "$STR_3den_attributes_activationtype_eastdetected";
							value = 3;
							data = "EAST D";
						};
						class GuerDetected: WestDetected
						{
							text = "$STR_3den_attributes_activationtype_guerdetected";
							value = 4;
							data = "GUER D";
						};
						class CivDetected: WestDetected
						{
							text = "$STR_3den_attributes_activationtype_civdetected";
							value = 5;
							data = "CIV D";
						};
					};
				};
			};
		};
		class TimeoutType: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel _value;";
			attributeSave = "missionnamespace getvariable ['TimeoutType_value',0];";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					idc = 100;
					rows = 1;
					columns = 2;
					strings[] = {"$STR_3den_attributes_timeouttime_countdown","$STR_3den_attributes_timeouttime_timeout"};
					values[] = {0,1};
					tooltips[] = {"$STR_3den_attributes_timeouttime_countdown_tooltip","$STR_3den_attributes_timeouttime_timeout_tooltip"};
					onToolboxSelChanged = "missionnamespace setvariable ['TimeoutType_value',_this select 1];";
				};
			};
		};
		class Timeout: Title
		{
			idc = 100;
			attributeLoad = "		(_this controlsGroupCtrl 101) ctrlSetText str (_value select 0);		(_this controlsGroupCtrl 102) ctrlSetText str (_value select 1);		(_this controlsGroupCtrl 103) ctrlSetText str (_value select 2);	";
			attributeSave = "		[			parsenumber ctrlText (_this controlsGroupCtrl 101),			parsenumber ctrlText (_this controlsGroupCtrl 102),			parsenumber ctrlText (_this controlsGroupCtrl 103)		]	";
			class Controls: Controls
			{
				class Title: Title{};
				class TitleMin: ctrlStatic
				{
					text = "$STR_3DEN_Attributes_Timeout_TitleMin_text";
					style = 1;
					shadow = 0;
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					w = "(	5 * 2) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					colorText[] = {1,1,1,1};
					colorBackground[] = {1,1,1,0};
				};
				class ValueMin: ctrlEdit
				{
					idc = 101;
					x = "(	48 + 	(	5 * 2)) * (pixelW * pixelGrid * 	0.50)";
					w = "(	82 / 3 - 2 * 	5) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					font = "EtelkaMonospacePro";
					sizeEx = "3.875 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
				};
				class TitleMid: TitleMin
				{
					text = "$STR_3DEN_Attributes_Timeout_TitleMid_text";
					x = "(	48 + 	82 * (1/3)) * (pixelW * pixelGrid * 	0.50)";
				};
				class ValueMid: ValueMin
				{
					idc = 102;
					x = "(	48 + 	82 * (1/3) + 	(	5 * 2)) * (pixelW * pixelGrid * 	0.50)";
				};
				class TitleMax: TitleMin
				{
					text = "$STR_3DEN_Attributes_Timeout_TitleMax_text";
					x = "(	48 + 	82 * (2/3)) * (pixelW * pixelGrid * 	0.50)";
				};
				class ValueMax: ValueMin
				{
					idc = 103;
					x = "(	48 + 	82 * (2/3) + 	(	5 * 2)) * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class Type: Title
		{
			h = "11 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "11 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Search: ctrlEdit
				{
					idc = 501;
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					w = "(	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					text = "";
				};
				class SearchButton: ctrlButtonSearch
				{
					idc = 502;
					x = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					w = "5 * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: ctrlTree
				{
					idc = 500;
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					y = "5 * (pixelH * pixelGrid * 	0.50)";
					w = "82 * (pixelW * pixelGrid * 	0.50)";
					h = "10 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class Lock: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class Unlocked
						{
							text = "$STR_3DEN_Attributes_Lock_Unlocked_text";
							value = 0;
							tooltip = "$STR_3DEN_Attributes_Lock_Unlocked_tooltip";
						};
						class Default
						{
							text = "$STR_3DEN_Attributes_Lock_Default_text";
							value = 1;
							tooltip = "$STR_3DEN_Attributes_Lock_Default_tooltip";
						};
						class Locked
						{
							text = "$STR_3DEN_Attributes_Lock_Locked_text";
							value = 2;
							tooltip = "$STR_3DEN_Attributes_Lock_Locked_tooltip";
						};
						class LockedForPlayer
						{
							text = "$STR_3DEN_Attributes_Lock_LockedForPlayer_text";
							value = 3;
							tooltip = "$STR_3DEN_Attributes_Lock_LockedForPlayer_tooltip";
						};
					};
				};
			};
		};
		class CombatModeGroup: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class Blue
						{
							text = "$STR_3DEN_Attributes_CombatMode_Blue_text";
							data = "BLUE";
							tooltip = "$STR_3DEN_Attributes_CombatMode_Blue_tooltip";
						};
						class Green
						{
							text = "$STR_3DEN_Attributes_CombatMode_Green_text";
							data = "GREEN";
							tooltip = "$STR_3DEN_Attributes_CombatMode_Green_tooltip";
						};
						class White
						{
							text = "$STR_3DEN_Attributes_CombatMode_White_text";
							data = "WHITE";
							tooltip = "$STR_3DEN_Attributes_CombatMode_White_tooltip";
						};
						class Yellow
						{
							text = "$STR_3DEN_Attributes_CombatMode_Yellow_text";
							data = "YELLOW";
							tooltip = "$STR_3DEN_Attributes_CombatMode_Yellow_tooltip";
						};
						class Red
						{
							text = "$STR_3DEN_Attributes_CombatMode_Red_text";
							data = "RED";
							tooltip = "$STR_3DEN_Attributes_CombatMode_Red_tooltip";
						};
					};
				};
			};
		};
		class CombatModeWaypoint: CombatModeGroup
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items: Items
					{
						class NoChange
						{
							text = "$STR_3den_attributes_default_unchanged_text";
							tooltip = "$STR_3den_attributes_default_unchanged_tooltip";
							data = "NO CHANGE";
						};
						class Blue: Blue{};
						class Green: Green{};
						class White: White{};
						class Yellow: Yellow{};
						class Red: Red{};
					};
				};
			};
		};
		class BehaviourGroup: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class Careless
						{
							text = "$STR_3DEN_Attributes_Behaviour_Careless_text";
							data = "CARELESS";
							tooltip = "$STR_3DEN_Attributes_Behaviour_Careless_tooltip";
						};
						class Safe
						{
							text = "$STR_3DEN_Attributes_Behaviour_Safe_text";
							data = "SAFE";
							tooltip = "$STR_3DEN_Attributes_Behaviour_Safe_tooltip";
						};
						class Aware
						{
							text = "$STR_3DEN_Attributes_Behaviour_Aware_text";
							data = "AWARE";
							tooltip = "$STR_3DEN_Attributes_Behaviour_Aware_tooltip";
						};
						class Combat
						{
							text = "$STR_3DEN_Attributes_Behaviour_Combat_text";
							data = "COMBAT";
							tooltip = "$STR_3DEN_Attributes_Behaviour_Combat_tooltip";
						};
						class Stealth
						{
							text = "$STR_3DEN_Attributes_Behaviour_Stealth_text";
							data = "STEALTH";
							tooltip = "$STR_3DEN_Attributes_Behaviour_Stealth_tooltip";
						};
					};
				};
			};
		};
		class BehaviourWaypoint: BehaviourGroup
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items: Items
					{
						class Unchanged
						{
							text = "$STR_3den_attributes_default_unchanged_text";
							tooltip = "$STR_3den_attributes_default_unchanged_tooltip";
							data = "UNCHANGED";
						};
						class Careless: Careless{};
						class Safe: Safe{};
						class Aware: Aware{};
						class Combat: Combat{};
						class Stealth: Stealth{};
					};
				};
			};
		};
		class TriggerType: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class None
						{
							text = "$STR_3DEN_Attributes_TriggerType_None_text";
							tooltip = "$STR_3DEN_Attributes_TriggerType_None_tooltip";
							data = "NONE";
						};
						class WestGuard
						{
							text = "$STR_3DEN_Attributes_TriggerType_WestGuard_text";
							tooltip = "$STR_3DEN_Attributes_TriggerType_WestGuard_tooltip";
							data = "WEST G";
						};
						class EastGuard: WestGuard
						{
							text = "$STR_3DEN_Attributes_TriggerType_EastGuard_text";
							data = "EAST G";
						};
						class GuerGuard: WestGuard
						{
							text = "$STR_3DEN_Attributes_TriggerType_GuerGuard_text";
							data = "GUER G";
						};
						class Switch
						{
							text = "$STR_3DEN_Attributes_TriggerType_Switch_text";
							tooltip = "$STR_3DEN_Attributes_TriggerType_Switch_tooltip";
							data = "SWITCH";
						};
						class End1
						{
							text = "$STR_3DEN_Attributes_TriggerType_End1_text";
							tooltip = "$STR_3DEN_Attributes_TriggerType_End1_tooltip";
							data = "END1";
						};
						class End2: End1
						{
							text = "$STR_3DEN_Attributes_TriggerType_End2_text";
							data = "END2";
						};
						class End3: End1
						{
							text = "$STR_3DEN_Attributes_TriggerType_End3_text";
							data = "END3";
						};
						class End4: End1
						{
							text = "$STR_3DEN_Attributes_TriggerType_End4_text";
							data = "END4";
						};
						class End5: End1
						{
							text = "$STR_3DEN_Attributes_TriggerType_End5_text";
							data = "END5";
						};
						class End6: End1
						{
							text = "$STR_3DEN_Attributes_TriggerType_End6_text";
							data = "END6";
						};
						class Lose
						{
							text = "$STR_3DEN_Attributes_TriggerType_Lose_text";
							tooltip = "$STR_3DEN_Attributes_TriggerType_Lose_tooltip";
							data = "LOOSE";
						};
					};
				};
			};
		};
		class TriggerActivation: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					onLbSelChanged = "					_ctrlCombo = _this select 0;					_data = _ctrlCombo lbdata lbcursel _ctrlCombo;					_state = !(_data in ['NONE','ALPHA','BRAVO','CHARLIE','DELTA','ECHO','FOXTROT','GOLF','HOTEL','GOLF','JULIET']);					_fade = [0.75,0] select _state;					_ctrlGroup = ctrlParentControlsGroup ctrlParentControlsGroup _ctrlCombo;					{						if (ctrlclassname ctrlParentControlsGroup _x in ['ActivationType']) then {							_x ctrlenable _state;							_x ctrlsetfade _fade;							_x ctrlcommit 0;						};					} foreach (allcontrols (ctrlparent _ctrlCombo) - [ctrlParentControlsGroup _ctrlCombo]);			";
					onLoad = "				_this spawn {					disableserialization;					_ctrlCombo = _this select 0;					_data = _ctrlCombo lbdata lbcursel _ctrlCombo;					_state = !(_data in ['NONE','ALPHA','BRAVO','CHARLIE','DELTA','ECHO','FOXTROT','GOLF','HOTEL','GOLF','JULIET']);					_fade = [0.75,0] select _state;					_ctrlGroup = ctrlParentControlsGroup ctrlParentControlsGroup _ctrlCombo;					{						if (ctrlclassname ctrlParentControlsGroup _x in ['ActivationType']) then {							_x ctrlenable _state;							_x ctrlsetfade _fade;							_x ctrlcommit 0;						};					} foreach (allcontrols (ctrlparent _ctrlCombo) - [ctrlParentControlsGroup _ctrlCombo]);				};			";
					class Items
					{
						class None
						{
							text = "$STR_3DEN_Attributes_TriggerActivation_None_text";
							data = "NONE";
							tooltip = "$STR_3DEN_Attributes_TriggerActivation_None_tooltip";
						};
						class AnyPlayer
						{
							text = "$STR_3DEN_Attributes_TriggerActivation_AnyPlayer_text";
							data = "ANYPLAYER";
							tooltip = "$STR_3DEN_Attributes_TriggerActivation_AnyPlayer_tooltip";
						};
						class Any
						{
							text = "$STR_3DEN_Attributes_TriggerActivation_Any_text";
							data = "ANY";
							tooltip = "$STR_3DEN_Attributes_TriggerActivation_Any_tooltip";
						};
						class West
						{
							text = "$STR_west";
							data = "WEST";
							tooltip = "$STR_3DEN_Attributes_TriggerActivation_West_tooltip";
						};
						class East: West
						{
							text = "$STR_east";
							data = "EAST";
						};
						class Guer: West
						{
							text = "$STR_guerrila";
							data = "GUER";
						};
						class Civ: West
						{
							text = "$STR_civilian";
							data = "CIV";
						};
						class Logic: West
						{
							text = "$STR_logic";
							data = "LOGIC";
						};
						class WestSeized
						{
							text = "$STR_3DEN_Attributes_TriggerActivation_WestSeized_text";
							data = "WEST SEIZED";
							tooltip = "$STR_3DEN_Attributes_TriggerActivation_WestSeized_tooltip";
						};
						class EastSeized: WestSeized
						{
							text = "$STR_3DEN_Attributes_TriggerActivation_EastSeized_text";
							data = "EAST SEIZED";
						};
						class GuerSeized: WestSeized
						{
							text = "$STR_3DEN_Attributes_TriggerActivation_GuerSeized_text";
							data = "GUER SEIZED";
						};
						class RadioA
						{
							text = "$STR_3DEN_Attributes_TriggerActivation_RadioA_text";
							data = "ALPHA";
							tooltip = "$STR_3DEN_Attributes_TriggerActivation_RadioA_tooltip";
						};
						class RadioB: RadioA
						{
							text = "$STR_3DEN_Attributes_TriggerActivation_RadioB_text";
							data = "BRAVO";
						};
						class RadioC: RadioA
						{
							text = "$STR_3DEN_Attributes_TriggerActivation_RadioC_text";
							data = "CHARLIE";
						};
						class RadioD: RadioA
						{
							text = "$STR_3DEN_Attributes_TriggerActivation_RadioD_text";
							data = "DELTA";
						};
						class RadioE: RadioA
						{
							text = "$STR_3DEN_Attributes_TriggerActivation_RadioE_text";
							data = "ECHO";
						};
						class RadioF: RadioA
						{
							text = "$STR_3DEN_Attributes_TriggerActivation_RadioF_text";
							data = "FOXTROT";
						};
						class RadioG: RadioA
						{
							text = "$STR_3DEN_Attributes_TriggerActivation_RadioG_text";
							data = "GOLF";
						};
						class RadioH: RadioA
						{
							text = "$STR_3DEN_Attributes_TriggerActivation_RadioH_text";
							data = "HOTEL";
						};
						class RadioI: RadioA
						{
							text = "$STR_3DEN_Attributes_TriggerActivation_RadioI_text";
							data = "INDIA";
						};
						class RadioJ: RadioA
						{
							text = "$STR_3DEN_Attributes_TriggerActivation_RadioJ_text";
							data = "JULIET";
						};
					};
				};
			};
		};
		class TriggerActivationOwner: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class Vehicle
						{
							text = "$STR_3DEN_Attributes_TriggerActivationOwner_Vehicle_text";
							tooltip = "$STR_3DEN_Attributes_TriggerActivationOwner_Vehicle_tooltip";
							data = "VEHICLE";
						};
						class Group
						{
							text = "$STR_3DEN_Attributes_TriggerActivationOwner_Group_text";
							tooltip = "$STR_3DEN_Attributes_TriggerActivationOwner_Group_tooltip";
							data = "GROUP";
						};
						class Leader
						{
							text = "$STR_3DEN_Attributes_TriggerActivationOwner_Leader_text";
							tooltip = "$STR_3DEN_Attributes_TriggerActivationOwner_Leader_tooltip";
							data = "LEADER";
						};
						class Member
						{
							text = "$STR_3DEN_Attributes_TriggerActivationOwner_Member_text";
							tooltip = "$STR_3DEN_Attributes_TriggerActivationOwner_Member_tooltip";
							data = "MEMBER";
						};
					};
				};
			};
		};
		class TriggerActivationOwnerStatic: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class Item0
						{
							text = "Static Object";
							data = "STATIC";
						};
					};
				};
			};
		};
		class MarkerColor: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					onLoad = "				_control = _this select 0;				_config = _this select 1;				{					if (getnumber (_x >> 'scope') > 0) then {						_color = (_x >> 'color') call bis_fnc_colorConfigToRGBA;						_lbadd = _control lbadd gettext (_x >> 'name');						_control lbsetdata [_lbadd,configname _x];						_control lbsetpicture [_lbadd,'#(argb,8,8,3)color(1,1,1,1)'];						_control lbsetpicturecolor [_lbadd,_color];						_control lbsetpicturecolorselected [_lbadd,_color];						_control lbsettooltip [_lbadd,(_control lbtext _lbadd) + '\n' + (_control lbdata _lbadd)];					};				} foreach configproperties [configfile >> 'cfgmarkercolors','isclass _x'];			";
				};
			};
		};
		class MarkerBrush: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class ItemsConfig
					{
						path[] = {"CfgMarkerBrushes"};
						propertyText = "name";
						propertyPicture = "texture";
					};
				};
			};
		};
		class Sound: ComboPreview
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class None
						{
							text = "$STR_3DEN_Attributes_Sound_None_text";
							data = "$NONE$";
							value = -1;
						};
					};
					class ItemsConfig
					{
						path[] = {"CfgSounds"};
						propertyText = "name";
						localConfig = 1;
						sort = 2;
					};
				};
				class Preview: Preview{};
			};
		};
		class SoundVoice: Sound
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items: Items
					{
						class None: None
						{
							data = "";
						};
					};
					class ItemsConfig: ItemsConfig{};
				};
				class Preview: Preview{};
			};
		};
		class SoundEffect: ComboPreview
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class None
						{
							text = "$STR_3den_attributes_sound_none_text";
							data = "";
							value = -1;
						};
					};
					class ItemsConfig
					{
						path[] = {"CfgSFX"};
						propertyText = "name";
						localConfig = 1;
						sort = 2;
					};
				};
				class Preview: Preview{};
			};
		};
		class SoundEnvironment: ComboPreview
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class None
						{
							text = "$STR_3den_attributes_sound_none_text";
							data = "";
							value = -1;
						};
					};
					class ItemsConfig
					{
						path[] = {"CfgEnvSounds"};
						propertyText = "name";
						localConfig = 1;
						sort = 2;
					};
				};
				class Preview: Preview{};
			};
		};
		class Music: ComboPreview
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class None
						{
							text = "$STR_3DEN_Attributes_Music_None_text";
							data = "$NONE$";
							value = -1;
						};
					};
					class ItemsConfig
					{
						path[] = {"CfgMusic"};
						propertyText = "name";
						localConfig = 1;
						sort = 2;
					};
				};
				class Preview: Preview{};
			};
		};
		class RscTitle: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class None
						{
							text = "$STR_3DEN_Attributes_RscTitle_None_text";
							data = "";
							value = -1;
						};
					};
					class ItemsConfig
					{
						path[] = {"RscTitles"};
						propertyText = "name";
						sort = 2;
					};
				};
			};
		};
		class Face: Combo
		{
			h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
					onload = "				_control = _this select 0;				{					_cfgFace = _x;					if (gettext (_cfgFace >> 'displayname') != '' && getnumber (_cfgFace >> 'disabled') == 0) then {						_lbadd = _control lbadd gettext (_cfgFace >> 'displayname');						_control lbsetdata [_lbadd,configname _cfgFace];						_control lbsetpicture [_lbadd,gettext (_cfgFace >> 'texture')];						_control lbsettooltip [_lbadd,(_control lbtext _lbadd) + '\n' + (_control lbdata _lbadd)];						_dlcLogo = if (configsourcemod _cfgFace == '') then {''} else {modParams [configsourcemod  _cfgFace,['logo']] param [0,'']};						if (_dlcLogo != '') then {_control lbsetpictureright [_lbadd,_dlcLogo];};					};				} foreach configproperties [configfile >> 'cfgfaces' >> 'Man_A3','isclass _x'];				lbsort _control;			";
				};
			};
		};
		class Speaker: ComboPreview
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class ItemsConfig
					{
						path[] = {"CfgVoice"};
						propertyText = "displayName";
						propertyPicture = "icon";
						sort = 1;
					};
				};
				class Preview: Preview{};
			};
		};
		class Date: Title
		{
			idc = 100;
			attributeLoad = "		_ctrlYear = _this controlsGroupCtrl 101;		_ctrlMonth = _this controlsGroupCtrl 102;		_ctrlDay = _this controlsGroupCtrl 103;		_valueYear = _value param [0,1985];		_valueMonth = _value param [1,1];		_valueDay = _value param [2,1];		for '_i' from 0 to (lbsize _ctrlYear - 1) do {if ((_ctrlYear lbvalue _i) == _valueYear) then {_ctrlYear lbsetcursel _i;};};		for '_i' from 0 to (lbsize _ctrlMonth - 1) do {if ((_ctrlMonth lbvalue _i) == _valueMonth) then {_ctrlMonth lbsetcursel _i;};};		for '_i' from 0 to (lbsize _ctrlDay - 1) do {if ((_ctrlDay lbvalue _i) == _valueDay) then {_ctrlDay lbsetcursel _i;};};	";
			attributeSave = "		_ctrlYear = _this controlsGroupCtrl 101;		_ctrlMonth = _this controlsGroupCtrl 102;		_ctrlDay = _this controlsGroupCtrl 103;		[_ctrlYear lbvalue lbcursel _ctrlYear,_ctrlMonth lbvalue lbcursel _ctrlMonth,_ctrlDay lbvalue lbcursel _ctrlDay]	";
			class Controls: Controls
			{
				class Title: Title{};
				class ValueYear: ctrlCombo
				{
					idc = 101;
					x = "(	48) * (pixelW * pixelGrid * 	0.50)";
					w = "(	82 / 3) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					colorTextRight[] = {1,1,1,0.6};
					onLoad = "				_ctrlYear = _this select 0;				for '_y' from 1982 to 2050 do {					_lbadd = _ctrlYear lbadd str _y;					_ctrlYear lbsetvalue [_lbadd,_y];				};				_ctrlYear lbsetcursel 53;			";
					onLbSelChanged = "				_ctrlGroup = ctrlParentControlsGroup (_this select 0);				_ctrlYear = _ctrlGroup controlsGroupCtrl 101;				_ctrlMonth = _ctrlGroup controlsGroupCtrl 102;				_ctrlDay = _ctrlGroup controlsGroupCtrl 103;				_year = _ctrlYear lbvalue lbcursel _ctrlYear;				_month = _ctrlMonth lbvalue lbcursel _ctrlMonth;				_isLeapYear = false;				_days = switch _month do {					case 1: {31};					case 2: {						if ((_year % 4 == 0 && _year % 100 != 0) || (_year % 400 == 0)) then {_isLeapYear = true; 29} else {28};					};					case 3: {31};					case 4: {30};					case 5: {31};					case 6: {30};					case 7: {31};					case 8: {31};					case 9: {30};					case 10: {31};					case 11: {30};					case 12: {31};					default {0};				};				if (_days == 0) exitwith {};				_yearID = _year % 100;				_monthID = [if (_isLeapYear) then {6} else {0},if (_isLeapYear) then {2} else {3},3,6,1,4,6,2,5,0,3,5] select (_month - 1);				_centuryID = [6,4,2,0] select (((_year - _yearID) / 100) % 4);				_dayID = 1;				_weekDay = floor (_dayID + _monthID + _yearID + _yearID / 4 + _centuryID) % 7;				_dayNames = [					'str_sunday',					'str_monday',					'str_tuesday',					'str_wednesday',					'str_thursday',					'str_friday',					'str_saturday'				];								_cursel = lbcursel _ctrlDay;				lbclear _ctrlDay;				_dPicture = -100;				for '_d' from 1 to _days do {					_weekDayID = round ((_weekDay + _d - 1) % 7);					_lbadd = _ctrlDay lbadd str _d;					_ctrlDay lbsetvalue [_lbadd,_d];					_ctrlDay lbsettextright [_lbadd,localize (_dayNames select _weekDayID)];					_pictureRight = '#(argb,8,8,3)color(0,0,0,0)';					if !(_weekDayID in [0,6]) then {_ctrlDay lbsetcolorright [_lbadd,[1,1,1,0.25]];};					if (([_year,_month,_d] distance [2013,9,12]) == 0) then {_RC = [_lbadd,[1,0.75,0,1]]; _ctrlDay lbsetcolor _RC; _ctrlDay lbsetcolorright _RC; _ctrlDay lbsetpicturerightcolor _RC; _ctrlDay lbsettooltip [_lbadd,localize 'STR_A3_cfgmods_a32_rc']; _pictureRight = gettext (configfile >> 'Cfg3DEN' >> 'Favorites' >> 'Mode' >> 'texture');};					_moonPhase = moonphase [_year,_month,_d,0,0];					if ((_d - _dPicture) > 5 && _moonPhase > 0.964) then {_pictureRight = '\a3\3DEN\Data\Attributes\Date\moon_full_ca.paa'; _dPicture = _d;};					if ((_d - _dPicture) > 5 && _moonPhase < 0.036) then {_pictureRight = '\a3\3DEN\Data\Attributes\Date\moon_new_ca.paa'; _dPicture = _d;};					_ctrlDay lbsetpictureright [_lbadd,_pictureRight];				};				_ctrlDay lbsetcursel (_cursel min (lbsize _ctrlDay - 1));			";
				};
				class ValueMonth: ValueYear
				{
					idc = 102;
					x = "(	48 + 	82 * (1/3)) * (pixelW * pixelGrid * 	0.50)";
					onLoad = "";
					class Items
					{
						class Month1
						{
							text = "$STR_3DEN_Attributes_Date_Month1_text";
							value = 1;
						};
						class Month2
						{
							text = "$STR_3DEN_Attributes_Date_Month2_text";
							value = 2;
						};
						class Month3
						{
							text = "$STR_3DEN_Attributes_Date_Month3_text";
							value = 3;
						};
						class Month4
						{
							text = "$STR_3DEN_Attributes_Date_Month4_text";
							value = 4;
						};
						class Month5
						{
							text = "$STR_3DEN_Attributes_Date_Month5_text";
							value = 5;
						};
						class Month6
						{
							text = "$STR_3DEN_Attributes_Date_Month6_text";
							value = 6;
						};
						class Month7
						{
							text = "$STR_3DEN_Attributes_Date_Month7_text";
							value = 7;
							default = 1;
						};
						class Month8
						{
							text = "$STR_3DEN_Attributes_Date_Month8_text";
							value = 8;
						};
						class Month9
						{
							text = "$STR_3DEN_Attributes_Date_Month9_text";
							value = 9;
						};
						class Month10
						{
							text = "$STR_3DEN_Attributes_Date_Month10_text";
							value = 10;
						};
						class Month11
						{
							text = "$STR_3DEN_Attributes_Date_Month11_text";
							value = 11;
						};
						class Month12
						{
							text = "$STR_3DEN_Attributes_Date_Month12_text";
							value = 12;
						};
					};
				};
				class ValueDay: ValueYear
				{
					idc = 103;
					x = "(	48 + 	82 * (2/3)) * (pixelW * pixelGrid * 	0.50) - pixelW";
					onLoad = "";
					onLbSelChanged = "				_this spawn {					disableserialization;					_ctrlGroup = ctrlParentControlsGroup (_this select 0);					_ctrlYear = _ctrlGroup controlsGroupCtrl 101;					_ctrlMonth = _ctrlGroup controlsGroupCtrl 102;					_ctrlDay = _ctrlGroup controlsGroupCtrl 103;					_date = [_ctrlYear lbvalue lbcursel _ctrlYear,_ctrlMonth lbvalue lbcursel _ctrlMonth,_ctrlDay lbvalue lbcursel _ctrlDay,12,0];					_sunriseSunsetTime = _date call bis_fnc_sunriseSunsetTime;					_sunriseTime = _sunriseSunsetTime select 0;					_sunsetTime = _sunriseSunsetTime select 1;					_ctrlPreviewGroup = uinamespace getvariable ['AttributeSliderTimeDay_group',controlnull];					_ctrlPreviewNight1 = _ctrlPreviewGroup controlsGroupCtrl 111;					_ctrlPreviewNight2 = _ctrlPreviewGroup controlsGroupCtrl 112;					_ctrlPreviewDay = _ctrlPreviewGroup controlsGroupCtrl 113;					_ctrlPreviewSunrise = _ctrlPreviewGroup controlsGroupCtrl 114;					_ctrlPreviewSunset = _ctrlPreviewGroup controlsGroupCtrl 115;					_ctrlPreviewSun = _ctrlPreviewGroup controlsGroupCtrl 116;					_ctrlPreviewSunrisePos = ctrlposition _ctrlPreviewSunrise;					_ctrlPreviewSunsetPos = ctrlposition _ctrlPreviewSunset;					_ctrlPreviewNight1Pos = ctrlposition _ctrlPreviewNight1;					_ctrlPreviewNight2Pos = ctrlposition _ctrlPreviewNight2;					_ctrlPreviewDayPos = ctrlposition _ctrlPreviewDay;					_w = ctrlposition _ctrlPreviewGroup select 2;					_ww = (ctrlposition _ctrlPreviewSunrise select 2) * 0.5;					if (_sunriseTime >= 0 && _sunsetTime >= 0) then {						_ctrlPreviewSunrisePos set [0,(_sunriseTime / 24) * _w - _ww];						_ctrlPreviewSunsetPos set [0,(_sunsetTime / 24) * _w - _ww];						_ctrlPreviewNight1Pos set [2,_ctrlPreviewSunrisePos select 0];						_ctrlPreviewNight2Pos set [0,(_ctrlPreviewSunsetPos select 0) + (_ctrlPreviewSunsetPos select 2)];						_ctrlPreviewNight2Pos set [2,_w - (_ctrlPreviewNight2Pos select 0)];						_ctrlPreviewDayPos set [0,(_ctrlPreviewSunrisePos select 0) + (_ctrlPreviewSunrisePos select 2)];						_ctrlPreviewDayPos set [2,(_ctrlPreviewSunsetPos select 0) - (_ctrlPreviewSunrisePos select 0) - (_ctrlPreviewSunrisePos select 2)];						_ctrlPreviewSun ctrlshow true;					} else {						_ctrlPreviewSunrisePos set [0,-1];						_ctrlPreviewSunsetPos set [0,-1];						_ctrlPreviewNight2Pos set [2,0];						if (_sunriseTime < 0) then {							_ctrlPreviewNight1Pos set [2,_w];							_ctrlPreviewDayPos set [2,0];							_ctrlPreviewSun ctrlshow false;						} else {							_ctrlPreviewNight1Pos set [2,0];							_ctrlPreviewDayPos set [0,0];							_ctrlPreviewDayPos set [2,_w];							_ctrlPreviewSun ctrlshow true;						};					};					_ctrlPreviewSunrise ctrlsetposition _ctrlPreviewSunrisePos;					_ctrlPreviewSunrise ctrlcommit 0;					_ctrlPreviewSunset ctrlsetposition _ctrlPreviewSunsetPos;					_ctrlPreviewSunset ctrlcommit 0;					_ctrlPreviewNight1 ctrlsetposition _ctrlPreviewNight1Pos;					_ctrlPreviewNight1 ctrlcommit 0;					_ctrlPreviewNight2 ctrlsetposition _ctrlPreviewNight2Pos;					_ctrlPreviewNight2 ctrlcommit 0;					_ctrlPreviewDay ctrlsetposition _ctrlPreviewDayPos;					_ctrlPreviewDay ctrlcommit 0;					[_ctrlGroup,_date] call bis_fnc_3DENIntel;				};			";
				};
			};
		};
		class GuerAllegiance: Title
		{
			idc = 100;
			h = "12 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					style = 1;
					h = "12 * (pixelH * pixelGrid * 	0.50)";
				};
				class Background: ctrlStatic
				{
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					w = "82 * (pixelW * pixelGrid * 	0.50)";
					h = "12 * (pixelH * pixelGrid * 	0.50)";
					colorBackground[] = {0,0,0,0.5};
				};
				class WestIcon: ctrlStaticPictureKeepAspect
				{
					x = "(	48 + 	82 * 0.5 - 14) * (pixelW * pixelGrid * 	0.50)";
					w = "12 * (pixelW * pixelGrid * 	0.50)";
					h = "12 * (pixelH * pixelGrid * 	0.50)";
					text = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_west_ca.paa";
				};
				class EastIcon: WestIcon
				{
					x = "(	48 + 	82 * 0.5 + 4) * (pixelW * pixelGrid * 	0.50)";
					text = "\a3\3DEN\Data\Displays\Display3DEN\PanelRight\side_east_ca.paa";
				};
				class West: ctrlCheckbox
				{
					idc = 101;
					x = "(	48 + 	82 * 0.5 - 12) * (pixelW * pixelGrid * 	0.50)";
					y = "2 * (pixelH * pixelGrid * 	0.50)";
					w = "8 * (pixelW * pixelGrid * 	0.50)";
					h = "8 * (pixelH * pixelGrid * 	0.50)";
					textureChecked = "\a3\3DEN\Data\Attributes\GuerAllegiance\friendly_ca.paa";
					textureUnchecked = "\a3\3DEN\Data\Attributes\GuerAllegiance\enemy_ca.paa";
					textureFocusedChecked = "\a3\3DEN\Data\Attributes\GuerAllegiance\friendly_ca.paa";
					textureFocusedUnchecked = "\a3\3DEN\Data\Attributes\GuerAllegiance\enemy_ca.paa";
					textureHoverChecked = "\a3\3DEN\Data\Attributes\GuerAllegiance\friendly_ca.paa";
					textureHoverUnchecked = "\a3\3DEN\Data\Attributes\GuerAllegiance\enemy_ca.paa";
					texturePressedChecked = "\a3\3DEN\Data\Attributes\GuerAllegiance\friendly_ca.paa";
					texturePressedUnchecked = "\a3\3DEN\Data\Attributes\GuerAllegiance\enemy_ca.paa";
					textureDisabledChecked = "\a3\3DEN\Data\Attributes\GuerAllegiance\friendly_ca.paa";
					textureDisabledUnchecked = "\a3\3DEN\Data\Attributes\GuerAllegiance\enemy_ca.paa";
				};
				class East: West
				{
					idc = 102;
					x = "(	48 + 	82 * 0.5 + 6) * (pixelW * pixelGrid * 	0.50)";
				};
			};
		};
		class LoiterDirection: Toolbox
		{
			h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					idc = 100;
					style = "0x02 + 0x30 + 0x800";
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					rows = 1;
					columns = 2;
					strings[] = {"\a3\3DEN\Data\Attributes\LoiterDirection\ccw_ca.paa","\a3\3DEN\Data\Attributes\LoiterDirection\cw_ca.paa"};
					values[] = {0,1};
				};
			};
		};
		class StructuredText1: Default
		{
			attributeLoad = "		_control = (_this controlsGroupCtrl 101) controlsGroupCtrl 100;		_control ctrlsetstructuredtext parsetext gettext (_config >> 'description');		_controlPos = ctrlposition _control;		_controlPos set [3,(_controlPos select 3) max (ctrltextheight _control)];		_control ctrlsetposition _controlPos;		_control ctrlcommit 0;	";
			attributeSave = "";
			h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class Group: ctrlControlsGroup
				{
					idc = 101;
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					w = "(	48 + 	82 - 6) * (pixelW * pixelGrid * 	0.50)";
					h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class Text: ctrlStructuredText
						{
							idc = 100;
							text = "";
							w = "(	48 + 	82 - 7) * (pixelW * pixelGrid * 	0.50)";
							h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
							colorBackground[] = {0,0,0,0.25};
						};
					};
				};
			};
		};
		class StructuredText2: StructuredText1
		{
			h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Text: Text
						{
							h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class StructuredText3: StructuredText1
		{
			h = "3 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "3 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Text: Text
						{
							h = "3 * 	5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class StructuredText4: StructuredText1
		{
			h = "4 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "4 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Text: Text
						{
							h = "4 * 	5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class StructuredText5: StructuredText1
		{
			h = "5 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "5 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Text: Text
						{
							h = "5 * 	5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class StructuredText6: StructuredText1
		{
			h = "6 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "6 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Text: Text
						{
							h = "6 * 	5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class StructuredText7: StructuredText1
		{
			h = "7 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "7 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Text: Text
						{
							h = "7 * 	5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class StructuredText8: StructuredText1
		{
			h = "8 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "8 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Text: Text
						{
							h = "8 * 	5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class StructuredText9: StructuredText1
		{
			h = "9 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "9 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Text: Text
						{
							h = "9 * 	5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class StructuredText10: StructuredText1
		{
			h = "10 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "10 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Text: Text
						{
							h = "10 * 	5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class ModuleInfo: Default
		{
			attributeLoad = "[_this,_config] call bis_fnc_3DENModuleDescription;";
			attributeSave = "";
			h = "6 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class TitleCustom: ctrlStatic
				{
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "2 * (pixelH * pixelGrid * 	0.50)";
					w = "(	48 + 	82 - 5) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					text = "$STR_3DEN_Attributes_ModuleInfo_TitleCustom_text";
					colorBackground[] = {0,0,0,0.5};
				};
				class Group: ctrlControlsGroup
				{
					idc = 101;
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "(2 + 	5) * (pixelH * pixelGrid * 	0.50)";
					w = "(	48 + 	82 - 5) * (pixelW * pixelGrid * 	0.50)";
					h = "4 * 	5 * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class Text: ctrlStructuredText
						{
							idc = 100;
							size = "3.96 * (1 / (getResolution select 3)) * pixelGrid * 0.5";
							w = "(	48 + 	82 - 5) * (pixelW * pixelGrid * 	0.50)";
							h = "4 * 	5 * (pixelH * pixelGrid * 	0.50)";
							colorBackground[] = {0,0,0,0.25};
						};
					};
				};
			};
		};
		class Skill: Slider
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					sliderRange[] = {0.2,1};
				};
				class Edit: Edit{};
			};
		};
		class Pitch: SliderMultiplier
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					sliderRange[] = {0.9,1.1};
				};
				class Edit: Edit{};
			};
		};
		class AmmoBox: TitleWide
		{
			scriptName = "AmmoBox";
			scriptPath = "3DENAttributes";
			onLoad = "[""onLoad"",_this,""AmmoBox"",'3DENAttributes',false] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
			onUnload = "[""onUnload"",_this,""AmmoBox"",'3DENAttributes',false] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
			attributeLoad = "['attributeLoad',_this] call (uinamespace getvariable 'AmmoBox_script');";
			attributeSave = "['attributeSave',_this] call (uinamespace getvariable 'AmmoBox_script');";
			h = "(19 * 	5 + 1) * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title1: Title
				{
					text = "$STR_3den_attributes_ammobox_title1_text";
				};
				class Type: ctrlToolbox
				{
					idc = 103;
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
					w = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
					rows = 1;
					columns = 2;
					strings[] = {"$STR_3den_attributes_ammobox_type_default","$STR_3den_attributes_ammobox_type_Virtual"};
				};
				class Title2: Title
				{
					text = "$STR_3den_attributes_ammobox_title2_text";
					y = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Filter: ctrlToolbox
				{
					idc = 100;
					style = "0x30 + 0x800";
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "3 * 	5 * (pixelH * pixelGrid * 	0.50)";
					w = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
					rows = 1;
					columns = 13;
					strings[] = {"\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_0_ca.paa","\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_1_ca.paa","\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_2_ca.paa","\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_3_ca.paa","\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_4_ca.paa","\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_5_ca.paa","\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_6_ca.paa","\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_7_ca.paa","\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_8_ca.paa","\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_9_ca.paa","\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_10_ca.paa","\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_11_ca.paa","\a3\Ui_F_Curator\Data\RscCommon\RscAttributeInventory\filter_12_ca.paa"};
				};
				class ListBackground: ctrlStatic
				{
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "5 * 	5 * (pixelH * pixelGrid * 	0.50)";
					w = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					h = "13 * 	5 * (pixelH * pixelGrid * 	0.50)";
					colorBackground[] = {1,1,1,0.1};
				};
				class List: ctrlListNBox
				{
					idc = 101;
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "5 * 	5 * (pixelH * pixelGrid * 	0.50)";
					w = "(	48 + 	82 - 	5) * (pixelW * pixelGrid * 	0.50)";
					h = "13 * 	5 * (pixelH * pixelGrid * 	0.50)";
					drawSideArrows = 1;
					idcLeft = 313102;
					idcRight = 313103;
					columns[] = {0.05,0.15,0.85};
					disableOverflow = 1;
				};
				class ButtonClear: ctrlButton
				{
					idc = 104;
					text = "Clear";
					x = "(	48 + 	82 - 25) * (pixelW * pixelGrid * 	0.50)";
					y = "18 * 	5 * (pixelH * pixelGrid * 	0.50)";
					w = "25 * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
				};
				class ArrowLeft: ctrlButton
				{
					idc = 313102;
					text = "-";
					font = "RobotoCondensedBold";
					x = -1;
					y = -1;
					w = "5 * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
				};
				class ArrowRight: ArrowLeft
				{
					idc = 313103;
					text = "+";
				};
			};
		};
		class GameType: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class ItemsConfig
					{
						path[] = {"CfgMPGameTypes"};
						propertyText = "name";
						sort = 1;
					};
				};
			};
		};
		class Respawn: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class None
						{
							text = "$STR_3DEN_Attributes_Respawn_None_text";
							tooltip = "$STR_3DEN_Attributes_Respawn_None_tooltip";
							data = "None";
							value = 0;
						};
						class Base
						{
							text = "$STR_3DEN_Attributes_Respawn_Base_text";
							tooltip = "$STR_3DEN_Attributes_Respawn_Base_tooltip";
							data = "Base";
							value = 3;
						};
						class Instant
						{
							text = "$STR_3DEN_Attributes_Respawn_Instant_text";
							tooltip = "$STR_3DEN_Attributes_Respawn_Instant_tooltip";
							data = "Instant";
							value = 2;
						};
						class Group
						{
							text = "$STR_3DEN_Attributes_Respawn_Group_text";
							tooltip = "$STR_3DEN_Attributes_Respawn_Group_tooltip";
							data = "Group";
							value = 4;
						};
						class Side
						{
							text = "$STR_3DEN_Attributes_Respawn_Side_text";
							tooltip = "$STR_3DEN_Attributes_Respawn_Side_tooltip";
							data = "Side";
							value = 5;
						};
						class Bird
						{
							text = "$STR_3DEN_Attributes_Respawn_Bird_text";
							tooltip = "$STR_3DEN_Attributes_Respawn_Bird_tooltip";
							data = "Bird";
							value = 1;
						};
					};
					onLBSelChanged = "				_ctrlCombo = _this select 0;				_cursel = _this select 1;				_respawnType = _ctrlCombo lbvalue _cursel;				missionnamespace setvariable ['Respawn_value',_respawnType];				_this spawn {					disableserialization;					_ctrlCombo = _this select 0;					_cursel = _this select 1;					_respawnType = _ctrlCombo lbvalue _cursel;					_ctrlGroup = ctrlParentControlsGroup ctrlParentControlsGroup _ctrlCombo;					_cfgAttributes = configfile >> 'Cfg3DEN' >> 'Mission' >> 'Multiplayer' >> 'AttributeCategories' >> 'Respawn' >> 'Attributes';					_n = 0;					{						if (ctrlParentControlsGroup _x == _ctrlGroup) then {							_cfg = _cfgAttributes select _n;							_respawnTypes = getarray (_cfg >> 'respawnTypes');							_state = count _respawnTypes == 0 || _respawnType in _respawnTypes;							_fade = [0.75,0] select _state;							_n = _n + 1;							_x ctrlenable _state;							_x ctrlsetfade _fade;							_x ctrlcommit 0;							ctrlsetfocus _x;							ctrlsetfocus _ctrlCombo;						};					} foreach (allcontrols (ctrlparent _ctrlCombo));				};			";
				};
			};
		};
		class RespawnTemplates: Title
		{
			attributeLoad = "		_selectedRespawnType = missionnamespace getvariable ['Respawn_value',0];		_pictureChecked = gettext (configfile >> 'ctrlCheckbox' >> 'textureChecked');		_pictureUnchecked = gettext (configfile >> 'ctrlCheckbox' >> 'textureUnchecked');		_defaultTemplates = [			getarray (configfile >> 'cfgrespawntemplates' >> 'respawnTemplatesNone'),			getarray (configfile >> 'cfgrespawntemplates' >> 'respawnTemplatesBird'),			getarray (configfile >> 'cfgrespawntemplates' >> 'respawnTemplatesInstant'),			getarray (configfile >> 'cfgrespawntemplates' >> 'respawnTemplatesBase'),			getarray (configfile >> 'cfgrespawntemplates' >> 'respawnTemplatesGroup'),			getarray (configfile >> 'cfgrespawntemplates' >> 'respawnTemplatesSide')		];		_isDefault = _value isequalto [''];		{			_cfgTemplate = _x;			_scope = if (isnumber (_cfgTemplate >> 'scope')) then {getnumber (_cfgTemplate >> 'scope')} else {2};			_respawnTypes = getarray (_cfgTemplate >> 'respawnTypes');			{				_respawnType = _x;				_ctrlListbox = _this controlsGroupCtrl (100 + _respawnType);				_selected = if (_respawnType == _selectedRespawnType && {!_isDefault}) then {_value} else {_defaultTemplates select _respawnType};				if (_scope > 1 && {count _respawnTypes == 0 || {_respawnType in _respawnTypes}}) then {					_data = configname _cfgTemplate;					_name = gettext (_cfgTemplate >> 'displayName');					if (_name == '') then {_name = _data};					_lbAdd = _ctrlListbox lbadd _name;					_ctrlListbox lbsetdata [_lbAdd,_data];					_active = _data in _selected;					_ctrlListbox lbsetvalue [_lbAdd,[0,1] select _active];					_ctrlListbox lbsetpicture [_lbAdd,[_pictureUnchecked,_pictureChecked] select _active];				};			} foreach [0,1,2,3,4,5];		} foreach configproperties [configfile >> 'CfgRespawnTemplates','isclass _x'];		{			_ctrlListbox = _this controlsGroupCtrl (100 + _x);			_ctrlListbox ctrlshow (_x == _selectedRespawnType);			lbsort _ctrlListbox;		} foreach [0,1,2,3,4,5];	";
			attributeSave = "		_value = [];		{			_ctrlListbox = _this controlsGroupCtrl (100 + _x);			if (ctrlshown _ctrlListbox) exitwith {				for '_i' from 0 to (lbsize _ctrlListbox - 1) do {					if (_ctrlListbox lbvalue _i > 0) then {_value pushback (_ctrlListbox lbdata _i);};				};			};		} foreach [0,1,2,3,4,5];		_value	";
			h = "5 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "5 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value0: ctrlListbox
				{
					idc = 100;
					show = 0;
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					w = "82 * (pixelW * pixelGrid * 	0.50)";
					h = "5 * 	5 * (pixelH * pixelGrid * 	0.50)";
					colorSelectBackground[] = {0,0,0,0};
					colorSelectBackground2[] = {0,0,0,0};
					onLBSelChanged = "				_ctrlListbox = _this select 0;				_cursel = _this select 1;				_active = _ctrlListbox lbvalue _cursel;				_active = (_active + 1) % 2;				_pictureChecked = gettext (configfile >> 'ctrlCheckbox' >> 'textureChecked');				_pictureUnchecked = gettext (configfile >> 'ctrlCheckbox' >> 'textureUnchecked');				_ctrlListbox lbsetvalue [_cursel,_active];				_ctrlListbox lbsetpicture [_cursel,[_pictureUnchecked,_pictureChecked] select _active];			";
					onSetFocus = "				_ctrlGroup = ctrlparentcontrolsgroup (_this select 0);				_selectedRespawnType = missionnamespace getvariable ['Respawn_value',0];				{					_ctrlListbox = _ctrlGroup controlsGroupCtrl (100 + _x);					_ctrlListbox ctrlshow (_x == _selectedRespawnType);				} foreach [0,1,2,3,4,5];			";
				};
				class Value1: Value0
				{
					idc = 101;
				};
				class Value2: Value0
				{
					idc = 102;
				};
				class Value3: Value0
				{
					idc = 103;
				};
				class Value4: Value0
				{
					idc = 104;
				};
				class Value5: Value0
				{
					idc = 105;
				};
			};
		};
		class GarbageCollectorMode: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class None
						{
							text = "$STR_3DEN_Attributes_GarbageCollectorMode_None_text";
							value = 0;
						};
						class All
						{
							text = "$STR_3DEN_Attributes_GarbageCollectorMode_All_text";
							value = 1;
						};
						class Respawned
						{
							text = "$STR_3DEN_Attributes_GarbageCollectorMode_Respawned_text";
							value = 2;
						};
						class NotRespawned
						{
							text = "$STR_3DEN_Attributes_GarbageCollectorMode_NotRespawned_text";
							value = 3;
						};
					};
				};
			};
		};
		class EnableDebugConsole: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class Disabled
						{
							text = "$STR_3DEN_Attributes_EnableDebugConsole_Disabled_text";
							value = 0;
						};
						class Host
						{
							text = "$STR_3DEN_Attributes_EnableDebugConsole_Host_text";
							value = 1;
						};
						class All
						{
							text = "$STR_3DEN_Attributes_EnableDebugConsole_All_text";
							value = 2;
						};
					};
				};
			};
		};
		class PreferencesSavegame: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class None
						{
							text = "$STR_3DEN_Attributes_PreferencesSavegame_None_text";
							value = -1;
						};
						class Min5
						{
							text = "$STR_3DEN_Attributes_PreferencesSavegame_Min5_text";
							value = 300;
						};
						class Min15
						{
							text = "$STR_3DEN_Attributes_PreferencesSavegame_Min15_text";
							value = 900;
						};
						class Min30
						{
							text = "$STR_3DEN_Attributes_PreferencesSavegame_Min30_text";
							value = 1800;
						};
						class Min60
						{
							text = "$STR_3DEN_Attributes_PreferencesSavegame_Min60_text";
							value = 3600;
						};
					};
				};
			};
		};
		class ObjectTexture: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class Random
						{
							text = "$STR_3den_attributes_objecttexture_random_text";
							data = "";
						};
					};
				};
			};
		};
		class SharedObjectives: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class Disabled
						{
							text = "$STR_disabled";
							tooltip = "$STR_3den_attributes_sharedobjectives_disabled_tooltip";
							value = 0;
						};
						class Enabled
						{
							text = "$STR_enabled";
							tooltip = "$STR_3den_attributes_sharedobjectives_enabled_tooltip";
							value = 1;
						};
						class EnabledWithPropagation
						{
							text = "$STR_3den_attributes_sharedobjectives_enabledwithpropagation_text";
							tooltip = "$STR_3den_attributes_sharedobjectives_enabledwithpropagation_tooltip";
							value = 2;
						};
					};
				};
			};
		};
		class Fog: Title
		{
			idc = 100;
			onLoad = "		_ctrlGroup = _this select 0;		[_ctrlGroup controlsgroupctrl 101,_ctrlGroup controlsgroupctrl 104] call bis_fnc_initSliderValue;		[_ctrlGroup controlsgroupctrl 102,_ctrlGroup controlsgroupctrl 105] call bis_fnc_initSliderValue;		[_ctrlGroup controlsgroupctrl 103,_ctrlGroup controlsgroupctrl 106,' m'] call bis_fnc_initSliderValue;	";
			h = "(3.25 * 	5 + 2) * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					idc = 110;
				};
				class TitleDecay: Title
				{
					text = "$STR_3den_attributes_fog_titledecay_text";
					tooltip = "$STR_3den_attributes_fog_titledecay_tooltip";
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
				class TitleBase: Title
				{
					text = "$STR_3den_attributes_fog_titlebase_text";
					tooltip = "$STR_3den_attributes_fog_titlebase_tooltip";
					y = "(2 * 	5 + 2) * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: ctrlXSliderH
				{
					idc = 101;
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					w = "(	82 - 	10) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					onSliderPosChanged = "				comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';				_ctrlGroup = ctrlParentControlsGroup (_this select 0);				_valueFog = sliderposition (_ctrlGroup controlsgroupctrl 101);				_valueDecay = sliderposition (_ctrlGroup controlsgroupctrl 102);				_valueBase = sliderposition (_ctrlGroup controlsgroupctrl 103);				[_ctrlGroup,[_valueFog,_valueDecay,_valueBase]] call bis_fnc_3DENIntel;			";
				};
				class ValueDecay: Value
				{
					idc = 102;
					sliderRange[] = {0,0.1};
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
				class ValueBase: Value
				{
					idc = 103;
					sliderRange[] = {-1000,1000};
					y = "(2 * 	5 + 2) * (pixelH * pixelGrid * 	0.50)";
				};
				class Edit: ctrlEdit
				{
					idc = 104;
					x = "(	48 + 	82 - 	10) * (pixelW * pixelGrid * 	0.50)";
					w = "10 * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					onKillFocus = "				comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';				_ctrlGroup = ctrlParentControlsGroup (_this select 0);				_valueFog = sliderposition (_ctrlGroup controlsgroupctrl 101);				_valueDecay = sliderposition (_ctrlGroup controlsgroupctrl 102);				_valueBase = sliderposition (_ctrlGroup controlsgroupctrl 103);				[_ctrlGroup,[_valueFog,_valueDecay,_valueBase]] call bis_fnc_3DENIntel;			";
				};
				class EditDecay: Edit
				{
					idc = 105;
					y = "(	5 + 1) * (pixelH * pixelGrid * 	0.50)";
				};
				class EditBase: Edit
				{
					idc = 106;
					y = "(2 * 	5 + 2) * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class Overcast: Slider
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					onSliderPosChanged = "				comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';				_ctrlGroup = ctrlParentControlsGroup (_this select 0);				_value = sliderposition (_ctrlGroup controlsgroupctrl 100);				[_ctrlGroup,_value] call bis_fnc_3DENIntel;			";
				};
				class Edit: Edit
				{
					onKillFocus = "				comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';				_ctrlGroup = ctrlParentControlsGroup (_this select 0);				_value = sliderposition (_ctrlGroup controlsgroupctrl 100);				[_ctrlGroup,_value] call bis_fnc_3DENIntel;			";
				};
			};
		};
		class Rain: Overcast{};
		class Waves: Overcast{};
		class Gusts: Overcast{};
		class Wind: Overcast{};
		class WindDir: EditZ
		{
			class Controls: Controls
			{
				class Title: Title{};
				class TitleZ: TitleZ{};
				class WindDir: ValueZ
				{
					onKillFocus = "[_this select 0,parsenumber ctrltext (_this select 0)] call bis_fnc_3DENIntel;";
				};
			};
		};
		class ReviveMode: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class Disabled
						{
							text = "$STR_A3_Disabled";
							tooltip = "$STR_A3_ReviveMode_Disabled_Hint";
							value = 0;
						};
						class EnabledAllPlayers
						{
							text = "$STR_A3_EnabledForAllPlayers";
							tooltip = "$STR_A3_ReviveMode_EnabledAllPlayers_Hint";
							value = 1;
						};
						class EnabledIndividualPlayers
						{
							text = "$STR_A3_ControlledByPlayerAttributes";
							tooltip = "$STR_A3_ReviveMode_EnabledIndividualPlayers_Hint";
							value = 2;
						};
					};
				};
			};
		};
		class ReviveRequiredTrait: Combo
		{
			h = "8 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					y = "3 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					y = "3 * (pixelH * pixelGrid * 	0.50)";
					class Items
					{
						class None
						{
							text = "$STR_A3_None";
							tooltip = "$STR_A3_RequiredTrait_None_Hint";
							value = 0;
						};
						class Medic
						{
							text = "$STR_A3_Medic";
							tooltip = "$STR_A3_RequiredTrait_Medic_Hint";
							value = 1;
						};
					};
				};
			};
		};
		class ReviveRequiredItems: Combo
		{
			idc = 547891;
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class None
						{
							text = "$STR_A3_None";
							tooltip = "$STR_A3_RequiredItems_None_Hint";
							value = 0;
						};
						class Medkit
						{
							text = "$STR_A3_Medikit";
							tooltip = "$STR_A3_RequiredItems_Medkit_Hint";
							value = 1;
						};
						class MedkitAndFak
						{
							text = "$STR_A3_FirstAidKitOrMedikit";
							tooltip = "$STR_A3_RequiredItems_MedkitAndFak_Hint";
							value = 2;
						};
					};
				};
			};
		};
		class ReviveDuration: SliderTime
		{
			h = "8 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					y = "3 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					y = "3 * (pixelH * pixelGrid * 	0.50)";
					sliderRange[] = {6,60};
					sliderPosition = 8;
					lineSize = 5;
				};
				class Frame: Frame
				{
					y = "3 * (pixelH * pixelGrid * 	0.50)";
				};
				class Separator: Separator
				{
					y = "3 * (pixelH * pixelGrid * 	0.50)";
				};
				class Hour: Hour
				{
					y = "3 * (pixelH * pixelGrid * 	0.50)";
				};
				class Minute: Minute
				{
					y = "3 * (pixelH * pixelGrid * 	0.50)";
				};
				class Second: Second
				{
					y = "3 * (pixelH * pixelGrid * 	0.50)";
				};
			};
		};
		class ReviveMedicSpeedMultiplier: SliderMultiplier
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					sliderRange[] = {1,3};
					sliderPosition = 2;
					lineSize = 0.25;
				};
				class Edit: Edit{};
			};
		};
		class ReviveForceRespawnDuration: SliderTime
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					sliderRange[] = {0,10};
					sliderPosition = 3;
					lineSize = 1;
				};
				class Frame: Frame{};
				class Separator: Separator{};
				class Hour: Hour{};
				class Minute: Minute{};
				class Second: Second{};
			};
		};
		class ReviveUnconsciousStateMode: Combo
		{
			h = "8 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					y = "3 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					y = "3 * (pixelH * pixelGrid * 	0.50)";
					class Items
					{
						class Basic
						{
							text = "$STR_A3_Basic";
							tooltip = "$STR_A3_IncapacitationMode_Basic_Hint";
							value = 0;
						};
						class Advanced
						{
							text = "$STR_A3_Advanced";
							tooltip = "$STR_A3_IncapacitationMode_Advanced_Hint";
							value = 1;
						};
					};
				};
			};
		};
		class ReviveUnconsciousStateDuration: SliderTime
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					sliderRange[] = {20,300};
					sliderPosition = 120;
					lineSize = 1;
				};
				class Frame: Frame{};
				class Separator: Separator{};
				class Hour: Hour{};
				class Minute: Minute{};
				class Second: Second{};
			};
		};
		class EnableRevive: Checkbox
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					onLoad = "				_this spawn {					disableserialization;					_ctrlCheckbox = _this select 0;					_ctrlGroup = ctrlParentControlsGroup _ctrlCheckbox;					_enable = !isNil{'Multiplayer' get3DENMissionAttribute 'ReviveMode'} && {'Multiplayer' get3DENMissionAttribute 'ReviveMode' == 2};					_fade = [0.75,0] select _enable;					_ctrlGroup ctrlenable _enable;					_ctrlGroup ctrlsetfade _fade; _ctrlGroup ctrlcommit 0;				};			";
				};
			};
		};
		class UnitInsignia: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class None
						{
							text = "$STR_3den_attributes_unitinisgnia_none_text";
							data = "";
							value = -1;
						};
					};
					class ItemsConfig
					{
						path[] = {"CfgUnitInsignia"};
						propertyText = "displayName";
						propertyPicture = "texture";
						sort = 2;
					};
				};
			};
		};
		class NameSound: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class None
						{
							text = "$STR_3den_attributes_namesound_none_text";
							data = "";
							value = -1;
							default = 1;
						};
						class Miller
						{
							text = "Miller";
							data = "Miller";
							value = 0;
							picture = "\a3\Data_F_Exp\FactionIcons\icon_CTRG_CA.paa";
						};
						class Reynolds
						{
							text = "Reynolds";
							data = "Reynolds";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Armstrong
						{
							text = "Armstrong";
							data = "Armstrong";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Nichols
						{
							text = "Nichols";
							data = "Nichols";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Tanny
						{
							text = "Tanny";
							data = "Tanny";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Frost
						{
							text = "Frost";
							data = "Frost";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Lacey
						{
							text = "Lacey";
							data = "Lacey";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Larkin
						{
							text = "Larkin";
							data = "Larkin";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Kerry
						{
							text = "Kerry";
							data = "Kerry";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Jackson
						{
							text = "Jackson";
							data = "Jackson";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class McKendrick
						{
							text = "McKendrick";
							data = "McKendrick";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Levine
						{
							text = "Levine";
							data = "Levine";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class James
						{
							text = "James";
							data = "James";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class McKay
						{
							text = "McKay";
							data = "McKay";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Hardy
						{
							text = "Hardy";
							data = "Hardy";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Northgate
						{
							text = "Northgate";
							data = "Northgate";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Adams
						{
							text = "Adams";
							data = "Adams";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Bennett
						{
							text = "Bennett";
							data = "Bennett";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Campbell
						{
							text = "Campbell";
							data = "Campbell";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Dixon
						{
							text = "Dixon";
							data = "Dixon";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Everett
						{
							text = "Everett";
							data = "Everett";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Franklin
						{
							text = "Franklin";
							data = "Franklin";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Givens
						{
							text = "Givens";
							data = "Givens";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Hawkins
						{
							text = "Hawkins";
							data = "Hawkins";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Lopez
						{
							text = "Lopez";
							data = "Lopez";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Martinez
						{
							text = "Martinez";
							data = "Martinez";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class OConnor
						{
							text = "OConnor";
							data = "OConnor";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Ryan
						{
							text = "Ryan";
							data = "Ryan";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Patterson
						{
							text = "Patterson";
							data = "Patterson";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Sykes
						{
							text = "Sykes";
							data = "Sykes";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Taylor
						{
							text = "Taylor";
							data = "Taylor";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Walker
						{
							text = "Walker";
							data = "Walker";
							value = 0;
							picture = "\a3\Data_f\cfgFactionClasses_BLU_ca.paa";
						};
						class Amin
						{
							text = "Amin";
							data = "Amin";
							value = 1;
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
						};
						class Masood
						{
							text = "Masood";
							data = "Masood";
							value = 1;
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
						};
						class Fahim
						{
							text = "Fahim";
							data = "Fahim";
							value = 1;
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
						};
						class Habibi
						{
							text = "Habibi";
							data = "Habibi";
							value = 1;
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
						};
						class Kushan
						{
							text = "Kushan";
							data = "Kushan";
							value = 1;
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
						};
						class Jawadi
						{
							text = "Jawadi";
							data = "Jawadi";
							value = 1;
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
						};
						class Nazari
						{
							text = "Nazari";
							data = "Nazari";
							value = 1;
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
						};
						class Siddiqi
						{
							text = "Siddiqi";
							data = "Siddiqi";
							value = 1;
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
						};
						class Takhtar
						{
							text = "Takhtar";
							data = "Takhtar";
							value = 1;
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
						};
						class Wardak
						{
							text = "Wardak";
							data = "Wardak";
							value = 1;
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
						};
						class Yousuf
						{
							text = "Yousuf";
							data = "Yousuf";
							value = 1;
							picture = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
						};
						class Anthis
						{
							text = "Anthis";
							data = "Anthis";
							value = 2;
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
						};
						class Costa
						{
							text = "Costa";
							data = "Costa";
							value = 2;
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
						};
						class Dimitirou
						{
							text = "Dimitirou";
							data = "Dimitirou";
							value = 2;
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
						};
						class Elias
						{
							text = "Elias";
							data = "Elias";
							value = 2;
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
						};
						class Gekas
						{
							text = "Gekas";
							data = "Gekas";
							value = 2;
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
						};
						class Kouris
						{
							text = "Kouris";
							data = "Kouris";
							value = 2;
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
						};
						class Leventis
						{
							text = "Leventis";
							data = "Leventis";
							value = 2;
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
						};
						class Markos
						{
							text = "Markos";
							data = "Markos";
							value = 2;
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
						};
						class Nikas
						{
							text = "Nikas";
							data = "Nikas";
							value = 2;
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
						};
						class Nicolo
						{
							text = "Nicolo";
							data = "Nicolo";
							value = 2;
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
						};
						class Panas
						{
							text = "Panas";
							data = "Panas";
							value = 2;
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
						};
						class Petros
						{
							text = "Petros";
							data = "Petros";
							value = 2;
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
						};
						class Rosi
						{
							text = "Rosi";
							data = "Rosi";
							value = 2;
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
						};
						class Samaras
						{
							text = "Samaras";
							data = "Samaras";
							value = 2;
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
						};
						class Stavrou
						{
							text = "Stavrou";
							data = "Stavrou";
							value = 2;
							picture = "\a3\Data_f\cfgFactionClasses_IND_ca.paa";
						};
						class Ghost
						{
							text = "Ghost";
							data = "Ghost";
							value = 3;
							picture = "\a3\3DEN\Data\Attributes\NameSound\special_ca.paa";
						};
						class Stranger
						{
							text = "Stranger";
							data = "Stranger";
							value = 3;
							picture = "\a3\3DEN\Data\Attributes\NameSound\special_ca.paa";
						};
						class Fox
						{
							text = "Fox";
							data = "Fox";
							value = 3;
							picture = "\a3\3DEN\Data\Attributes\NameSound\special_ca.paa";
						};
						class Snake
						{
							text = "Snake";
							data = "Snake";
							value = 3;
							picture = "\a3\3DEN\Data\Attributes\NameSound\special_ca.paa";
						};
						class Razer
						{
							text = "Razer";
							data = "Razer";
							value = 3;
							picture = "\a3\3DEN\Data\Attributes\NameSound\special_ca.paa";
						};
						class Jester
						{
							text = "Jester";
							data = "Jester";
							value = 3;
							picture = "\a3\3DEN\Data\Attributes\NameSound\special_ca.paa";
						};
						class Nomad
						{
							text = "Nomad";
							data = "Nomad";
							value = 3;
							picture = "\a3\3DEN\Data\Attributes\NameSound\special_ca.paa";
						};
						class Viper
						{
							text = "Viper";
							data = "Viper";
							value = 3;
							picture = "\a3\3DEN\Data\Attributes\NameSound\special_ca.paa";
						};
						class Korneedler
						{
							text = "Korneedler";
							data = "Korneedler";
							value = 3;
							picture = "\a3\3DEN\Data\Attributes\NameSound\special_ca.paa";
						};
					};
					onLoad = "lbsortbyvalue (_this select 0);";
				};
			};
		};
		class DynSimDist: SliderDistance
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					sliderRange[] = {50,5000};
					lineSize = 50;
					sliderStep = 50;
				};
				class Edit: Edit{};
			};
		};
		class DynSimDistMultIsMoving: SliderMultiplier
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					sliderRange[] = {1,5};
					sliderPosition = 2;
					lineSize = 0.1;
					sliderStep = 0.1;
				};
				class Edit: Edit{};
			};
		};
		class TaskTypes: Combo
		{
			attributeLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlCombo = _this controlsGroupCtrl 100;		if (_value == '') then {_value = 'default';};		for '_i' from 0 to (lbsize _ctrlCombo - 1) do {			if (_value == (_ctrlCombo lbdata _i)) exitwith {_ctrlCombo lbsetcursel _i;};		};	";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class ItemsConfig
					{
						path[] = {"CfgTaskTypes"};
						propertyText = "displayName";
						propertyPicture = "icon";
						sort = 2;
						tooltip = "%2";
					};
				};
			};
		};
		class TaskStates: Toolbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) lbsetcursel (['CREATED','ASSIGNED','SUCCEEDED','FAILED','CANCELED'] find toupper _value);";
			attributeSave = "['CREATED','ASSIGNED','SUCCEEDED','FAILED','CANCELED'] select lbcursel (_this controlsGroupCtrl 100);";
			h = "1.5 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls: Controls
			{
				class Title: Title
				{
					h = "1.5 * 	5 * (pixelH * pixelGrid * 	0.50)";
				};
				class Value: Value
				{
					idc = 100;
					style = "0x02 + 0x30 + 0x800";
					h = "1.5 * 	5 * (pixelH * pixelGrid * 	0.50)";
					rows = 1;
					columns = 5;
					strings[] = {"\a3\3DEN\Data\Attributes\TaskStates\created_ca.paa","\a3\3DEN\Data\Attributes\TaskStates\assigned_ca.paa","\a3\3DEN\Data\Attributes\TaskStates\succeeded_ca.paa","\a3\3DEN\Data\Attributes\TaskStates\failed_ca.paa","\a3\3DEN\Data\Attributes\TaskStates\canceled_ca.paa"};
					values[] = {0,1,2,3,4};
					tooltips[] = {"$STR_A3_CfgVehicles_ModuleTaskSetState_F_Arguments_State_Values_Created_0","$STR_A3_CfgVehicles_ModuleTaskSetState_F_Arguments_State_Values_Assigned_0","$STR_A3_CfgVehicles_ModuleTaskSetState_F_Arguments_State_Values_Succeeded_0","$STR_A3_CfgVehicles_ModuleTaskSetState_F_Arguments_State_Values_Failed_0","$STR_A3_CfgVehicles_ModuleTaskSetState_F_Arguments_State_Values_Canceled_0"};
					delete Items;
				};
			};
		};
		class ModuleObjects: Combo
		{
			attributeLoad = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlCombo = _this controlsGroupCtrl 100;		_id = if (_value isequaltype []) then {_value select 0} else {parsenumber _value};		for '_i' from 0 to (lbsize _ctrlCombo - 1) do {			if ((_ctrlCombo lbvalue _i) == _id) exitwith {_ctrlCombo lbsetcursel _i;};		};		if (lbcursel _ctrlCombo < 0) then {_ctrlCombo lbsetcursel 1;};	";
			attributeSave = "		comment 'DO NOT COPY THIS CODE TO YOUR ATTRIBUTE CONFIG UNLESS YOU ARE CHANGING SOMETHING IN THE CODE!';		_ctrlCombo = _this controlsGroupCtrl 100;		_cursel = lbcursel _ctrlCombo;		if (_cursel < 3) then {			str (_ctrlCombo lbvalue _cursel)		} else {			[_ctrlCombo lbvalue _cursel]		};	";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class Objects
						{
							text = "$STR_A3_CfgVehicles_Module_F_ArgumentsBaseUnits_Units_values_Objects_0";
							value = "0";
						};
						class ObjectsAndGroups
						{
							text = "$STR_A3_CfgVehicles_Module_F_ArgumentsBaseUnits_Units_values_ObjectsAndGroups_0";
							value = "1";
							default = "1";
						};
						class Trigger
						{
							text = "$STR_A3_CfgVehicles_Module_F_ArgumentsBaseUnits_Units_values_Trigger_0";
							value = "2";
						};
					};
					onLoad = "				_control = _this select 0;				_picture = gettext (configfile >> 'Cfg3DEN' >> 'Layer' >> 'Draw' >> 'icon');				_layerText = localize 'STR_3DEN_Layer_textSingular';				_layers = [];				{					_layers pushback [(_x get3denAttribute 'Name') select 0,_x];				} foreach (all3DENEntities select 6);				_layers sort true;				{					_name = _x select 0;					_lbAdd = _control lbadd format ['%1: %2',_layerText,_name];					_control lbsetvalue [_lbAdd,-(_x select 1) - 1];					_control lbsetpicture [_lbAdd,_picture];				} foreach _layers;			";
				};
			};
		};
		class SliderCameraSpeedMult: SliderMultiplier
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					sliderRange[] = {0.1,3};
					sliderPosition = 1;
					lineSize = 0.1;
					sliderStep = 0.1;
				};
				class Edit: Edit{};
			};
		};
		class SubCategory: Default
		{
			attributeLoad = "		_control = (_this controlsGroupCtrl 101) controlsGroupCtrl 100;		_control ctrlSetText gettext (_config >> 'title');		_control ctrlcommit 0;	";
			attributeSave = "";
			h = "1.5 * 	5 * (pixelH * pixelGrid * 	0.50)";
			w = "(	48 + 	82) * (pixelW * pixelGrid * 	0.50)";
			class Controls
			{
				class Group: ctrlControlsGroup
				{
					idc = 101;
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "0.3 * 	5 * (pixelH * pixelGrid * 	0.50)";
					h = "1 * 	5 * (pixelH * pixelGrid * 	0.50)";
					w = "(	48 + 	82) * (pixelW * pixelGrid * 	0.50)";
					class Controls
					{
						class Title: ctrlStatic
						{
							idc = 100;
							text = "";
							x = "(5 * pixelW) + (2 * pixelW)";
							w = "(	48 + 	82 - 4) * (pixelW * pixelGrid * 	0.50) - (5 * pixelW) - (2 * pixelW)";
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							colorText[] = {1,1,1,0.4};
							colorBackground[] = {1,1,1,0.05};
							colorShadow[] = {0,0,0,0};
						};
						class TitleDeco: ctrlStatic
						{
							w = "5 * pixelW";
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							colorBackground[] = {1,1,1,0.05};
						};
					};
				};
			};
		};
		class SubCategoryDesc1: SubCategory
		{
			attributeLoad = "		_control = (_this controlsGroupCtrl 101) controlsGroupCtrl 100;		_control ctrlSetText gettext (_config >> 'title');		_control ctrlcommit 0;		_control = (_this controlsGroupCtrl 101) controlsGroupCtrl 102;		_control ctrlSetStructuredText parseText gettext (_config >> 'description');		_controlPos = ctrlposition _control; 		_controlPos set [3,(_controlPos select 3) max (ctrltextheight _control)]; 		_control ctrlsetposition _controlPos;		_control ctrlcommit 0;	";
			h = "(1.5 * 	5 * (pixelH * pixelGrid * 	0.50)) + (1 * 	4.5 * (pixelH * pixelGrid * 	0.50))";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "5 * (pixelH * pixelGrid * 	0.50) + 1 * 	4.5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Title: Title{};
						class TitleDeco: TitleDeco{};
						class Description: ctrlStructuredText
						{
							idc = 102;
							text = "";
							x = "(5 * pixelW) + (2 * pixelW)";
							y = "5 * (pixelH * pixelGrid * 	0.50)";
							w = "(	48 + 	82 - 4) * (pixelW * pixelGrid * 	0.50) - (5 * pixelW) - (2 * pixelW)";
							h = "1 * 	4.5 * (pixelH * pixelGrid * 	0.50)";
							colorBackground[] = {1,1,1,0};
							shadow = 0;
							class Attributes
							{
								color = "#999999";
								size = 1;
								align = "left";
								colorLink = "";
								font = "RobotoCondensedLight";
							};
						};
					};
				};
			};
		};
		class SubCategoryDesc2: SubCategoryDesc1
		{
			h = "(1.5 * 	5 * (pixelH * pixelGrid * 	0.50)) + (2 * 	4.5 * (pixelH * pixelGrid * 	0.50))";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "5 * (pixelH * pixelGrid * 	0.50) + (2 * 	4.5 * (pixelH * pixelGrid * 	0.50))";
					class Controls: Controls
					{
						class Title: Title{};
						class TitleDeco: TitleDeco{};
						class Description: Description
						{
							h = "2 * 	4.5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class SubCategoryNoHeader1: Default
		{
			attributeLoad = "		_control = (_this controlsGroupCtrl 101) controlsGroupCtrl 102;		_control ctrlSetStructuredText parseText gettext (_config >> 'description');		_controlPos = ctrlposition _control; 		_controlPos set [3,(_controlPos select 3) max (ctrltextheight _control)]; 		_control ctrlsetposition _controlPos;		_control ctrlcommit 0;	";
			attributeSave = "";
			w = "(	48 + 	82) * (pixelW * pixelGrid * 	0.50)";
			h = "(0.5 * 	5 * (pixelH * pixelGrid * 	0.50)) + (1 * 	4.5 * (pixelH * pixelGrid * 	0.50))";
			class Controls
			{
				class Group: ctrlControlsGroup
				{
					idc = 101;
					x = "5 * (pixelW * pixelGrid * 	0.50)";
					y = "0.3 * 	5 * (pixelH * pixelGrid * 	0.50)";
					w = "(	48 + 	82) * (pixelW * pixelGrid * 	0.50)";
					h = "1 * 	4.5 * (pixelH * pixelGrid * 	0.50)";
					class Controls
					{
						class Title: ctrlStatic
						{
							idc = 100;
							text = "";
							w = "(	48 + 	82 - 4) * (pixelW * pixelGrid * 	0.50) - (5 * pixelW) - (2 * pixelW)";
							x = "(5 * pixelW) + (2 * pixelW)";
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							colorText[] = {1,1,1,0};
							colorBackground[] = {1,1,1,0};
							colorShadow[] = {0,0,0,0};
						};
						class DescriptionDeco: ctrlStatic
						{
							w = "5 * pixelW";
							h = "5 * (pixelH * pixelGrid * 	0.50)";
							colorBackground[] = {1,1,1,0.05};
						};
						class Description: ctrlStructuredText
						{
							idc = 102;
							text = "";
							x = "(5 * pixelW) + (2 * pixelW)";
							w = "(	48 + 	82 - 4) * (pixelW * pixelGrid * 	0.50) - (5 * pixelW) - (2 * pixelW)";
							h = "1 * 	4.5 * (pixelH * pixelGrid * 	0.50)";
							colorBackground[] = {1,1,1,0.05};
							shadow = 0;
							class Attributes
							{
								color = "#999999";
								size = 1;
								align = "left";
								colorLink = "";
								font = "RobotoCondensedLight";
							};
						};
					};
				};
			};
		};
		class SubCategoryNoHeader2: SubCategoryNoHeader1
		{
			h = "(0.5 * 	5 * (pixelH * pixelGrid * 	0.50)) + (2 * 	4.5 * (pixelH * pixelGrid * 	0.50))";
			class Controls: Controls
			{
				class Group: Group
				{
					h = "2 * 	4.5 * (pixelH * pixelGrid * 	0.50)";
					class Controls: Controls
					{
						class Title: Title{};
						class DescriptionDeco: ctrlStatic
						{
							w = "5 * pixelW";
							h = "2 * 	5 * (pixelH * pixelGrid * 	0.50)";
							colorBackground[] = {1,1,1,0.05};
						};
						class Description: Description
						{
							h = "2 * 	4.5 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
		class PylonControlsGroup: Default
		{
			idc = 2666;
			h = "14 * 	5 * (pixelH * pixelGrid * 	0.50)";
			class Controls
			{
				class PresetBomboBox: ctrlCombo
				{
					x = "(	5) * (pixelW * pixelGrid * 	0.50)";
					y = "(pixelH * pixelGrid * 	0.50)";
					w = "(	82 / 3) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
					idc = 2667;
				};
				class ToggleMirror: ctrlCheckbox
				{
					idc = 2668;
					x = "(	5 * 20) * (pixelW * pixelGrid * 	0.50)";
					y = "(pixelH * pixelGrid * 	0.50)";
					w = "5 * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
				};
				class TextMirror: ctrlStatic
				{
					text = "$STR_3DEN_Object_Attribute_PylonsMirror_displayName";
					tooltip = "$STR_3DEN_Object_Attribute_PylonsMirror_tooltip";
					shadow = 0;
					x = "(	5 * 21) * (pixelW * pixelGrid * 	0.50)";
					y = "(pixelH * pixelGrid * 	0.50)";
					w = "(	60 - (	5 + 1)) * (pixelW * pixelGrid * 	0.50)";
					h = "5 * (pixelH * pixelGrid * 	0.50)";
				};
			};
			class LoadOutTemplateBox: ctrlCombo
			{
				w = "(	82 / 3) * (pixelW * pixelGrid * 	0.50)";
				h = "5 * (pixelH * pixelGrid * 	0.50)";
				x = "(pixelW * pixelGrid * 	0.50)";
				y = "(pixelH * pixelGrid * 	0.50)";
			};
			class ownerTemplateButton: ctrlButton
			{
				style = "0x02 + 0x30 + 0x800";
			};
			iconDriver = "a3\ui_f\data\IGUI\Cfg\CommandBar\imageDriver_ca.paa";
			iconGunner = "a3\ui_f\data\IGUI\Cfg\CommandBar\imageGunner_ca.paa";
		};
		class AppId: Combo
		{
			attributeLoad = "		_ctrlCombo = _this controlsGroupCtrl 100;		for '_i' from 0 to lbsize _ctrlCombo - 1 do {			if (_value == _ctrlCombo lbvalue _i) exitwith {_ctrlCombo lbsetcursel _i;};		};	";
			attributeSave = "		_ctrlCombo = _this controlsGroupCtrl 100;		_ctrlCombo lbvalue lbcursel _ctrlCombo	";
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class None
						{
							text = "$STR_3DEN_ATTRIBUTES_GARBAGECOLLECTORMODE_NONE_TEXT";
							data = "";
							value = 0;
							default = 1;
						};
					};
					class ItemsConfig
					{
						path[] = {"CfgMods"};
						propertyText = "name";
						sort = 2;
					};
					onLoad = "				_control = _this select 0;				{					_appId = getnumber (_x >> 'appId');					if (_appId != 0 && getnumber (_x >> 'hidePicture') == 0) then {						_lbAdd = _control lbadd gettext (_x >> 'name');						_control lbsetpictureright [_lbAdd,gettext (_x >> 'logoSmall')];						_control lbsetvalue [_lbAdd,_appId];					};				} foreach configproperties [configfile >> 'CfgMods','isclass _x'];				lbsortbyvalue _control;			";
				};
			};
		};
		class AssetType: Checkbox
		{
			attributeLoad = "(_this controlsGroupCtrl 100) cbsetchecked (_value == 'restricted')";
			attributeSave = "['free','restricted'] select cbchecked (_this controlsGroupCtrl 100)";
		};
		class Radar: Combo
		{
			class Controls: Controls
			{
				class Title: Title{};
				class Value: Value
				{
					class Items
					{
						class Default
						{
							text = "$STR_3DEN_Attributes_Radar_Default_text";
							value = 0;
							tooltip = "$STR_3DEN_Attributes_Radar_Default_tooltip";
							default = 1;
						};
						class RadarOn
						{
							text = "$STR_3DEN_Attributes_Radar_RadarOn_text";
							value = 1;
							tooltip = "$STR_3DEN_Attributes_Radar_RadarOn_tooltip";
						};
						class RadarOff
						{
							text = "$STR_3DEN_Attributes_Radar_RadarOff_text";
							value = 2;
							tooltip = "$STR_3DEN_Attributes_Radar_RadarOff_tooltip";
						};
					};
				};
			};
		};
		class DoorStates: Title
		{
			attributeLoad = "['attributeLoad',get3DENSelected 'object' select 0,_this,_value] call bis_fnc_3DENAttributeDoorStates";
			attributeSave = "['attributeSave',get3DENSelected 'object' select 0,_this] call bis_fnc_3DENAttributeDoorStates";
			h = "3 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
			class Controls: Controls
			{
				class Title: Title
				{
					idc = 99;
					h = "3 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
					colorBackground[] = {0,0,0,0};
				};
				class Value: ctrlControlsGroupNoScrollbars
				{
					idc = 100;
					x = "48 * (pixelW * pixelGrid * 	0.50)";
					w = "80 * (pixelW * pixelGrid * 	0.50)";
					h = "3 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
					class Controls
					{
						class CheckboxBackground1: ctrlStatic
						{
							idc = "125+1";
							text = "";
							x = "(1-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow = 0;
							colorText[] = {1,1,1,0.5};
							colorBackground[] = {0,0,0,0.25};
							colorShadow[] = {0,0,0,0};
							type = 0;
							style = 2;
							onLoad = "(_this select 0) ctrlEnable false;";
						};
						class Checkbox1: ctrlActivePicture
						{
							idc = "100+1";
							x = "(1-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[] = {1,1,1,1};
							colorBackground[] = {0,0,0,0.25};
							colorActive[] = {1,1,1,1};
							colorDisabled[] = {1,1,1,1};
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							onMouseButtonDown = "['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call bis_fnc_3DENAttributeDoorStates";
						};
						class Text1: ctrlStatic
						{
							idc = "150+1";
							text = 1;
							x = "(1-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow = 0;
							colorText[] = {1,1,1,0.5};
							colorBackground[] = {0,0,0,0.25};
							colorShadow[] = {0,0,0,0};
							type = 0;
							style = 2;
							onLoad = "(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground2: ctrlStatic
						{
							idc = "125+2";
							text = "";
							x = "(2-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow = 0;
							colorText[] = {1,1,1,0.5};
							colorBackground[] = {0,0,0,0.25};
							colorShadow[] = {0,0,0,0};
							type = 0;
							style = 2;
							onLoad = "(_this select 0) ctrlEnable false;";
						};
						class Checkbox2: ctrlActivePicture
						{
							idc = "100+2";
							x = "(2-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[] = {1,1,1,1};
							colorBackground[] = {0,0,0,0.25};
							colorActive[] = {1,1,1,1};
							colorDisabled[] = {1,1,1,1};
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							onMouseButtonDown = "['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call bis_fnc_3DENAttributeDoorStates";
						};
						class Text2: ctrlStatic
						{
							idc = "150+2";
							text = 2;
							x = "(2-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow = 0;
							colorText[] = {1,1,1,0.5};
							colorBackground[] = {0,0,0,0.25};
							colorShadow[] = {0,0,0,0};
							type = 0;
							style = 2;
							onLoad = "(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground3: ctrlStatic
						{
							idc = "125+3";
							text = "";
							x = "(3-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow = 0;
							colorText[] = {1,1,1,0.5};
							colorBackground[] = {0,0,0,0.25};
							colorShadow[] = {0,0,0,0};
							type = 0;
							style = 2;
							onLoad = "(_this select 0) ctrlEnable false;";
						};
						class Checkbox3: ctrlActivePicture
						{
							idc = "100+3";
							x = "(3-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[] = {1,1,1,1};
							colorBackground[] = {0,0,0,0.25};
							colorActive[] = {1,1,1,1};
							colorDisabled[] = {1,1,1,1};
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							onMouseButtonDown = "['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call bis_fnc_3DENAttributeDoorStates";
						};
						class Text3: ctrlStatic
						{
							idc = "150+3";
							text = 3;
							x = "(3-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow = 0;
							colorText[] = {1,1,1,0.5};
							colorBackground[] = {0,0,0,0.25};
							colorShadow[] = {0,0,0,0};
							type = 0;
							style = 2;
							onLoad = "(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground4: ctrlStatic
						{
							idc = "125+4";
							text = "";
							x = "(4-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow = 0;
							colorText[] = {1,1,1,0.5};
							colorBackground[] = {0,0,0,0.25};
							colorShadow[] = {0,0,0,0};
							type = 0;
							style = 2;
							onLoad = "(_this select 0) ctrlEnable false;";
						};
						class Checkbox4: ctrlActivePicture
						{
							idc = "100+4";
							x = "(4-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[] = {1,1,1,1};
							colorBackground[] = {0,0,0,0.25};
							colorActive[] = {1,1,1,1};
							colorDisabled[] = {1,1,1,1};
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							onMouseButtonDown = "['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call bis_fnc_3DENAttributeDoorStates";
						};
						class Text4: ctrlStatic
						{
							idc = "150+4";
							text = 4;
							x = "(4-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow = 0;
							colorText[] = {1,1,1,0.5};
							colorBackground[] = {0,0,0,0.25};
							colorShadow[] = {0,0,0,0};
							type = 0;
							style = 2;
							onLoad = "(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground5: ctrlStatic
						{
							idc = "125+5";
							text = "";
							x = "(5-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow = 0;
							colorText[] = {1,1,1,0.5};
							colorBackground[] = {0,0,0,0.25};
							colorShadow[] = {0,0,0,0};
							type = 0;
							style = 2;
							onLoad = "(_this select 0) ctrlEnable false;";
						};
						class Checkbox5: ctrlActivePicture
						{
							idc = "100+5";
							x = "(5-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[] = {1,1,1,1};
							colorBackground[] = {0,0,0,0.25};
							colorActive[] = {1,1,1,1};
							colorDisabled[] = {1,1,1,1};
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							onMouseButtonDown = "['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call bis_fnc_3DENAttributeDoorStates";
						};
						class Text5: ctrlStatic
						{
							idc = "150+5";
							text = 5;
							x = "(5-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow = 0;
							colorText[] = {1,1,1,0.5};
							colorBackground[] = {0,0,0,0.25};
							colorShadow[] = {0,0,0,0};
							type = 0;
							style = 2;
							onLoad = "(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground6: ctrlStatic
						{
							idc = "125+6";
							text = "";
							x = "(6-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow = 0;
							colorText[] = {1,1,1,0.5};
							colorBackground[] = {0,0,0,0.25};
							colorShadow[] = {0,0,0,0};
							type = 0;
							style = 2;
							onLoad = "(_this select 0) ctrlEnable false;";
						};
						class Checkbox6: ctrlActivePicture
						{
							idc = "100+6";
							x = "(6-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[] = {1,1,1,1};
							colorBackground[] = {0,0,0,0.25};
							colorActive[] = {1,1,1,1};
							colorDisabled[] = {1,1,1,1};
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							onMouseButtonDown = "['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call bis_fnc_3DENAttributeDoorStates";
						};
						class Text6: ctrlStatic
						{
							idc = "150+6";
							text = 6;
							x = "(6-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow = 0;
							colorText[] = {1,1,1,0.5};
							colorBackground[] = {0,0,0,0.25};
							colorShadow[] = {0,0,0,0};
							type = 0;
							style = 2;
							onLoad = "(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground7: ctrlStatic
						{
							idc = "125+7";
							text = "";
							x = "(7-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow = 0;
							colorText[] = {1,1,1,0.5};
							colorBackground[] = {0,0,0,0.25};
							colorShadow[] = {0,0,0,0};
							type = 0;
							style = 2;
							onLoad = "(_this select 0) ctrlEnable false;";
						};
						class Checkbox7: ctrlActivePicture
						{
							idc = "100+7";
							x = "(7-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[] = {1,1,1,1};
							colorBackground[] = {0,0,0,0.25};
							colorActive[] = {1,1,1,1};
							colorDisabled[] = {1,1,1,1};
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							onMouseButtonDown = "['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call bis_fnc_3DENAttributeDoorStates";
						};
						class Text7: ctrlStatic
						{
							idc = "150+7";
							text = 7;
							x = "(7-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow = 0;
							colorText[] = {1,1,1,0.5};
							colorBackground[] = {0,0,0,0.25};
							colorShadow[] = {0,0,0,0};
							type = 0;
							style = 2;
							onLoad = "(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground8: ctrlStatic
						{
							idc = "125+8";
							text = "";
							x = "(8-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow = 0;
							colorText[] = {1,1,1,0.5};
							colorBackground[] = {0,0,0,0.25};
							colorShadow[] = {0,0,0,0};
							type = 0;
							style = 2;
							onLoad = "(_this select 0) ctrlEnable false;";
						};
						class Checkbox8: ctrlActivePicture
						{
							idc = "100+8";
							x = "(8-1) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = 0;
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							color[] = {1,1,1,1};
							colorBackground[] = {0,0,0,0.25};
							colorActive[] = {1,1,1,1};
							colorDisabled[] = {1,1,1,1};
							text = "\A3\Modules_F\Data\EditTerrainObject\textureDoor_closed_ca.paa";
							onMouseButtonDown = "['onMouseButtonUp',get3DENSelected 'object' select 0,_this] call bis_fnc_3DENAttributeDoorStates";
						};
						class Text8: ctrlStatic
						{
							idc = "150+8";
							text = 8;
							x = "(8-1) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
							w = "2 * 																	5						 * (pixelW * pixelGrid * 	0.50) - 							pixelW";
							h = "1 * 																	5						 * (pixelH * pixelGrid * 	0.50) - 							pixelH";
							shadow = 0;
							colorText[] = {1,1,1,0.5};
							colorBackground[] = {0,0,0,0.25};
							colorShadow[] = {0,0,0,0};
							type = 0;
							style = 2;
							onLoad = "(_this select 0) ctrlEnable false;";
						};
						class CheckboxBackground9: CheckboxBackground1
						{
							idc = "125+9";
							x = "(9-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox9: Checkbox1
						{
							idc = "100+9";
							x = "(9-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text9: Text1
						{
							idc = "150+9";
							text = 9;
							x = "(9-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground10: CheckboxBackground1
						{
							idc = "125+10";
							x = "(10-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox10: Checkbox1
						{
							idc = "100+10";
							x = "(10-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text10: Text1
						{
							idc = "150+10";
							text = 10;
							x = "(10-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground11: CheckboxBackground1
						{
							idc = "125+11";
							x = "(11-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox11: Checkbox1
						{
							idc = "100+11";
							x = "(11-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text11: Text1
						{
							idc = "150+11";
							text = 11;
							x = "(11-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground12: CheckboxBackground1
						{
							idc = "125+12";
							x = "(12-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox12: Checkbox1
						{
							idc = "100+12";
							x = "(12-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text12: Text1
						{
							idc = "150+12";
							text = 12;
							x = "(12-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground13: CheckboxBackground1
						{
							idc = "125+13";
							x = "(13-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox13: Checkbox1
						{
							idc = "100+13";
							x = "(13-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text13: Text1
						{
							idc = "150+13";
							text = 13;
							x = "(13-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground14: CheckboxBackground1
						{
							idc = "125+14";
							x = "(14-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox14: Checkbox1
						{
							idc = "100+14";
							x = "(14-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text14: Text1
						{
							idc = "150+14";
							text = 14;
							x = "(14-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground15: CheckboxBackground1
						{
							idc = "125+15";
							x = "(15-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox15: Checkbox1
						{
							idc = "100+15";
							x = "(15-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text15: Text1
						{
							idc = "150+15";
							text = 15;
							x = "(15-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground16: CheckboxBackground1
						{
							idc = "125+16";
							x = "(16-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Checkbox16: Checkbox1
						{
							idc = "100+16";
							x = "(16-9) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class Text16: Text1
						{
							idc = "150+16";
							text = 16;
							x = "(16-9) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground17: CheckboxBackground1
						{
							idc = "125+17";
							x = "(17-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox17: Checkbox1
						{
							idc = "100+17";
							x = "(17-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text17: Text1
						{
							idc = "150+17";
							text = 17;
							x = "(17-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground18: CheckboxBackground1
						{
							idc = "125+18";
							x = "(18-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox18: Checkbox1
						{
							idc = "100+18";
							x = "(18-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text18: Text1
						{
							idc = "150+18";
							text = 18;
							x = "(18-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground19: CheckboxBackground1
						{
							idc = "125+19";
							x = "(19-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox19: Checkbox1
						{
							idc = "100+19";
							x = "(19-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text19: Text1
						{
							idc = "150+19";
							text = 19;
							x = "(19-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground20: CheckboxBackground1
						{
							idc = "125+20";
							x = "(20-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox20: Checkbox1
						{
							idc = "100+20";
							x = "(20-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text20: Text1
						{
							idc = "150+20";
							text = 20;
							x = "(20-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground21: CheckboxBackground1
						{
							idc = "125+21";
							x = "(21-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox21: Checkbox1
						{
							idc = "100+21";
							x = "(21-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text21: Text1
						{
							idc = "150+21";
							text = 21;
							x = "(21-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground22: CheckboxBackground1
						{
							idc = "125+22";
							x = "(22-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox22: Checkbox1
						{
							idc = "100+22";
							x = "(22-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text22: Text1
						{
							idc = "150+22";
							text = 22;
							x = "(22-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground23: CheckboxBackground1
						{
							idc = "125+23";
							x = "(23-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox23: Checkbox1
						{
							idc = "100+23";
							x = "(23-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text23: Text1
						{
							idc = "150+23";
							text = 23;
							x = "(23-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
						class CheckboxBackground24: CheckboxBackground1
						{
							idc = "125+24";
							x = "(24-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Checkbox24: Checkbox1
						{
							idc = "100+24";
							x = "(24-17) * 							2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "2 * (							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50))";
						};
						class Text24: Text1
						{
							idc = "150+24";
							text = 24;
							x = "(24-17) * 								2 * 																	5						 * (pixelW * pixelGrid * 	0.50)";
							y = "3 * 							2 * 																	5						 * (pixelH * pixelGrid * 	0.50) + 2 * 								1 * 																	5						 * (pixelH * pixelGrid * 	0.50)";
						};
					};
				};
			};
		};
	};
};
class CfgVehicles
{
	class NonStrategic;
	class Sphere_3DEN: NonStrategic
	{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 250;
		_generalMacro = "Sphere_3DEN";
		model = "\a3\3DEN\Objects\sphere.p3d";
		hiddenSelections[] = {"ground","sphere"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.93,1.0,0.98,0.028)","#(argb,8,8,3)color(0.93,1.0,0.98,0.01)"};
	};
	class SphereNoGround_3DEN: Sphere_3DEN
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "SphereNoGround_3DEN";
		model = "\a3\3DEN\Objects\sphereNoGround.p3d";
	};
};
class CfgNonAIVehicles
{
	class EmptyDetector
	{
		displayName = "$STR_3DEN_CfgVehicles_EmptyDetector";
		class AttributeValues
		{
			size2[] = {0,0};
			size3[] = {0,0,-1};
		};
	};
	class EmptyDetectorAreaR50: EmptyDetector
	{
		displayName = "$STR_3DEN_CfgVehicles_EmptyDetectorAreaR50";
		class AttributeValues
		{
			size2[] = {50,50};
			size3[] = {50,50,-1};
		};
	};
	class EmptyDetectorAreaR250: EmptyDetector
	{
		displayName = "$STR_3DEN_CfgVehicles_EmptyDetectorAreaR250";
		class AttributeValues
		{
			size2[] = {250,250};
			size3[] = {250,250,-1};
		};
	};
	class EmptyDetectorArea10x10: EmptyDetector
	{
		displayName = "$STR_3DEN_CfgVehicles_EmptyDetectorArea10x10";
		class AttributeValues
		{
			size2[] = {5,5};
			size3[] = {5,5,5};
			IsRectangle = 1;
		};
	};
};
class CfgDefaultKeysPresets
{
	class Arma2
	{
		class Mappings
		{
			cameraMoveForward[] = {17};
			cameraMoveBackward[] = {31};
			cameraMoveLeft[] = {30};
			cameraMoveRight[] = {32};
			cameraMoveUp[] = {16};
			cameraMoveDown[] = {44};
			cameraMoveTurbo1[] = {42,54};
			cameraMoveTurbo2[] = {56,184};
			cameraZoomIn[] = {78};
			cameraZoomOut[] = {74};
			cameraLookUp[] = {72};
			cameraLookDown[] = {80};
			cameraLookLeft[] = {75};
			cameraLookRight[] = {77};
			cameraReset[] = {76};
			cameraTarget[] = {33};
			cameraVisionMode[] = {49};
			cameraFlashlight[] = {38};
			cameraInterface[] = {14};
			editorCameraMoveForward[] = {17};
			editorCameraMoveBackward[] = {31};
			editorCameraMoveLeft[] = {30};
			editorCameraMoveRight[] = {32};
			editorCameraMoveUp[] = {16};
			editorCameraMoveDown[] = {44};
			editorCameraMoveTurbo[] = {42,54};
			editorCameraLookUp[] = {72};
			editorCameraLookDown[] = {80};
			editorCameraLookLeft[] = {75};
			editorCameraLookRight[] = {77};
			editorCameraReset[] = {76};
		};
	};
};
class UserActionGroups
{
	class Camera
	{
		name = "$STR_a3_useractiongroups_camera_0";
		group[] = {"cameraMoveForward","cameraMoveBackward","cameraMoveLeft","cameraMoveRight","cameraMoveUp","cameraMoveDown","cameraMoveTurbo1","cameraMoveTurbo2","cameraZoomIn","cameraZoomOut","cameraLookUp","cameraLookDown","cameraLookLeft","cameraLookRight","cameraReset","cameraTarget","cameraVisionMode","cameraFlashlight","cameraInterface"};
	};
	class CameraEditor
	{
		name = "$STR_a3_useractiongroups_cameraeditor_0";
		group[] = {"editorCameraMoveForward","editorCameraMoveBackward","editorCameraMoveLeft","editorCameraMoveRight","editorCameraMoveUp","editorCameraMoveDown","editorCameraMoveTurbo","editorCameraLookUp","editorCameraLookDown","editorCameraLookLeft","editorCameraLookRight","editorCameraReset"};
	};
};
class UserActionsConflictGroups
{
	class ActionGroups
	{
		camera[] = {"cameraMoveForward","cameraMoveBackward","cameraMoveLeft","cameraMoveRight","cameraMoveUp","cameraMoveDown","cameraMoveTurbo1","cameraMoveTurbo2","cameraZoomIn","cameraZoomOut","cameraLookUp","cameraLookDown","cameraLookLeft","cameraLookRight","cameraReset","cameraTarget","cameraVisionMode","cameraFlashlight","cameraInterface"};
		cameraEditor[] = {"editorCameraMoveForward","editorCameraMoveBackward","editorCameraMoveLeft","editorCameraMoveRight","editorCameraMoveUp","editorCameraMoveDown","editorCameraMoveTurbo","editorCameraLookUp","editorCameraLookDown","editorCameraLookLeft","editorCameraLookRight","editorCameraReset"};
	};
	class CollisionGroups
	{
		camera[] = {"camera"};
		cameraEditor[] = {"cameraEditor"};
	};
	class Exceptions{};
};
3den = 1;
class CfgScriptPaths
{
	3DENDisplays = "A3\3den\UI\displays\";
	3DENDisplaysTemp = "A3\3den\UI\displaysTemp\";
	3DENAttributes = "A3\3den\UI\attributes\";
};
//};
