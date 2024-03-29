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
#include <tcMenuKeyboard.h>
#include <RuntimeMenuItem.h>
#include <ScrollChoiceMenuItem.h>
#include <EditableLargeNumberMenuItem.h>
#include <IoAbstraction.h>
#include <EepromItemStorage.h>
#include "ControlAppOledKeyboardWifi_langSelect.h"

// variables we declare that you may need to access
extern const PROGMEM ConnectorLocalInfo applicationInfo;
extern WireType defaultWireTypePtr;
extern AdafruitSSD1306I2c* gfx;
extern AdafruitDrawable gfxDrawable;
extern GraphicsDeviceRenderer renderer;
extern MatrixKeyboardManager keyboard;
extern MenuEditingKeyListener tcMenuKeyListener;

// Any externals needed by IO expanders, EEPROMs etc


// Global Menu Item exports
extern const char* const enumStrCars[];
extern ListRuntimeMenuItem menuCars;
extern ScrollChoiceMenuItem menuNewChoiceItem;
extern BooleanMenuItem menuBool;
extern EnumMenuItem menuFoods;
extern BackMenuItem menuBackChoices;
extern SubMenuItem menuChoices;
extern IpAddressMenuItem menuIPAddr;
extern TextMenuItem menuPassword;
extern TextMenuItem menuSSID;
extern BackMenuItem menuBackConnectivity;
extern SubMenuItem menuConnectivity;
extern Rgb32MenuItem menuRGB;
extern TimeFormattedMenuItem menuTime;
extern TextMenuItem menuText;
extern BackMenuItem menuBackRuntimeItems;
extern SubMenuItem menuRuntimeItems;
extern BooleanMenuItem menuProtect;
extern BooleanMenuItem menuDirect;
extern ActionMenuItem menuMute;
extern EditableLargeNumberMenuItem menuLarge;
extern FloatMenuItem menuFloat;
extern AnalogMenuItem menuAnalog;

// Provide a wrapper to get hold of the root menu item and export setupMenu
inline MenuItem& rootMenuItem() { return menuAnalog; }
void setupMenu();

// Callback functions must always include CALLBACK_FUNCTION after the return type
#define CALLBACK_FUNCTION


#endif // MENU_GENERATED_CODE_H
