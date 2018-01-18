   #include <LCD5110_Graph.h>
#include <Time.h>
#include <TimeLib.h>
#include <PCD8544.h>
LCD5110 myGLCD(3,4,5,6,7);


// A custom glyph (a smiley)...
static const byte glyph [ ] = { B00010000, B00110100, B00110000, B00110100, B00010000 };

static PCD8544 lcd;

extern uint8_t FarberK[];
extern uint8_t UI[];
extern uint8_t Guy[];


void setup() {
  // PCD8544-compatible displays may have a different resolution...
  lcd.begin(84, 48);
lcd.clear();
  myGLCD.drawBitmap(0, 0, FarberK, 84, 48);
  myGLCD.update();
  delay(5000);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  myGLCD.drawBitmap(0, 0, UI, 42, 48);
  myGLCD.update();
  //lcd.setCursor(40, 4);
  //lcd.print("420");
  myGLCD.drawBitmap(42, 0, Guy, 42, 48);
  myGLCD.update();

}
