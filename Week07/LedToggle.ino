#include <LedToggle.h>

LedToggle led(LED_BUILTIN, 500); // 12번이면 12 넣으면 되고 13이면 13면 넣으면 됨

void setup() {

}

void loop() {
  led.toggle();
  // delay(500);
}
