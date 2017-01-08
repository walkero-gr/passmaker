/*
**	Opening and closing libraries&resources 
**	Automatically generated by Emperor
*/

#include "includes.h"

void OpenLibs()
{
	if((IntuitionBase = IExec->OpenLibrary("intuition.library", 51L)))
	{
		IIntuition = (struct IntuitionIFace *) IExec->GetInterface(IntuitionBase,"main",1,NULL);
		if(!IIntuition)	CleanExit("Can't open intuition.library Interface");
 	}
	else CleanExit("Can't open intuition.library version 51");

	if((LocaleBase = IExec->OpenLibrary("locale.library", 51L)))
	{
		ILocale = (struct LocaleIFace *) IExec->GetInterface(LocaleBase,"main",1,NULL);
		if(!ILocale)	CleanExit("Can't open locale.library Interface");
 	}
	else CleanExit("Can't open locale.library version 51");

	if((GadToolsBase = IExec->OpenLibrary("gadtools.library", 51L)))
	{
		IGadTools = (struct GadToolsIFace *) IExec->GetInterface(GadToolsBase,"main",1,NULL);
		if(!IGadTools)	CleanExit("Can't open gadtools.library Interface");
 	}
	else CleanExit("Can't open gadtools.library version 51");

	if((ASLBase = IExec->OpenLibrary("asl.library", 51L)))
	{
		IASL = (struct ASLIFace *) IExec->GetInterface(ASLBase,"main",1,NULL);
		if(!IASL)	CleanExit("Can't open asl.library Interface");
 	}
	else CleanExit("Can't open asl.library version 51");

	if((DOSBase = IExec->OpenLibrary("dos.library", 51L)))
	{
		IDOS = (struct DOSIFace *) IExec->GetInterface(DOSBase,"main",1,NULL);
		if(!IDOS)	CleanExit("Can't open dos.library Interface");
 	}
	else CleanExit("Can't open dos.library version 51");

	if((IconBase = IExec->OpenLibrary("icon.library", 51L)))
	{
		IIcon = (struct IconIFace *) IExec->GetInterface(IconBase,"main",1,NULL);
		if(!IIcon)	CleanExit("Can't open icon.library Interface");
 	}
	else CleanExit("Can't open icon.library version 51");

	if((ResourceBase = IExec->OpenLibrary("resource.library", 44L)))
	{
		IResource = (struct ResourceIFace *) IExec->GetInterface(ResourceBase,"main",1,NULL);
		if(!IResource)	CleanExit("Can't open resource.library Interface");
 	}
	else CleanExit("Can't open resource.library version 44");

	if((WindowBase = IExec->OpenLibrary("window.class", 51L)))
	{
		IWindow = (struct WindowIFace *) IExec->GetInterface(WindowBase,"main",1,NULL);
		if(!IWindow)	CleanExit("Can't open window.class Interface");
 	}
	else CleanExit("Can't open window.class version 51");

	if((RequesterBase = IExec->OpenLibrary("requester.class", 51L)))
	{
		IRequester = (struct RequesterIFace *) IExec->GetInterface(RequesterBase,"main",1,NULL);
		if(!IRequester)	CleanExit("Can't open requester.class Interface");
 	}
	else CleanExit("Can't open requester.class version 51");

	if((ButtonBase = IExec->OpenLibrary("gadgets/button.gadget", 51L)))
	{
		IButton = (struct ButtonIFace *) IExec->GetInterface(ButtonBase,"main",1,NULL);
		if(!IButton)	CleanExit("Can't open gadgets/button.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/button.gadget version 51");

	if((CheckBoxBase = IExec->OpenLibrary("gadgets/checkbox.gadget", 51L)))
	{
		ICheckBox = (struct CheckBoxIFace *) IExec->GetInterface(CheckBoxBase,"main",1,NULL);
		if(!ICheckBox)	CleanExit("Can't open gadgets/checkbox.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/checkbox.gadget version 51");

	if((ChooserBase = IExec->OpenLibrary("gadgets/chooser.gadget", 51L)))
	{
		IChooser = (struct ChooserIFace *) IExec->GetInterface(ChooserBase,"main",1,NULL);
		if(!IChooser)	CleanExit("Can't open gadgets/chooser.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/chooser.gadget version 51");

	if((ClickTabBase = IExec->OpenLibrary("gadgets/clicktab.gadget", 51L)))
	{
		IClickTab = (struct ClickTabIFace *) IExec->GetInterface(ClickTabBase,"main",1,NULL);
		if(!IClickTab)	CleanExit("Can't open gadgets/clicktab.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/clicktab.gadget version 51");

	if((ColorWheelBase = IExec->OpenLibrary("gadgets/colorwheel.gadget", 51L)))
	{
		IColorWheel = (struct ColorWheelIFace *) IExec->GetInterface(ColorWheelBase,"main",1,NULL);
		if(!IColorWheel)	CleanExit("Can't open gadgets/colorwheel.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/colorwheel.gadget version 51");

	if((DateBrowserBase = IExec->OpenLibrary("gadgets/datebrowser.gadget", 51L)))
	{
		IDateBrowser = (struct DateBrowserIFace *) IExec->GetInterface(DateBrowserBase,"main",1,NULL);
		if(!IDateBrowser)	CleanExit("Can't open gadgets/datebrowser.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/datebrowser.gadget version 51");

	if((FuelGaugeBase = IExec->OpenLibrary("gadgets/fuelgauge.gadget", 51L)))
	{
		IFuelGauge = (struct FuelGaugeIFace *) IExec->GetInterface(FuelGaugeBase,"main",1,NULL);
		if(!IFuelGauge)	CleanExit("Can't open gadgets/fuelgauge.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/fuelgauge.gadget version 51");

	if((GetFileBase = IExec->OpenLibrary("gadgets/getfile.gadget", 51L)))
	{
		IGetFile = (struct GetFileIFace *) IExec->GetInterface(GetFileBase,"main",1,NULL);
		if(!IGetFile)	CleanExit("Can't open gadgets/getfile.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/getfile.gadget version 51");

	if((GetFontBase = IExec->OpenLibrary("gadgets/getfont.gadget", 51L)))
	{
		IGetFont = (struct GetFontIFace *) IExec->GetInterface(GetFontBase,"main",1,NULL);
		if(!IGetFont)	CleanExit("Can't open gadgets/getfont.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/getfont.gadget version 51");

	if((GetScreenModeBase = IExec->OpenLibrary("gadgets/getscreenmode.gadget", 51L)))
	{
		IGetScreenMode = (struct GetScreenModeIFace *) IExec->GetInterface(GetScreenModeBase,"main",1,NULL);
		if(!IGetScreenMode)	CleanExit("Can't open gadgets/getscreenmode.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/getscreenmode.gadget version 51");

	if((GradientSliderBase = IExec->OpenLibrary("gadgets/gradientslider.gadget", 51L)))
	{
		IGradientSlider = (struct GradientSliderIFace *) IExec->GetInterface(GradientSliderBase,"main",1,NULL);
		if(!IGradientSlider)	CleanExit("Can't open gadgets/gradientslider.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/gradientslider.gadget version 51");

	if((IntegerBase = IExec->OpenLibrary("gadgets/integer.gadget", 51L)))
	{
		IInteger = (struct IntegerIFace *) IExec->GetInterface(IntegerBase,"main",1,NULL);
		if(!IInteger)	CleanExit("Can't open gadgets/integer.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/integer.gadget version 51");

	if((LayoutBase = IExec->OpenLibrary("gadgets/layout.gadget", 51L)))
	{
		ILayout = (struct LayoutIFace *) IExec->GetInterface(LayoutBase,"main",1,NULL);
		if(!ILayout)	CleanExit("Can't open gadgets/layout.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/layout.gadget version 51");

	if((ListBrowserBase = IExec->OpenLibrary("gadgets/listbrowser.gadget", 51L)))
	{
		IListBrowser = (struct ListBrowserIFace *) IExec->GetInterface(ListBrowserBase,"main",1,NULL);
		if(!IListBrowser)	CleanExit("Can't open gadgets/listbrowser.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/listbrowser.gadget version 51");

	if((PaletteBase = IExec->OpenLibrary("gadgets/palette.gadget", 51L)))
	{
		IPalette = (struct PaletteIFace *) IExec->GetInterface(PaletteBase,"main",1,NULL);
		if(!IPalette)	CleanExit("Can't open gadgets/palette.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/palette.gadget version 51");

	if((RadioButtonBase = IExec->OpenLibrary("gadgets/radiobutton.gadget", 51L)))
	{
		IRadioButton = (struct RadioButtonIFace *) IExec->GetInterface(RadioButtonBase,"main",1,NULL);
		if(!IRadioButton)	CleanExit("Can't open gadgets/radiobutton.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/radiobutton.gadget version 51");

	if((ScrollerBase = IExec->OpenLibrary("gadgets/scroller.gadget", 51L)))
	{
		IScroller = (struct ScrollerIFace *) IExec->GetInterface(ScrollerBase,"main",1,NULL);
		if(!IScroller)	CleanExit("Can't open gadgets/scroller.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/scroller.gadget version 51");

	if((SliderBase = IExec->OpenLibrary("gadgets/slider.gadget", 51L)))
	{
		ISlider = (struct SliderIFace *) IExec->GetInterface(SliderBase,"main",1,NULL);
		if(!ISlider)	CleanExit("Can't open gadgets/slider.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/slider.gadget version 51");

	if((SpaceBase = IExec->OpenLibrary("gadgets/space.gadget", 51L)))
	{
		ISpace = (struct SpaceIFace *) IExec->GetInterface(SpaceBase,"main",1,NULL);
		if(!ISpace)	CleanExit("Can't open gadgets/space.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/space.gadget version 51");

	if((SpeedBarBase = IExec->OpenLibrary("gadgets/speedbar.gadget", 51L)))
	{
		ISpeedBar = (struct SpeedBarIFace *) IExec->GetInterface(SpeedBarBase,"main",1,NULL);
		if(!ISpeedBar)	CleanExit("Can't open gadgets/speedbar.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/speedbar.gadget version 51");

	if((StringBase = IExec->OpenLibrary("gadgets/string.gadget", 51L)))
	{
		IString = (struct StringIFace *) IExec->GetInterface(StringBase,"main",1,NULL);
		if(!IString)	CleanExit("Can't open gadgets/string.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/string.gadget version 51");

	if((TapeDeckBase = IExec->OpenLibrary("gadgets/tapedeck.gadget", 40L)))
	{
		ITapeDeck = (struct TapeDeckIFace *) IExec->GetInterface(TapeDeckBase,"main",1,NULL);
		if(!ITapeDeck)	CleanExit("Can't open gadgets/tapedeck.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/tapedeck.gadget version 40");

	if((TextEditorBase = IExec->OpenLibrary("gadgets/texteditor.gadget", 51L)))
	{
		ITextEditor = (struct TextEditorIFace *) IExec->GetInterface(TextEditorBase,"main",1,NULL);
		if(!ITextEditor)	CleanExit("Can't open gadgets/texteditor.gadget Interface");
 	}
	else CleanExit("Can't open gadgets/texteditor.gadget version 51");

	if((BevelBase = IExec->OpenLibrary("images/bevel.image", 51L)))
	{
		IBevel = (struct BevelIFace *) IExec->GetInterface(BevelBase,"main",1,NULL);
		if(!IBevel)	CleanExit("Can't open images/bevel.image Interface");
 	}
	else CleanExit("Can't open images/bevel.image version 51");

	if((BitMapBase = IExec->OpenLibrary("images/bitmap.image", 51L)))
	{
		IBitMap = (struct BitMapIFace *) IExec->GetInterface(BitMapBase,"main",1,NULL);
		if(!IBitMap)	CleanExit("Can't open images/bitmap.image Interface");
 	}
	else CleanExit("Can't open images/bitmap.image version 51");

	if((GlyphBase = IExec->OpenLibrary("images/glyph.image", 51L)))
	{
		IGlyph = (struct GlyphIFace *) IExec->GetInterface(GlyphBase,"main",1,NULL);
		if(!IGlyph)	CleanExit("Can't open images/glyph.image Interface");
 	}
	else CleanExit("Can't open images/glyph.image version 51");

	if((LabelBase = IExec->OpenLibrary("images/label.image", 51L)))
	{
		ILabel = (struct LabelIFace *) IExec->GetInterface(LabelBase,"main",1,NULL);
		if(!ILabel)	CleanExit("Can't open images/label.image Interface");
 	}
	else CleanExit("Can't open images/label.image version 51");

	Catalog = ILocale->OpenCatalog(NULL, (STRPTR )"PassMaker.catalog",
				OC_BuiltInLanguage, "english",
				OC_Version, 0,
				TAG_DONE);
}

void CleanExit(char *str)
{
	if(strcmp(str,"JustExit"))		IDOS->Printf("Error::%s\n",str);

	Ep_CloseWindow_Window1();
	if(obj[OID_WindowObject1])		IIntuition->DisposeObject(obj[OID_WindowObject1]);
	Ep_CloseScreen_Screen1();
	if (Catalog)			ILocale->CloseCatalog(Catalog);

	CleanupLists();

	if(ILabel)			IExec->DropInterface((struct Interface *)ILabel);
	if(IGlyph)			IExec->DropInterface((struct Interface *)IGlyph);
	if(IBitMap)			IExec->DropInterface((struct Interface *)IBitMap);
	if(IBevel)			IExec->DropInterface((struct Interface *)IBevel);
	if(ITextEditor)			IExec->DropInterface((struct Interface *)ITextEditor);
	if(ITapeDeck)			IExec->DropInterface((struct Interface *)ITapeDeck);
	if(IString)			IExec->DropInterface((struct Interface *)IString);
	if(ISpeedBar)			IExec->DropInterface((struct Interface *)ISpeedBar);
	if(ISpace)			IExec->DropInterface((struct Interface *)ISpace);
	if(ISlider)			IExec->DropInterface((struct Interface *)ISlider);
	if(IScroller)			IExec->DropInterface((struct Interface *)IScroller);
	if(IRadioButton)			IExec->DropInterface((struct Interface *)IRadioButton);
	if(IPalette)			IExec->DropInterface((struct Interface *)IPalette);
	if(IListBrowser)			IExec->DropInterface((struct Interface *)IListBrowser);
	if(ILayout)			IExec->DropInterface((struct Interface *)ILayout);
	if(IInteger)			IExec->DropInterface((struct Interface *)IInteger);
	if(IGradientSlider)			IExec->DropInterface((struct Interface *)IGradientSlider);
	if(IGetScreenMode)			IExec->DropInterface((struct Interface *)IGetScreenMode);
	if(IGetFont)			IExec->DropInterface((struct Interface *)IGetFont);
	if(IGetFile)			IExec->DropInterface((struct Interface *)IGetFile);
	if(IFuelGauge)			IExec->DropInterface((struct Interface *)IFuelGauge);
	if(IDateBrowser)			IExec->DropInterface((struct Interface *)IDateBrowser);
	if(IColorWheel)			IExec->DropInterface((struct Interface *)IColorWheel);
	if(IClickTab)			IExec->DropInterface((struct Interface *)IClickTab);
	if(IChooser)			IExec->DropInterface((struct Interface *)IChooser);
	if(ICheckBox)			IExec->DropInterface((struct Interface *)ICheckBox);
	if(IButton)			IExec->DropInterface((struct Interface *)IButton);
	if(IRequester)			IExec->DropInterface((struct Interface *)IRequester);
	if(IWindow)			IExec->DropInterface((struct Interface *)IWindow);
	if(IResource)			IExec->DropInterface((struct Interface *)IResource);
	if(IIcon)			IExec->DropInterface((struct Interface *)IIcon);
	if(IDOS)			IExec->DropInterface((struct Interface *)IDOS);
	if(IASL)			IExec->DropInterface((struct Interface *)IASL);
	if(IGadTools)			IExec->DropInterface((struct Interface *)IGadTools);
	if(ILocale)			IExec->DropInterface((struct Interface *)ILocale);
	if(IIntuition)			IExec->DropInterface((struct Interface *)IIntuition);

	if(LabelBase)			IExec->CloseLibrary(LabelBase);
	if(GlyphBase)			IExec->CloseLibrary(GlyphBase);
	if(BitMapBase)			IExec->CloseLibrary(BitMapBase);
	if(BevelBase)			IExec->CloseLibrary(BevelBase);
	if(TextEditorBase)			IExec->CloseLibrary(TextEditorBase);
	if(TapeDeckBase)			IExec->CloseLibrary(TapeDeckBase);
	if(StringBase)			IExec->CloseLibrary(StringBase);
	if(SpeedBarBase)			IExec->CloseLibrary(SpeedBarBase);
	if(SpaceBase)			IExec->CloseLibrary(SpaceBase);
	if(SliderBase)			IExec->CloseLibrary(SliderBase);
	if(ScrollerBase)			IExec->CloseLibrary(ScrollerBase);
	if(RadioButtonBase)			IExec->CloseLibrary(RadioButtonBase);
	if(PaletteBase)			IExec->CloseLibrary(PaletteBase);
	if(ListBrowserBase)			IExec->CloseLibrary(ListBrowserBase);
	if(LayoutBase)			IExec->CloseLibrary(LayoutBase);
	if(IntegerBase)			IExec->CloseLibrary(IntegerBase);
	if(GradientSliderBase)			IExec->CloseLibrary(GradientSliderBase);
	if(GetScreenModeBase)			IExec->CloseLibrary(GetScreenModeBase);
	if(GetFontBase)			IExec->CloseLibrary(GetFontBase);
	if(GetFileBase)			IExec->CloseLibrary(GetFileBase);
	if(FuelGaugeBase)			IExec->CloseLibrary(FuelGaugeBase);
	if(DateBrowserBase)			IExec->CloseLibrary(DateBrowserBase);
	if(ColorWheelBase)			IExec->CloseLibrary(ColorWheelBase);
	if(ClickTabBase)			IExec->CloseLibrary(ClickTabBase);
	if(ChooserBase)			IExec->CloseLibrary(ChooserBase);
	if(CheckBoxBase)			IExec->CloseLibrary(CheckBoxBase);
	if(ButtonBase)			IExec->CloseLibrary(ButtonBase);
	if(RequesterBase)			IExec->CloseLibrary(RequesterBase);
	if(WindowBase)			IExec->CloseLibrary(WindowBase);
	if(ResourceBase)			IExec->CloseLibrary(ResourceBase);
	if(IconBase)			IExec->CloseLibrary(IconBase);
	if(DOSBase)			IExec->CloseLibrary(DOSBase);
	if(ASLBase)			IExec->CloseLibrary(ASLBase);
	if(GadToolsBase)			IExec->CloseLibrary(GadToolsBase);
	if(LocaleBase)			IExec->CloseLibrary(LocaleBase);
	if(IntuitionBase)			IExec->CloseLibrary(IntuitionBase);

	if(AppPort)			IExec->DeleteMsgPort(AppPort);
	if(MsgPort)			IExec->DeletePort(MsgPort);
	exit(0);
}

