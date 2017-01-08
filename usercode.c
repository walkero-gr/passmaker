/*
**	User Code functions
*/

#include "includes.h"

void Window1_CloseWindow_Evt(void)
{
    CleanExit("JustExit");
}

void Menu_Quit1_MenuPick_Evt(void)
{
    CleanExit("JustExit");
}

void Menu_Information1_MenuPick_Evt(void)
{
	IIntuition->IDoMethod(obj[OID_Inforequest1],RM_OPENREQ,NULL,win[WID_Window1],NULL,TAG_DONE);
}

void showmsg(char *textca)
{   
    IIntuition->DoGadgetMethod(gad[GID_Texteditor1], win[WID_Window1], NULL, GM_TEXTEDITOR_InsertText, NULL, textca, GV_TEXTEDITOR_InsertText_Bottom);
}

void Button1_GadgetUp_Evt(void)
{
   int n;
   char *cmdline;

   unsigned char passwd[65];
   struct IOStdReq * entropy;
   int32 len, x, i;
   uint32 s = 0, t;

   IIntuition->GetAttrs(gad[GID_Integer1], INTEGER_Number, &len, TAG_DONE);
   IIntuition->GetAttrs(gad[GID_Integer2], INTEGER_Number, &count, TAG_DONE);
   IIntuition->DoGadgetMethod(gad[GID_Texteditor1], win[WID_Window1], NULL, GM_TEXTEDITOR_ClearText, NULL);

    for(n = 0; n < count; n++) {
         if (entropy = init_entropy()) {
     		 x = read_entropy(entropy, passwd, len);
     		 free_entropy(entropy);
     	 }    
     	 for (i = 0; i < len; i++) {
     		 t = passwd[i];
     		 t ^= s; s -= t >> 6;
     		 t = t % (26+26+10);
     		 if (t < 26)
     			 passwd[i] = 'a'+t;
     		 else if (t < 52)
     			 passwd[i] = 'A'+t-26;
     		 else
     			 passwd[i] = '0'+t-52;
     	 }
     	 passwd[len] = '\0';
         cmdline = IUtility->ASPrintf("%s\n", passwd);
         showmsg(cmdline);
     }        
}

struct IOStdReq * init_entropy () {
	struct IOStdReq * entropy;
	entropy = (struct IOStdReq *)IExec->CreateIORequest(IExec->CreateMsgPort(), sizeof(*entropy));
	if (entropy) {
		if (!IExec->OpenDevice("timer.device", UNIT_ENTROPY, (struct IORequest *)entropy, 0))
			return entropy;
		printf("Failed to open entropy unit of timer.device!\n");
		entropy->io_Device = NULL;
	} else printf("Failed to create IOStdReq!\n");
}

void free_entropy (struct IOStdReq * entropy) {
	struct MsgPort * port;
	if (!entropy) return;
	if (entropy->io_Device)
		IExec->CloseDevice((struct IORequest *)entropy);
	port = entropy->io_Message.mn_ReplyPort;
	IExec->DeleteIORequest((struct IORequest *)entropy);
	IExec->DeleteMsgPort(port);
}

int32 read_entropy (struct IOStdReq * entropy, char * dst, int32 len) {
	entropy->io_Command = TR_READENTROPY;
	entropy->io_Data = dst;
	entropy->io_Length = len;
	IExec->DoIO((struct IORequest *)entropy);
	return entropy->io_Actual;
}
