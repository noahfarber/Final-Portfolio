#include <Time.h>
#include <TimeLib.h>
#include <PCD8544.h>


// A custom glyph (a smiley)...
static const byte glyph [ ] = { B00010000, B00110100, B00110000, B00110100, B00010000 };

char Str1[1] = "1234";

static PCD8544 lcd;

String stringOne, stringTwo, stringThree, stringFour, stringMisc;


void setup() {
  // PCD8544-compatible displays may have a different resolution...
  lcd.begin(84, 48);
lcd.clear();
  // Add the smiley to position "0" of the ASCII table...
 // lcd.createChar(0, glyph);
lcd.setCursor(10, 2);
lcd.print("Gay");
lcd.setCursor(40, 3);
lcd.print("WATCH");
  delay(500);
  lcd.clear();
  setTime(11,45,0,4,10,2016);
  // setTime(hr,min,sec,day,month,yr);
  stringOne = String(hour());
  stringTwo = String(":");
  stringThree = String(minute());
  stringFour = String(second());
  stringMisc = String();

}

void loop() {
  // Just to show the program is alive..

//Text
  /*
  lcd.setCursor(4, 1);
  lcd.print(" ");
  lcd.setCursor(30, 1);
  lcd.print(" ");
*/  
// Hours
  lcd.setCursor(18, 2);
  if(hour() < 10)
  {
    lcd.setCursor(18, 2);
    lcd.print("0");
    lcd.setCursor(25, 2);
    lcd.print(hour(), DEC);
  }
  else
  {
   lcd.setCursor(5, 2);
   lcd.print(stringOne + stringTwo + stringThree + stringTwo + stringFour);
   //lcd.print((hour(), DEC));
  }
/*
  // Colon
  lcd.setCursor(30, 2);
  lcd.print(":");


  // Minutes
  if(minute() < 10)
  {
    lcd.setCursor(32, 2);
  //  lcd.print("0");
    lcd.setCursor(32, 2);
    lcd.print(minute(), DEC);
  }
  else
  {
   lcd.setCursor(42, 2);
   lcd.print(minute(), DEC);
  }

  // Colon
  lcd.setCursor(50, 2);
  lcd.print(":");

  
  // Seconds
    if(second() < 10)
  {
    lcd.setCursor(55, 2);
    lcd.print("0");
    lcd.setCursor(61, 2);
    lcd.print(second(), DEC);
  }
  else
  {
   lcd.setCursor(55, 2);
   lcd.print(second(), DEC);
  }
*/
  // Print Month
  lcd.setCursor(13, 3);
  lcd.print(month());

  // Print Slash
  lcd.setCursor(24, 3);
  lcd.print("/");

  // Print Day
  lcd.setCursor(30, 3);
  lcd.print(day());

  //Print Slash
  lcd.setCursor(36, 3);
  lcd.print("/");

  //Print Year
  lcd.setCursor(41, 3);
  lcd.print(year());
 
  
// Smileys
/*
lcd.setCursor(34, 4);
lcd.write(0);
lcd.setCursor(42, 4);
lcd.write(0);
lcd.setCursor(50, 4);
lcd.write(0);
lcd.setCursor(0, 0);
lcd.write(1);
*/


//Seconds
  delay(1000);
}

