/*
    The code in this file uses open source libraries provided by thecoderscorner

    DO NOT EDIT THIS FILE, IT WILL BE GENERATED EVERY TIME YOU USE THE UI DESIGNER
    INSTEAD EITHER PUT CODE IN YOUR SKETCH OR CREATE ANOTHER SOURCE FILE.

    All the variables you may need access to are marked extern in this file for easy
    use elsewhere.
 */

#ifndef MENU_GENERATED_CODE_H
#define MENU_GENERATED_CODE_H

#include <PlatformDetermination.h>
#include <tcMenu.h>

#include "Adafruit_SSD1306.h"
#include "tcMenuAdaFruitGfxMono.h"
#include <RemoteConnector.h>
#include "StdioTransport.h"
#include <RuntimeMenuItem.h>
#include <ScrollChoiceMenuItem.h>
#include <IoAbstraction.h>
#include <EepromItemStorage.h>

// variables we declare that you may need to access
extern const PROGMEM ConnectorLocalInfo applicationInfo;
extern TcMenuRemoteServer remoteServer;
extern AdafruitSSD1306Spi* gfx;
extern AdafruitDrawable gfxDrawable;
extern GraphicsDeviceRenderer renderer;

// Any externals needed by IO expanders, EEPROMs etc


// Global Menu Item exports
extern const char* const enumStrFlashList[];
extern ListRuntimeMenuItem menuFlashList;
extern ListRuntimeMenuItem menuListCustom;
extern BooleanMenuItem menuSet2B;
extern ActionMenuItem menuSet2A;
extern Rgb32MenuItem menuSet1D;
extern BooleanMenuItem menuSet1C;
extern FloatMenuItem menuSet1B;
extern AnalogMenuItem menuSet1A;
extern EnumMenuItem menuEnable;
extern BackMenuItem menuBackDynamic;
extern SubMenuItem menuDynamic;
extern EnumMenuItem menuDialogActive;
extern ActionMenuItem menuShowDialog;
extern DateFormattedMenuItem menuDateGr;
extern TimeFormattedMenuItem menuTime12;
extern TimeFormattedMenuItem menuTime24;
extern BackMenuItem menuBackRuntimes;
extern SubMenuItem menuRuntimes;
extern FloatMenuItem menuA0Level;
extern EnumMenuItem menuState;
extern AnalogMenuItem menuRightVU;
extern AnalogMenuItem menuLeftVU;
extern BackMenuItem menuBackStatus;
extern SubMenuItem menuStatus;
extern BooleanMenuItem menuDirect;
extern BooleanMenuItem menuMute;
extern EnumMenuItem menuChannel;
extern AnalogMenuItem menuVolume;

// Provide a wrapper to get hold of the root menu item and export setupMenu
inline MenuItem& rootMenuItem() { return menuVolume; }
void setupMenu();

// Callback functions must always include CALLBACK_FUNCTION after the return type
#define CALLBACK_FUNCTION

int fnListCustomRtCall(RuntimeMenuItem* item, uint8_t row, RenderFnMode mode, char* buffer, int bufferSize);
void CALLBACK_FUNCTION onEnableChange(int id);
void CALLBACK_FUNCTION onShowDialog(int id);
void CALLBACK_FUNCTION onVolumeChanged(int id);

extern const EmbedControlFlashedForm* tcMenuAllEmbeddedForms[];

#endif // MENU_GENERATED_CODE_H
