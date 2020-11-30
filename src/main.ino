/*********
  Rui Santos
  Complete project details at https://randomnerdtutorials.com  
*********/

#include <oled.h>

oled screen(1, WHITE, 0, 10);

void setup() {
  Serial.begin(9600);

  Serial.println("starting display");
  screen.printMessage("message 1");
  delay(2000);

  Serial.println("displaying second message");
  screen.clearDisplay();
  screen.printMessage("message 2");
  delay(2000);

  Serial.println("displaying third message");
  screen.clearDisplay();
  screen.printMessage("message 3");
  delay(2000);

  screen.clearDisplay();
}

void loop() {
}