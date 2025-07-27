#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>
#include <XPT2046_Touchscreen.h>
#include <DFRobotDFPlayerMini.h>
#include <SoftwareSerial.h>
#include <Adafruit_NeoPixel.h>

#define TFT_CS    15
#define TFT_DC    2
#define TFT_RST   4

#define TOUCH_CS  12
#define TOUCH_IRQ 14

#define NEOPIXEL_PIN 13
#define NUMPIXELS    16

#define DFPLAYER_RX 16
#define DFPLAYER_TX 17

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST);
XPT2046_Touchscreen ts(TOUCH_CS, TOUCH_IRQ);
SoftwareSerial mySoftwareSerial(DFPLAYER_RX, DFPLAYER_TX);
DFRobotDFPlayerMini myDFPlayer;
Adafruit_NeoPixel pixels(NUMPIXELS, NEOPIXEL_PIN, NEO_GRB + NEO_KHZ800);

bool isPlaying = false;
unsigned long lastLEDUpdate = 0;

void setup() {
  Serial.begin(115200);
  mySoftwareSerial.begin(9600);
  
  tft.begin();
  tft.setRotation(1);
  tft.fillScreen(ILI9341_BLACK);
  tft.setTextColor(ILI9341_WHITE);
  tft.setTextSize(2);
  tft.setCursor(20, 20);
  tft.println("Smart Speaker Ready!");

  ts.begin();
  ts.setRotation(1);

  if (!myDFPlayer.begin(mySoftwareSerial)) {
    tft.println("DFPlayer Error!");
    while (true);
  }

  myDFPlayer.volume(25);
  myDFPlayer.play(1);  // play first song
  isPlaying = true;

  pixels.begin();
  pixels.show(); // Initialize all pixels to 'off'
}

void loop() {
  if (ts.touched()) {
    TS_Point p = ts.getPoint();
    // crude region detection
    if (p.x > 200 && p.y > 200) {
      // Stop/Start toggle
      if (isPlaying) {
        myDFPlayer.pause();
        isPlaying = false;
        tft.fillScreen(ILI9341_RED);
        tft.setCursor(20, 100);
        tft.println("Paused");
      } else {
        myDFPlayer.start();
        isPlaying = true;
        tft.fillScreen(ILI9341_GREEN);
        tft.setCursor(20, 100);
        tft.println("Playing...");
      }
      delay(500); // debounce
    }
  }

  if (isPlaying) {
    animateRing();
  }
}

void animateRing() {
  if (millis() - lastLEDUpdate > 100) {
    static int pos = 0;
    pixels.clear();
    pixels.setPixelColor(pos, pixels.Color(random(100, 255), random(100, 255), random(100, 255)));
    pixels.show();
    pos = (pos + 1) % NUMPIXELS;
    lastLEDUpdate = millis();
  }
}
