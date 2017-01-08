/*
**	Handling linked lists 
**	Automatically generated by Emperor
*/

#include "includes.h"

void InitLists()
{

}


void CleanupLists()
{
}

void FreeCommonList(struct List *list, UBYTE kind)
{
	struct Node 	*node,*nextnode;

	node = list->lh_Head;
	while((nextnode = node->ln_Succ))
	{
		switch(kind)
		{
			case LID_CHOOSER:
				IChooser->FreeChooserNode(node);
				break;
			case LID_CKTAB:
				IClickTab->FreeClickTabNode(node);
				break;
			case LID_LBROWSE:
				IListBrowser->FreeListBrowserNode(node);
				break;
			case LID_RBUTTON:
				IRadioButton->FreeRadioButtonNode(node);
				break;
			case LID_SPBAR:
				ISpeedBar->FreeSpeedButtonNode(node);
				break;
		}
		node = nextnode;
	}
	IExec->NewList(list);
}
