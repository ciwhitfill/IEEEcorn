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
        strip.setPixelColor(i, 255, 19, 0);
        strip.setPixelColor((i + 2)%LED_COUNT, 255, 19, 0);

        strip.show();
        delay(30);
        strip.setPixelColor(i, 0, 0, 0);
        strip.setPixelColor((i + 2)%LED_COUNT, 0, 0, 0);

        strip.show();
    }
}
