#include<Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0X27,20,4); 

void setup() {
  // put your setup code here, to run once:
lcd.init();
lcd.backlight();
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available()>0){
  lcd.write(Serial.read(());
  }
  delay(1000);
  lcd.clear();   
}
