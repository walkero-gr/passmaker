/*
**	Main Events Loop
**	Automatically generated by Emperor
*/

#include "includes.h"

void Events( void )
{
    ULONG	wait,
			app = (1L << AppPort->mp_SigBit);

	ULONG	done = FALSE;

	ULONG	result;

	UWORD	code;
	while(!done)
	{
		wait = IExec->Wait( SIGBREAKF_CTRL_C | app );
		if ( wait & SIGBREAKF_CTRL_C )
		{
			done = TRUE;
		}
		else
		{
			while((result = RA_HandleInput(obj[OID_WindowObject1], &code)) != WMHI_LASTMSG)
			{
				switch(result & WMHI_CLASSMASK)
				{
					case WMHI_GADGETUP:
						switch(result & WMHI_GADGETMASK)
						{
                            case GID_Button1: Button1_GadgetUp_Evt(); break;
							default: break;
						}
						break;
					case WMHI_MENUPICK:
						switch(result & WMHI_MENUMASK)
						{
							case Menu_Information1: Menu_Information1_MenuPick_Evt(); break;
							case Menu_Quit1: Menu_Quit1_MenuPick_Evt(); break;
							default: break;
						}
						break;
					case WMHI_MENUHELP:
						switch(result & WMHI_MENUMASK)
						{
							default: break;
						}
						break;
					case WMHI_CLOSEWINDOW:
						Window1_CloseWindow_Evt();
						break;
					case WMHI_ICONIFY:
                        RA_Iconify(obj[OID_WindowObject1]);
						win[WID_Window1] = NULL;
						break;
					case WMHI_UNICONIFY:
                        win[WID_Window1] = RA_OpenWindow(obj[OID_WindowObject1]);
						break;
					case WMHI_ACTIVE:
						break;
					case WMHI_INACTIVE:
						break;
					case WMHI_RAWKEY:
						break;
					case WMHI_VANILLAKEY:
						break;
					case WMHI_MOUSEBUTTONS:
						break;
					case WMHI_MOUSEMOVE:
						break;
					case WMHI_NEWSIZE:
						break;
					case WMHI_CHANGEWINDOW:
						break;
					case WMHI_DISPOSEDWINDOW:
						break;
					case WMHI_INTUITICK:
						break;
				}
			}
		}
	}
}
