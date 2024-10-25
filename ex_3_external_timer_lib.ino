#include <LiquidCrystal.h>
#include <TimerOne.h>

LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
volatile int myVar;

void setup() {
  Timer1.initialize(1000000); // init the timing interval for event triggering (1s = 10^6s)
  Timer1.attachInterrupt(ShowMessage); // The function is called at the preset time interval
}

void ShowMessage() {
  lcd.setCursor(0, 0);
  lcd.print(myVar);
  myVar++;
}

void loop() {
  // Do something else ...
}
