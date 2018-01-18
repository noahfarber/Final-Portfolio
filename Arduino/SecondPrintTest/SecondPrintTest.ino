#include <Time.h>
#include <TimeLib.h>

#include <PCD8544.h>

static PCD8544 lcd;

void setup() {
  // put your setup code here, to run once:

  lcd.begin(84, 48);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
if (second() < 10){
lcd.setCursor(18, 2);
lcd.print("0");
lcd.setCursor(24, 2);
lcd.print(second());
}
else 
{
  lcd.setCursor(18, 2);
lcd.print(second());
}

}
