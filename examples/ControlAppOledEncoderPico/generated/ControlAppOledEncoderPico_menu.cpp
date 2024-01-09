/*
    The code in this file uses open source libraries provided by thecoderscorner

    DO NOT EDIT THIS FILE, IT WILL BE GENERATED EVERY TIME YOU USE THE UI DESIGNER
    INSTEAD EITHER PUT CODE IN YOUR SKETCH OR CREATE ANOTHER SOURCE FILE.

    All the variables you may need access to are marked extern in this file for easy
    use elsewhere.
 */

#include <tcMenu.h>
#include "ControlAppOledEncoderPico_menu.h"

// Global variable declarations
const  ConnectorLocalInfo applicationInfo = { "ControlAppOledEncoderPico", "3acc6301-dadd-4730-b142-9541180d2aa8" };
TcMenuRemoteServer remoteServer(applicationInfo);

AdafruitSSD1306Spi* gfx;
AdafruitDrawable gfxDrawable;
GraphicsDeviceRenderer renderer(30, applicationInfo.name, &gfxDrawable);
NoInitialisationNeeded stdioInitializer;
StdioTransport stdioTransport(255);
TagValueRemoteServerConnection stdioConnection(stdioTransport, stdioInitializer);

// Global Menu Item declarations
const char enumStrFlashList_0[] = "Ford Focus";
const char enumStrFlashList_1[] = "Ford Escort";
const char enumStrFlashList_2[] = "Ford Smax";
const char enumStrFlashList_3[] = "Ford Fiesta";
const char enumStrFlashList_4[] = "Ford Focus RS";
const char enumStrFlashList_5[] = "Ford Escort RS";
const char enumStrFlashList_6[] = "Escort Cosworth";
const char* const enumStrFlashList[]  = { enumStrFlashList_0, enumStrFlashList_1, enumStrFlashList_2, enumStrFlashList_3, enumStrFlashList_4, enumStrFlashList_5, enumStrFlashList_6 };
const AnyMenuInfo minfoFlashList = { "Flash List", 25, 0xffff, 0, NO_CALLBACK };
ListRuntimeMenuItem menuFlashList(&minfoFlashList, 7, enumStrFlashList, ListRuntimeMenuItem::FLASH_ARRAY, nullptr, INFO_LOCATION_PGM);
const AnyMenuInfo minfoListCustom = { "List Custom", 24, 0xffff, 0, NO_CALLBACK };
ListRuntimeMenuItem menuListCustom(&minfoListCustom, 10, fnListCustomRtCall, &menuFlashList, INFO_LOCATION_PGM);
const BooleanMenuInfo minfoSet2B = { "Set 2B", 23, 0xffff, 1, NO_CALLBACK, NAMING_TRUE_FALSE };
BooleanMenuItem menuSet2B(&minfoSet2B, false, nullptr, INFO_LOCATION_PGM);
const AnyMenuInfo minfoSet2A = { "Set 2A", 22, 0xffff, 0, NO_CALLBACK };
ActionMenuItem menuSet2A(&minfoSet2A, &menuSet2B, INFO_LOCATION_PGM);
const AnyMenuInfo minfoSet1D = { "Set 1D", 21, 0xffff, 0, NO_CALLBACK };
Rgb32MenuItem menuSet1D(&minfoSet1D, RgbColor32(0, 0, 0), false, &menuSet2A, INFO_LOCATION_PGM);
const BooleanMenuInfo minfoSet1C = { "Set 1C", 20, 0xffff, 1, NO_CALLBACK, NAMING_CHECKBOX };
BooleanMenuItem menuSet1C(&minfoSet1C, false, &menuSet1D, INFO_LOCATION_PGM);
const FloatMenuInfo minfoSet1B = { "Set 1B", 19, 0xffff, 3, NO_CALLBACK };
FloatMenuItem menuSet1B(&minfoSet1B, 0.0, &menuSet1C, INFO_LOCATION_PGM);
const AnalogMenuInfo minfoSet1A = { "Set 1A", 18, 0xffff, 255, NO_CALLBACK, 0, 1, "Unit" };
AnalogMenuItem menuSet1A(&minfoSet1A, 0, &menuSet1B, INFO_LOCATION_PGM);
const char enumStrEnable_0[] = "Set 1";
const char enumStrEnable_1[] = "Set 2";
const char* const enumStrEnable[]  = { enumStrEnable_0, enumStrEnable_1 };
const EnumMenuInfo minfoEnable = { "Enable", 17, 0xffff, 1, onEnableChange, enumStrEnable };
EnumMenuItem menuEnable(&minfoEnable, 0, &menuSet1A, INFO_LOCATION_PGM);
const SubMenuInfo minfoDynamic = { "Dynamic", 16, 0xffff, 0, NO_CALLBACK };
BackMenuItem menuBackDynamic(&minfoDynamic, &menuEnable, INFO_LOCATION_PGM);
SubMenuItem menuDynamic(&minfoDynamic, &menuBackDynamic, &menuListCustom, INFO_LOCATION_PGM);
const char enumStrDialogActive_0[] = "Item 0";
const char enumStrDialogActive_1[] = "Item 1";
const char* const enumStrDialogActive[]  = { enumStrDialogActive_0, enumStrDialogActive_1 };
const EnumMenuInfo minfoDialogActive = { "Dialog Active", 15, 0xffff, 1, NO_CALLBACK, enumStrDialogActive };
EnumMenuItem menuDialogActive(&minfoDialogActive, 0, nullptr, INFO_LOCATION_PGM);
const AnyMenuInfo minfoShowDialog = { "Show Dialog", 14, 0xffff, 0, onShowDialog };
ActionMenuItem menuShowDialog(&minfoShowDialog, &menuDialogActive, INFO_LOCATION_PGM);
const AnyMenuInfo minfoDateGr = { "Date Gr", 13, 0xffff, 0, NO_CALLBACK };
DateFormattedMenuItem menuDateGr(&minfoDateGr, DateStorage(1, 1, 2020), &menuShowDialog, INFO_LOCATION_PGM);
const AnyMenuInfo minfoTime12 = { "Time 12", 12, 0xffff, 0, NO_CALLBACK };
TimeFormattedMenuItem menuTime12(&minfoTime12, TimeStorage(0, 0, 0, 0), (MultiEditWireType)3, &menuDateGr, INFO_LOCATION_PGM);
const AnyMenuInfo minfoTime24 = { "Time 24", 11, 0xffff, 0, NO_CALLBACK };
TimeFormattedMenuItem menuTime24(&minfoTime24, TimeStorage(0, 0, 0, 0), (MultiEditWireType)2, &menuTime12, INFO_LOCATION_PGM);
const SubMenuInfo minfoRuntimes = { "Runtimes", 10, 0xffff, 0, NO_CALLBACK };
BackMenuItem menuBackRuntimes(&minfoRuntimes, &menuTime24, INFO_LOCATION_PGM);
SubMenuItem menuRuntimes(&minfoRuntimes, &menuBackRuntimes, &menuDynamic, INFO_LOCATION_PGM);
const FloatMenuInfo minfoA0Level = { "A0 Level", 9, 0xffff, 3, NO_CALLBACK };
FloatMenuItem menuA0Level(&minfoA0Level, 0.0, nullptr, INFO_LOCATION_PGM);
const char enumStrState_0[] = "Standby";
const char enumStrState_1[] = "Warm Up";
const char enumStrState_2[] = "Active";
const char enumStrState_3[] = "Protect";
const char enumStrState_4[] = "Overheat";
const char* const enumStrState[]  = { enumStrState_0, enumStrState_1, enumStrState_2, enumStrState_3, enumStrState_4 };
const EnumMenuInfo minfoState = { "State", 8, 0xffff, 4, NO_CALLBACK, enumStrState };
EnumMenuItem menuState(&minfoState, 0, &menuA0Level, INFO_LOCATION_PGM);
const AnalogMenuInfo minfoRightVU = { "RightVU", 7, 0xffff, 250, NO_CALLBACK, -200, 10, "dB" };
AnalogMenuItem menuRightVU(&minfoRightVU, 0, &menuState, INFO_LOCATION_PGM);
const AnalogMenuInfo minfoLeftVU = { "Left VU", 6, 0xffff, 250, NO_CALLBACK, -200, 10, "dB" };
AnalogMenuItem menuLeftVU(&minfoLeftVU, 0, &menuRightVU, INFO_LOCATION_PGM);
const SubMenuInfo minfoStatus = { "Status", 5, 0xffff, 0, NO_CALLBACK };
BackMenuItem menuBackStatus(&minfoStatus, &menuLeftVU, INFO_LOCATION_PGM);
SubMenuItem menuStatus(&minfoStatus, &menuBackStatus, &menuRuntimes, INFO_LOCATION_PGM);
const BooleanMenuInfo minfoDirect = { "Direct", 4, 0xffff, 1, NO_CALLBACK, NAMING_ON_OFF };
BooleanMenuItem menuDirect(&minfoDirect, false, &menuStatus, INFO_LOCATION_PGM);
const BooleanMenuInfo minfoMute = { "Mute", 3, 0xffff, 1, NO_CALLBACK, NAMING_ON_OFF };
BooleanMenuItem menuMute(&minfoMute, false, &menuDirect, INFO_LOCATION_PGM);
const char enumStrChannel_0[] = "Phono";
const char enumStrChannel_1[] = "CD";
const char enumStrChannel_2[] = "Aux";
const char* const enumStrChannel[]  = { enumStrChannel_0, enumStrChannel_1, enumStrChannel_2 };
const EnumMenuInfo minfoChannel = { "Channel", 2, 0xffff, 2, NO_CALLBACK, enumStrChannel };
EnumMenuItem menuChannel(&minfoChannel, 0, &menuMute, INFO_LOCATION_PGM);
const AnalogMenuInfo minfoVolume = { "Volume", 1, 0xffff, 255, onVolumeChanged, -180, 2, "dB" };
AnalogMenuItem menuVolume(&minfoVolume, 0, &menuChannel, INFO_LOCATION_PGM);

void setupMenu() {
    // First we set up eeprom and authentication (if needed).
    CombinedMessageProcessor::setFormTemplatesInFlash(tcMenuAllEmbeddedForms);
    setSizeBasedEEPROMStorageEnabled(true);
    // Now add any readonly, non-remote and visible flags.
    menuA0Level.setReadOnly(true);
    menuRightVU.setReadOnly(true);
    menuState.setReadOnly(true);
    menuLeftVU.setReadOnly(true);

    // Code generated by plugins and new operators.
    gfx = new AdafruitSSD1306Spi(SPIWithSettings(spi_default, 15, 10000000), 14, 13, 64, 128, ENCMODE_UTF8, SSD_1306);
    gfx->setRotation(0);
    gfx->begin();
    renderer.setUpdatesPerSecond(10);
    gfxDrawable.setGraphics(gfx);
    gfxDrawable.setFontHandler(gfx->getFontHandler());
    switches.init(internalDigitalIo(), SWITCHES_POLL_KEYS_ONLY, true);
    menuMgr.initForEncoder(&renderer, &menuVolume, 16, 17, 21);
    remoteServer.addConnection(&stdioConnection);
}

// Embedded form data

const uint8_t formData_SerialMobile_d8[] {
0x1f,0x8b,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xcd,0x95,0x5d,0x6b,0xdb,0x30,
0x14,0x86,0xef,0x07,0xfb,0x0f,0x42,0xb0,0xbb,0xb8,0x91,0x6c,0xb7,0x4d,0xc1,0x5e,
0xc9,0x12,0x75,0x0d,0xf8,0x63,0x24,0x72,0x3b,0x76,0x63,0x64,0x4b,0x2d,0x06,0x59,
0x2a,0xfe,0xe8,0xd6,0x7f,0x5f,0xd9,0x0d,0xad,0xc2,0x60,0x04,0xe6,0x42,0xef,0xa4,
0xd7,0xe2,0x3d,0xcf,0x39,0x3e,0x3a,0x0a,0x2e,0xff,0xd4,0x12,0x3c,0x8a,0xa6,0xad,
0xb4,0x0a,0x21,0x3e,0x41,0x10,0x08,0x55,0x6a,0x5e,0xa9,0xfb,0x10,0x66,0xf4,0xca,
0x59,0x40,0xd0,0x76,0x4c,0x71,0x26,0xb5,0x12,0x21,0x54,0x1a,0x5e,0x7e,0xfd,0xfc,
0x29,0x20,0x75,0x21,0xf8,0x4a,0xab,0xae,0xd1,0x12,0x14,0x9a,0x35,0x3c,0xeb,0x2b,
0x1e,0x42,0x8f,0x95,0xe5,0x99,0x87,0xb0,0xc3,0x19,0xe7,0x8e,0x7f,0xee,0x21,0xa7,
0xc0,0xbe,0xeb,0x5c,0x9c,0xfa,0x18,0x2f,0x10,0x77,0x19,0x33,0x8e,0x92,0x3d,0xe9,
0xbe,0x4b,0x58,0x6d,0x1c,0x77,0xa2,0xa9,0x98,0x04,0xb1,0x2e,0x2a,0x29,0xa0,0xf1,
0x06,0x20,0x88,0x85,0xea,0xa3,0xf1,0x4c,0x3b,0x0a,0x07,0x12,0x28,0xb5,0x6c,0x43,
0xe8,0x42,0x70,0x67,0xe2,0x6f,0xd4,0x9d,0x36,0xe0,0x08,0x7d,0x81,0xa0,0x11,0x65,
0x6f,0x32,0x79,0x34,0xae,0x5d,0xd3,0x0b,0x23,0x68,0xdd,0x6d,0x0c,0x15,0x82,0x7b,
0x9b,0xbd,0x11,0x91,0xa2,0x16,0xaa,0x03,0x4c,0x56,0xf7,0x6a,0x58,0x85,0x30,0x22,
0x57,0x14,0x0e,0xd6,0xba,0xd9,0x09,0xb3,0xff,0x2e,0x75,0xc1,0xe4,0xa0,0x8c,0x39,
0xd2,0xa7,0x07,0xe3,0x7a,0x9d,0x6e,0x37,0xbf,0xd2,0x84,0x2e,0xa3,0x7c,0x17,0x6d,
0xd6,0x64,0x6b,0xbe,0xf7,0x6d,0xa7,0xeb,0x75,0xc3,0x7e,0x0f,0xc5,0x51,0x26,0x28,
0x37,0xeb,0x58,0xf3,0x21,0xb5,0xeb,0xf4,0x36,0x4f,0x96,0x31,0xc9,0x6f,0x96,0x51,
0x46,0xfe,0x06,0x36,0xa1,0xfb,0x81,0x0f,0x43,0xf0,0xa0,0xdb,0xaa,0x1b,0x7f,0x02,
0x9a,0xa1,0x19,0x9e,0xb9,0x70,0x3e,0x0d,0x73,0xf6,0x23,0x5f,0xa7,0xb7,0x49,0xbe,
0x32,0xdc,0xdb,0x34,0x9a,0x88,0xd8,0xb5,0x89,0xf1,0xd1,0xc4,0x2b,0x92,0xd0,0xb1,
0x6a,0xff,0x66,0xfe,0x96,0x51,0x9a,0x4e,0x8d,0xec,0xd9,0xc8,0xee,0x0c,0x7d,0x70,
0x5c,0xff,0x10,0x17,0x4f,0x87,0x4b,0xc9,0x4f,0xfa,0xff,0xb0,0x9e,0x0d,0xbb,0xb0,
0x61,0xbd,0xa9,0xdb,0xe1,0x26,0xcb,0x63,0x42,0x27,0xbb,0x6d,0x67,0x36,0xac,0x3f,
0x65,0x23,0x4c,0x0c,0x7a,0x7e,0x08,0x7a,0x4c,0x0b,0x1c,0x35,0x12,0xde,0xa1,0x01,
0x2e,0x6c,0xd4,0x53,0xab,0xa6,0xc1,0xfc,0x6d,0x72,0xbf,0x0c,0x77,0x4b,0x78,0x99,
0xee,0xc1,0x6a,0x8f,0xdb,0xce,0xf7,0xfb,0x57,0x22,0xf3,0x0c,0x8d,0x62,0x30,0xb7,
0x1f,0x1c,0x23,0x3c,0x03,0xd5,0x38,0xd9,0x04,0xb9,0x06,0x00,0x00
};
const EmbedControlFlashedForm formData_SerialMobile {
    "Serial Mobile",
    formData_SerialMobile_d8,
    461
};

const EmbedControlFlashedForm* tcMenuAllEmbeddedForms[] { &formData_SerialMobile, nullptr };
