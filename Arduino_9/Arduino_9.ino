int pinpot =A0;
int LEDRED=10;
int delayedRED;
int REadvalue;
void setup() {
 Serial.begin(9600);
 pinMode(pinpot,INPUT);
 pinMode(LEDRED,OUTPUT);

}

void loop() {
  Readvalue = analogRead(pinpot);
  delayRED = REadvalue;
  analogWrite(LEDRED,255);
  delay(delayRED);
  analogWrite(LEDRED,0);
  delay(delayRED);
}


}
