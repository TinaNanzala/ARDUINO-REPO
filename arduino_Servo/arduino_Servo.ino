#include <Servo.h>
Servo servopin;
int PIR=5;
int Readvalue;
void setup() {
  servopin.attach(8);
  pinMode(PIR,INPUT);

}

void loop() { 
  Readvalue=digitalRead(PIR);
  if(Readvalue==HIGH){
    servopin.write(90);
  }
  else{
    servopin.write(0);
    }
 }
