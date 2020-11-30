/*
    oled.cpp - Library for Vaxer h bridge functions
    Authored by ElDiabloRojo
*/

#include <oled.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET     -1

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

oled::oled(int textSize, uint16_t textColour, int cursorX, int cursorY) {
    if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
    }

    display.setTextSize(textSize);
    display.setTextColor(textColour);
    display.setCursor(cursorX, cursorY);
}

void oled::printMessage(String message) {
    display.print(message);
    display.display();
}

void oled::clearDisplay() {
    display.clearDisplay();
    display.display();
}