/*
**	Main entry point
**	Automatically generated by Emperor
*/

#include "includes.h"


const char *version = "$VER:  "PROGNAME" "VERSION"."REVISION" "DATE" �,"DEVELOPER"\n\0";



int main(int argc, char **argv)
{
	if((AppPort = IExec->CreateMsgPort())&&(MsgPort = IExec->CreatePort("PassMaker_Port", 0)))
	{
		IDOS->SetProgramName("PassMaker");
		OpenLibs();
		InitStuff();
//		AppRegistering();
		Ep_OpenScreen_Screen1();
		InitLists();
		InitWindows();     
		Ep_OpenWindow_Window1();
		Events();
//		SavePrefsTree();
		CleanExit("JustExit");
	}
	return(0);
}

