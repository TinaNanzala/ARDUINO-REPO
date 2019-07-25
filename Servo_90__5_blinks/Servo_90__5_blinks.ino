#include <Servo.h>
int LEDRED=5;
int BLUELED=6;
Servo myServo;

void setup() {
  myServo.attach(3);
  pinMode(BLUELED,OUTPUT);
  pinMode(LEDRED,OUTPUT);

}

void loop() { 
  for (int j=1;j<5;j=j+1){
    digitalWrite(BLUELED,HIGH);
    delay(1000);
    digitalWrite(BLUELED,LOW);
    delay(1000);
  }
myServo.write(90);
delay(1000);

for (int j=1;j<10;j=j+1){
    digitalWrite(LEDRED,HIGH);
    delay(1000);
    digitalWrite(LEDRED,LOW);
    delay(1000);
  }

  myServo.write(0);
  delay(1000);

 }
