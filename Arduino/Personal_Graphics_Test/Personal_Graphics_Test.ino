#include <LCD5110_Graph.h>

LCD5110 myGLCD(3,4,5,6,7);

extern unsigned char SmallFont[];
extern unsigned char TinyFont[];
extern uint8_t arduino_logo[];
extern uint8_t The_End[];
extern uint8_t pacman1[];
extern uint8_t pacman2[];
extern uint8_t pacman3[];
extern uint8_t pill[];
extern uint8_t twelve[];

float y;
uint8_t* bm;
int pacy;

void setup() {
  // put your setup code here, to run once:
  myGLCD.InitLCD();
  myGLCD.setFont(SmallFont);
  randomSeed(analogRead(7));
  myGLCD.clrScr();
}

void loop() {
  // put your main code here, to run repeatedly:


  myGLCD.clrScr();
  myGLCD.setFont(SmallFont);
  myGLCD.print("Luminous", CENTER, 1);
  myGLCD.print("NOVA", CENTER, 20);
  myGLCD.drawRect(28, 18, 56, 28);
  for (int i=0; i<6; i++)
  {
    myGLCD.drawLine(57, 18+(i*2), 83-(i*3), 18+(i*2));
    myGLCD.drawLine((i*3), 28-(i*2), 28, 28-(i*2));
  }
  myGLCD.setFont(TinyFont);
  myGLCD.print("(C)2016 by", CENTER, 36);
  myGLCD.print("Norvell Farber", CENTER, 42);
  myGLCD.update();
  
  delay(1000);

  myGLCD.clrScr();
  myGLCD.drawBitmap(p*20-8, pacy+7, twelve, 0, 0);
  delay(5000);
  
}
