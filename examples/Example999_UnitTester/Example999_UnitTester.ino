/*
  Run this first to make sure your display is connected correctly and working well!
  By: Owen Lyke
  SparkFun Electronics
  Date: July 17th 2018
  License: This code is public domain but you buy me a beer if you use this and we meet someday (Beerware license).
  Please, if anything is unclear or needs to be fixed let me know about it by submitting an issue on github! 
  https://github.com/sparkfun/Sparkfun_RGB_OLED_64x64_Arduino_Library
  
  Example1_DisplayTest

  Hardware:
  This example is for the RGB OLED 64x64 Breakout, but the underlying driver (SSD1357) can be applied to other
  displays in some cases. If you are using the breakout then all the various voltage regulation and level 
  shifting is already taken care of. Just connect to a controller such as an Arduino Uno as follows:

  Breakout Pin  -->      Uno Pin
  ------------------------------
  GND           -->         GND
  VIN           -->          5V (3.3V works too)
  RST           -->           2
  MOSI          -->          11
  SCLK          -->          13
  D/C           -->           3
  CS            -->           4 

  If you want to support development of software like this consider purchasing the breakout from SparkFun!
  https://www.sparkfun.com/products/14680
  
*/
#include "SparkFun_RGB_OLED_64x64.h"      // Click here to get the library: http://librarymanager/All#SparkFun_RGB_OLED_64x64

#define CS_PIN 4
#define DC_PIN 3
#define RST_PIN 2

RGB_OLED_64x64  myOLED;                   // Declare OLED object of the RGB_OLED_64x64 class

boolean invertDisp = false;

void setup() {
  Serial.begin(9600);
  Serial.println("Example1_DisplayTest");

  SPI.begin();
  myOLED.begin(DC_PIN, RST_PIN, CS_PIN, SPI, 8000000);    // Use 8 MHz SPI on Arduino Uno instead of the default/maximum (10 MHz)

  
  myOLED.clearDisplay();            // Fills the screen with black
  myOLED.setCursor(0,0);            // Sets the cursor relative to the display. (0,0) is the upper left corner and (63,63) is the lower right
  myOLED.println("Hello world!");   // Prints using the default font at the cursor location
}

void loop() {

  myOLED.begin(DC_PIN, RST_PIN, CS_PIN, SPI, 8000000);    // Use 8 MHz SPI on Arduino Uno instead of the default/maximum (10 MHz)
  myOLED.clearDisplay();
  myOLED.setCursor(0,0);            // Sets the cursor relative to the display. (0,0) is the upper left corner and (63,63) is the lower right
  myOLED.println("Hello world!");   // Prints using the default font at the cursor location

  delay(500);
}
