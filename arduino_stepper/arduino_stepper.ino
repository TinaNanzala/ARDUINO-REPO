#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0X27,16,2);
void setup() {
  lcd.begin(16,2);//Defining 16 columns and 12 rows of lcd 
  lcd.backlight();//To power ON the backlight

}

void loop() {
  lcd.setCursor(0,0);//Defining position to write from first column and rows
  lcd.print("Tech amker");
  delay(1000);
  lcd.setCursor(0,1);
  lcd.print("like|share");
  delay(8000);

  lcd.clear();
  lcd.setCursor(0,0):
  lcd.print("SUBSCRIBE");
  lcd.setCursor(0,1);
  lcd.print("TECH MAKER");
  delay(8000);
 

}
