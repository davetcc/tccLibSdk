#ifndef TCMENU_THEME_MONO_BORDER
#define TCMENU_THEME_MONO_BORDER

#include <graphics/TcThemeBuilder.h>
#include "generated/ControlAppOledEncoderPico_menu.h"
#include <Fonts/OpenSansRegular8pt.h>

// Direct width=20, height=20, size=60
const uint8_t directBitmapOn[] PROGMEM = {
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x38,0x00,0x00,0x78,0x00,0xfc,0xff,
        0x00,0xfe,0xff,0x01,0xfe,0xff,0x03,0xfe,0xff,0x03,0xfe,0xff,0x03,0xfe,0xff,0x01,0xfc,0xff,0x00,0x00,
        0x78,0x00,0x00,0x38,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

// Direct width=20, height=20, size=60
const uint8_t directBitmapOff[] PROGMEM = {
        0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x38,0x00,0x00,0x78,0x00,0x7c,0xf8,
        0x00,0x3e,0xfc,0x01,0x3e,0xfc,0x03,0x1e,0xfe,0x03,0x1e,0xfe,0x03,0x0e,0xff,0x01,0x0c,0xff,0x00,0x00,
        0x78,0x00,0x00,0x38,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};

// Speaker icon=0, width=20, height=20, size=60
const uint8_t speakerBitmapOn[] PROGMEM = {
        0x00,0x0c,0x00,0x00,0x0e,0x00,0x00,0x0f,0x00,0x80,0x8f,0x00,0xc0,0x8f,0x01,0xff,0x2f,0x03,0xff,0x6f,
        0x06,0xff,0xcf,0x0c,0xff,0x8f,0x0c,0xff,0x8f,0x0c,0xff,0x8f,0x0c,0xff,0x8f,0x0c,0xff,0x4f,0x06,0xff,
        0x6f,0x03,0xff,0x2f,0x01,0xc0,0x8f,0x01,0x80,0x8f,0x00,0x00,0x0f,0x00,0x00,0x0e,0x00,0x00,0x0c,0x00

};
// Speaker icon=1, width=20, height=20, size=60
const uint8_t speakerBitmapOff[] PROGMEM = {
        0x00,0x0c,0x00,0x00,0x0e,0x00,0x00,0x0f,0x00,0x80,0x2f,0x08,0xc0,0x2d,0x08,0xff,0x4c,0x04,0x7f,0x4c,
        0x04,0x03,0x8c,0x02,0x03,0x8c,0x02,0x03,0x0c,0x01,0x03,0x0c,0x01,0x03,0x8c,0x02,0x03,0x8c,0x02,0x7f,
        0x4c,0x04,0xff,0x4c,0x04,0xc0,0x2d,0x08,0x80,0x2f,0x08,0x00,0x0f,0x00,0x00,0x0e,0x00,0x00,0x0c,0x00

};


void setupTheme() {

    color_t defaultItemPaletteMono[] = {WHITE, BLACK, WHITE, WHITE};
    TcThemeBuilder themeBuilder(renderer);
    themeBuilder.withSelectedColors(0, 1)
        .dimensionsFromRenderer()
        .withRenderingSettings(BaseGraphicalRenderer::TITLE_FIRST_ROW, false)
        .enablingTcUnicode()
        .withItemPadding(MenuPadding(1))
        .withTitlePadding(MenuPadding(1))
        .withStandardLowResCursorIcons()
        .withPalette(defaultItemPaletteMono)
        .withTcUnicodeFont(OpenSansRegular8pt)
        .withSpacing(2);

    themeBuilder.defaultItemProperties()
        .withJustification(tcgfx::GridPosition::JUSTIFY_TITLE_LEFT_VALUE_RIGHT)
        .apply();

    themeBuilder.defaultActionProperties()
            .withJustification(tcgfx::GridPosition::JUSTIFY_TITLE_LEFT_VALUE_RIGHT)
            .apply();

    themeBuilder.defaultTitleProperties()
            .withBorder(MenuBorder(0, 0, 2, 0))
            .withJustification(tcgfx::GridPosition::JUSTIFY_CENTER_NO_VALUE)
            .apply();

    themeBuilder.menuItemOverride(menuDirect)
            .onRowCol(3, 1, 2)
            .withImageXbmp(Coord(20, 20), directBitmapOff, directBitmapOn)
            .apply();

    themeBuilder.menuItemOverride(menuMute)
            .onRowCol(3, 2, 2)
            .withImageXbmp(Coord(20, 20), speakerBitmapOff, speakerBitmapOn)
            .apply();

    themeBuilder.apply();
}


#endif //TCMENU_THEME_MONO_BORDER
