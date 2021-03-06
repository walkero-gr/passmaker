/*
**	Graphical objects creation 
**	Automatically generated by Emperor
*/

#include "includes.h"
#include "gui.h"

void InitStuff()
{

	Menu[0].nm_Label = "Project";
	Menu[1].nm_Label = "Information";
	Menu[2].nm_Label = "Quit";

	Hint_WindowObject1[0].hi_Text = NULL;

}

void InitWindows()
{
	obj[OID_WindowObject1] = WindowObject,
		WA_Left, 0,
		WA_Top, 17,
		WA_Width, 400,
		WA_Height, 300,
		WA_SizeGadget, TRUE,
		WA_DragBar, TRUE,
		WA_DepthGadget, TRUE,
		WA_CloseGadget, TRUE,
		WA_Activate, TRUE,
		WA_AutoAdjust, TRUE,
		WA_Title, "PassMaker",
		WA_ScreenTitle, PROGNAME " " VERSION"."REVISION " - "DATE" �"DEVELOPER,
		WA_PubScreen, Screen1,
		WINDOW_GadgetHelp, TRUE,
		WINDOW_Icon, IIcon->GetDiskObject("PROGDIR:PassMaker"),
		WINDOW_IconifyGadget, TRUE,
		WINDOW_IconTitle, "PassMaker",
		WINDOW_AppPort, AppPort,
		WINDOW_SharedPort, AppPort,
		WINDOW_HintInfo,Hint_WindowObject1,
		WINDOW_NewMenu, Menu,
		WINDOW_ParentGroup, VGroupObject,
			LAYOUT_SpaceOuter, TRUE,
			LAYOUT_DeferLayout, TRUE,
			LAYOUT_AddChild,  gad[GID_Layout1] = LayoutObject,
				GA_ID, GID_Layout1,
				GA_RelVerify, TRUE,
				GA_GadgetHelp, TRUE,
				GA_UserData, 12,
				LAYOUT_Label, "",
				LAYOUT_Orientation, 1,
				LAYOUT_HorizAlignment, LALIGN_LEFT,
				LAYOUT_VertAlignment, LALIGN_TOP,
				LAYOUT_LabelPlace, BVJ_TOP_CENTER,
				LAYOUT_BevelState, IDS_NORMAL,
				LAYOUT_BevelStyle, 4,
				LAYOUT_AddChild, gad[GID_Layout2] = LayoutObject,
					GA_ID, GID_Layout2,
					GA_RelVerify, TRUE,
					GA_GadgetHelp, TRUE,
					GA_UserData, 12,
					LAYOUT_Label, "",
					LAYOUT_Orientation, 0,
					LAYOUT_LeftSpacing, 10,
					LAYOUT_TopSpacing, 10,
					LAYOUT_BottomSpacing, 10,
					LAYOUT_RightSpacing, 10,
					LAYOUT_InnerSpacing, 2,
					LAYOUT_HorizAlignment, LALIGN_LEFT,
					LAYOUT_VertAlignment, LALIGN_TOP,
					LAYOUT_LabelPlace, BVJ_TOP_CENTER,
					LAYOUT_BevelState, IDS_NORMAL,
					LAYOUT_BevelStyle, 2,
					LAYOUT_FixedVert, FALSE,
					LAYOUT_AddChild, gad[GID_Integer1] = IntegerObject,
						GA_ID, GID_Integer1,
						GA_RelVerify, TRUE,
						GA_GadgetHelp, TRUE,
						GA_TabCycle, TRUE,
						GA_UserData, 11,
						INTEGER_Number, 0,
						INTEGER_MaxChars, 10,
						INTEGER_Minimum, 6,
						INTEGER_Maximum, 64,
						INTEGER_Arrows, TRUE,
						STRINGA_Justification, GACT_STRINGLEFT,
						End,
					CHILD_Label, gad[GID_Label1] = LabelObject,
						LABEL_Justification, 0,
						LABEL_Text, "Length:",
						End,
					LAYOUT_AddChild, gad[GID_Space1] = SpaceObject,
						GA_ID, GID_Space1,
						GA_RelVerify, TRUE,
						GA_GadgetHelp, TRUE,
						GA_UserData, 18,
						SPACE_BevelStyle, 4,
						End,
					LAYOUT_AddChild, gad[GID_Integer2] = IntegerObject,
						GA_ID, GID_Integer2,
						GA_RelVerify, TRUE,
						GA_GadgetHelp, TRUE,
						GA_TabCycle, TRUE,
						GA_UserData, 11,
						INTEGER_Number, 0,
						INTEGER_MaxChars, 10,
						INTEGER_Minimum, 1,
						INTEGER_Maximum, 100,
						INTEGER_Arrows, TRUE,
						STRINGA_Justification, GACT_STRINGLEFT,
						End,
					CHILD_Label, gad[GID_Label2] = LabelObject,
						LABEL_Justification, 0,
						LABEL_Text, "Count:",
						End,
					LAYOUT_AddChild, gad[GID_Space2] = SpaceObject,
						GA_ID, GID_Space2,
						GA_RelVerify, TRUE,
						GA_GadgetHelp, TRUE,
						GA_UserData, 18,
						SPACE_BevelStyle, 4,
						End,
					LAYOUT_AddChild, gad[GID_Button1] = ButtonObject,
						GA_ID, GID_Button1,
						GA_RelVerify, TRUE,
						GA_GadgetHelp, TRUE,
						GA_UserData, 0,
						GA_Text, "Process",
						BUTTON_AutoButton, 0,
						BUTTON_BevelStyle, 1,
						BUTTON_Justification, 1,
						End,
					End,
				LAYOUT_AddChild, gad[GID_Layout3] = LayoutObject,
					GA_ID, GID_Layout3,
					GA_RelVerify, TRUE,
					GA_GadgetHelp, TRUE,
					GA_UserData, 12,
					LAYOUT_Label, "",
					LAYOUT_Orientation, 0,
					LAYOUT_HorizAlignment, LALIGN_LEFT,
					LAYOUT_VertAlignment, LALIGN_TOP,
					LAYOUT_LabelPlace, BVJ_TOP_CENTER,
					LAYOUT_BevelState, IDS_NORMAL,
					LAYOUT_BevelStyle, 4,
    				LAYOUT_AddChild, gad[GID_Texteditor1] = TextEditorObject,
    					GA_ID, GID_Texteditor1,
    					GA_RelVerify, TRUE,
    					GA_GadgetHelp, TRUE,
    					GA_UserData, 22,
    					GA_TEXTEDITOR_Contents, "",
    					GA_TEXTEDITOR_CursorX, 0,
    					GA_TEXTEDITOR_CursorY, 0,
    					GA_TEXTEDITOR_Flow, 0,
    					End,
    				LAYOUT_AddChild, gad[GID_Scroller1] = ScrollerObject,
    					GA_ID, GID_Scroller1,
    					GA_RelVerify, TRUE,
    					GA_GadgetHelp, TRUE,
    					GA_UserData, 16,
    					SCROLLER_Orientation, SCROLLER_VERTICAL,
    					SCROLLER_Arrows, TRUE,
            		    ICA_TARGET, gad[GID_Texteditor1],
            		    ICA_MAP, scroller_to_text,
    					End,         
                    End,
				End,
			EndGroup,
		EndWindow;

	if (!obj[OID_WindowObject1])
		CleanExit("Cannot create obj[OID_WindowObject1]");

	obj[OID_Inforequest1] = RequesterObject,
		REQ_Type,		REQTYPE_INFO,
		REQ_TitleText,		"Program information",
		REQ_BodyText,	PROGNAME " v" VERSION"."REVISION "\ncreated by " DEVELOPER "\ncontact: walkero@yahoo.com\n\nThe idea of this utility is based on\n\"Gnome Password Generator\"!\nThis program is totally freeware and open sourced.\nYou may do whatever you want with it.\nPlease mail me to say your opinion.",
		REQ_GadgetText,	"Close",
		TAG_DONE);

	if (!obj[OID_Inforequest1])
		CleanExit("Cannot create obj[OID_Inforequest1]");

    IIntuition->SetAttrs (gad[GID_Texteditor1],ICA_TARGET,gad[GID_Scroller1],
	       ICA_MAP,text_to_scroller,TAG_END);

}
void Ep_CloseWindow_Window1(void)
{
	IIntuition->IDoMethod(obj[OID_WindowObject1], WM_CLOSE, NULL);
	win[WID_Window1] = NULL;
}

struct Window *Ep_OpenWindow_Window1(void)
{
	win[WID_Window1] = RA_OpenWindow(obj[OID_WindowObject1]);
	return(win[WID_Window1]);
}

void Ep_CloseScreen_Screen1(void)
{
	if(Screen1)
	{
		IIntuition->UnlockPubScreen(NULL, Screen1);
		Screen1 = NULL;
	}
}

struct Screen *Ep_OpenScreen_Screen1(void)
{
	Screen1 = IIntuition->LockPubScreen(NULL);
	return(Screen1);
}
