# include <Liquid Crystal.h>
LiquidCrystal led (7,8,9,10,11,12);
int pinpot = AO;


void setup() {
  lcd.begin(16,2);
  lcd.clear();
  pinMode(pinpot,INPUT);
 
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("SensorValue= ");
  lcd.print(analogRead (pinpot);
 
}
