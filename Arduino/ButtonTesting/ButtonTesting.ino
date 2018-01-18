#include <PCD8544.h>
static PCD8544 lcd;

const int BUTTON = 8;
int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
lcd.begin(84, 48);
lcd.clear();

pinMode(BUTTON, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(BUTTON);

if(buttonState == HIGH)
{
lcd.setCursor(0, 0);
lcd.print("trent is dumb");
}
else
{
  lcd.setCursor(0,0);
  lcd.print("noah is dumb");
}
}
