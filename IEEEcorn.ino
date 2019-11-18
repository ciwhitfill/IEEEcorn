#include <Adafruit_NeoPixel.h>

#define LED_PIN    6
#define LED_COUNT 12

Adafruit_NeoPixel strip(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
    strip.begin();
    strip.show();
}
void loop() {
    for(int i = 0; i < LED_COUNT; i++) {
        strip.setPixelColor(i, 220, 20, 0);
        strip.show();
        delay(50);
        strip.setPixelColor(i, 0, 0, 0);
        strip.show();
    }
}
