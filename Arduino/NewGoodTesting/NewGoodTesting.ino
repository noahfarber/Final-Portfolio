   #include <LCD5110_Graph.h>
#include <Time.h>
#include <TimeLib.h>
#include <PCD8544.h>

LCD5110 myGLCD(3,4,5,6,7);
static PCD8544 lcd;
const int upButton = A0;
int upButtonState = 0;
const int midButton = A1;
int midButtonState = 0;
const int downButton = A2;
int downButtonState = 0;

int currentHour = 0;
int currentMinute = 0;
int currentSecond = 0;
int currentDay = 0;
int currentMonth = 0;
int currentYear = 0;
int setupMode = 0;

extern unsigned char TinyFont[];
extern uint8_t SmallFont[];
extern uint8_t clockFace[];
extern uint8_t box1[];
extern uint8_t box2[];
extern uint8_t box3[];
extern uint8_t box4[];
extern uint8_t box5[];
extern uint8_t secondStick[];
extern uint8_t sideline3[];
extern uint8_t topline3[];
extern uint8_t hour1[];
extern uint8_t hour2[];
extern uint8_t hour3[];
extern uint8_t hour4[];
extern uint8_t hour5[];
extern uint8_t hour6[];
extern uint8_t hour7[];
extern uint8_t hour8[];
extern uint8_t hour9[];
extern uint8_t hour10[];
extern uint8_t hour11[];
extern uint8_t hour12[];
extern uint8_t minute0[];
extern uint8_t minute5[];
extern uint8_t minute10[];
extern uint8_t minute15[];
extern uint8_t minute20[];
extern uint8_t minute25[];
extern uint8_t minute30[];
extern uint8_t minute35[];
extern uint8_t minute40[];
extern uint8_t minute45[];
extern uint8_t minute50[];
extern uint8_t minute55[];

float y;
uint8_t* bm;
int pacy;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myGLCD.InitLCD();
  myGLCD.setFont(SmallFont);
  randomSeed(analogRead(7));
 /* lcd.setCursor(10, 2);
lcd.print("Luminous");
lcd.setCursor(40, 3);
lcd.print("NOVA");
*/
  delay(500);
  lcd.clear();
  setTime(currentHour,currentMinute,currentSecond,currentDay,currentMonth,currentYear);

  
  myGLCD.clrScr();
  /*
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
  
  delay(2000);
  myGLCD.clrScr();
*/
lcd.begin (84, 48);
  
if(currentHour == 0 && currentMinute == 0 && currentSecond == 0 && setupMode == 0)
{
  setupMode = 1;
}

}

void loop() {
  // put your main code here, to run repeatedly:
upButtonState = digitalRead(upButton);
midButtonState = digitalRead(midButton);
downButtonState = digitalRead(downButton);


//HOUR SETUP
if(setupMode == 1)
{

  myGLCD.clrScr();
  lcd.setCursor(10, 1);
  lcd.print("Set Current");
  lcd.setCursor(20, 2);
  lcd.print("Time");
  lcd.setCursor(10, 4);
  lcd.print("Hour:");
  lcd.setCursor(50, 4);
  lcd.print(currentHour);
  if(upButtonState == HIGH && currentHour<=11)
  {
    currentHour = currentHour + 1;
    delay(200);
  }
    if(downButtonState == HIGH && currentHour>=2)
  {
    currentHour = currentHour - 1;
    delay(200);
  }

  if(midButtonState == HIGH)
{
  setupMode = 2;
  delay(200);
  
}

}



  if(setupMode == 2)
  {
  myGLCD.clrScr();
  lcd.setCursor(10, 1);
  lcd.print("Set Current");
  lcd.setCursor(20, 2);
  lcd.print("Time");
  lcd.setCursor(10, 4);
  lcd.print("Minute:");
  lcd.setCursor(50, 4);
  lcd.print(currentMinute);
  if(upButtonState == HIGH && currentMinute<=59)
  {
    currentMinute = currentMinute + 1;
    delay(100);
  }
    if(downButtonState == HIGH && currentMinute>=2)
  {
    currentMinute = currentMinute - 1;
    delay(100);
  }
  }

  
/*
else
{

  if (hour() == 1)
  {
  myGLCD.clrScr();
  myGLCD.drawBitmap(0, 0, hour1, 84, 48);
  myGLCD.update();
  }
  if (hour() == 2)
  {
  myGLCD.clrScr();
  myGLCD.drawBitmap(0, 0, hour2, 84, 48);
  myGLCD.update();
  }
  if (hour() == 3)
  {
  myGLCD.clrScr();
  myGLCD.drawBitmap(0, 0, hour3, 84, 48);
  myGLCD.update();
  }
  if (hour() == 4)
  {
  myGLCD.clrScr();
  myGLCD.drawBitmap(0, 0, hour4, 84, 48);
  myGLCD.update();
  }
  if (hour() == 5)
  {
  myGLCD.clrScr();
  myGLCD.drawBitmap(0, 0, hour5, 84, 48);
  myGLCD.update();
  }
  if (hour() == 6)
  {
  myGLCD.clrScr();
  myGLCD.drawBitmap(0, 0, hour6, 84, 48);
  myGLCD.update();
  }
  if (hour() == 7)
  {
  myGLCD.clrScr();
  myGLCD.drawBitmap(0, 0, hour7, 84, 48);
  myGLCD.update();
  }
  if (hour() == 8)
  {
  myGLCD.clrScr();
  myGLCD.drawBitmap(0, 0, hour8, 84, 48);
  myGLCD.update();
  }
  if (hour() == 9)
  {
  myGLCD.clrScr();
  myGLCD.drawBitmap(0, 0, hour9, 84, 48);
  myGLCD.update();
  }
  if (hour() == 10)
  {
  myGLCD.clrScr();
  myGLCD.drawBitmap(0, 0, hour10, 84, 48);
  myGLCD.update();
  }
  if (hour() == 11)
  {
  myGLCD.clrScr();
  myGLCD.drawBitmap(0, 0, hour11, 84, 48);
  myGLCD.update();
  }
  if (hour() == 12)
  {
  myGLCD.clrScr();
  myGLCD.drawBitmap(0, 0, hour12, 84, 48);
  myGLCD.update();
  }
  
  if(minute() >= 0 && minute() < 5)
  {
  myGLCD.drawBitmap(0, 21, minute0, 84, 48);
  myGLCD.update();
  }

  if(minute() >= 5 && minute() < 10)
  {
  myGLCD.drawBitmap(0, 21, minute5, 84, 48);
  myGLCD.update();
  }

  if(minute() >= 10 && minute() < 15)
  {
  myGLCD.drawBitmap(0, 21, minute10, 84, 48);
  myGLCD.update();
  }

  if(minute() >= 15 && minute() < 20)
  {
  myGLCD.drawBitmap(0, 21, minute15, 84, 48);
  myGLCD.update();
  }

  if(minute() >= 20 && minute() < 25)
  {
  myGLCD.drawBitmap(0, 21, minute20, 84, 48);
  myGLCD.update();
  }

  if(minute() >= 25 && minute() < 30)
  {
  myGLCD.drawBitmap(0, 21, minute25, 84, 48);
  myGLCD.update();
  }

  if(minute() >= 30 && minute() < 35)
  {
  myGLCD.drawBitmap(0, 21, minute30, 84, 48);
  myGLCD.update();
  }

  if(minute() >= 35 && minute() < 40)
  {
  myGLCD.drawBitmap(0, 21, minute35, 84, 48);
  myGLCD.update();
  }

  if(minute() >= 40 && minute() < 45)
  {
  myGLCD.drawBitmap(0, 21, minute40, 84, 48);
  myGLCD.update();
  }

  if(minute() >= 45 && minute() < 50)
  {
  myGLCD.drawBitmap(0, 21, minute45, 84, 48);
  myGLCD.update();
  }

  if(minute() >= 50 && minute() < 55)
  {
  myGLCD.drawBitmap(0, 21, minute50, 84, 48);
  myGLCD.update();
  }

  if(minute() >= 55 && minute() < 60)
  {
  myGLCD.drawBitmap(0, 21, minute55, 84, 48);
  myGLCD.update();
  }
  delay(3000);
 /* myGLCD.clrScr();
 for (int i=0; i<25; i++)
  {
    myGLCD.clrScr();
    myGLCD.drawBitmap(0, i-13, sideline3, 84, 24);
    myGLCD.update();
    delay(100);
  }

} */ 
}



