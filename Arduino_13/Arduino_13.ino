# include <Liquid Crystal.h>
LiquidCrystal led (7,8,9,10,11,12);
intPIR=4;
int Readvalue;
void setup() {
   lcd.begin(16,2);
  lcd.clear();
  pinMode(pinpot,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  Readvalue=digitalRead(PIR)
  if (Readvalue==HIGH){
    lcd.print("wooiii")
  }
  else{
    digitalWrite(Ledred,LOW)
  }
  // put your main code here, to run repeatedly:

}
