/*
    oled.h - Library for Vaxer h bridge functions
    Authored by ElDiabloRojo
*/

#ifndef oled_h
#define oled_h

#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

class oled {
    public:
        oled(int textSize, uint16_t textColour, int cursorX, int cursorY);
        void printMessage(String message);
        void clearDisplay();
};

# endif