#include <LCD5110_Graph.h>

LCD5110 myGLCD(3,4,5,6,7);

extern uint8_t SmallFont[];
extern uint8_t arduino_logo[];
extern unsigned char TinyFont[];
extern uint8_t The_End[];
extern uint8_t pacman1[];
extern uint8_t pacman2[];
extern uint8_t pacman3[];
extern uint8_t pill[];

float y;
uint8_t* bm;
int pacy;

void setup() {
  // put your setup code here, to run once:
  myGLCD.InitLCD();
  myGLCD.setFont(SmallFont);
  randomSeed(analogRead(7));
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int pc=0; pc<3; pc++)
  {
    pacy=(0, 28);
  
    for (int i=-20; i<24; i++)
    {
      myGLCD.clrScr();
      switch(((i+20)/3) % 4)
      {
        case 0: bm=pacman1;
                break;
        case 1: bm=pacman2;
                break;
        case 2: bm=pacman3;
                break;
        case 3: bm=pacman2;
                break;
      }      myGLCD.drawBitmap(10, i, bm, 20, 20);
      myGLCD.update();
      delay(25);
    }
  }
  }

