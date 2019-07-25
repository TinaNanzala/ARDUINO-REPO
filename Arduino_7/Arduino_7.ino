int pinpot=A0;
int LED=9;
int Brightness;
int Readvalue;
String message1=("pinpot value");
String message2=("Brightness");
void setup(){
  Serial.begin(9600);
  pinMode(pinpot,INPUT);
  pinMode(LED,OUTPUT);
  

}

void loop() {
  Serial.print("pinpot value= ");
  Serial.print(Readvalue);
  Readvalue=analogRead(pinpot);
  Brightness=(255./1023.)*Readvalue;
  analogWrite(LED,Brightness);
  delay(1000);
  analogWrite(LED,0);
  delay(1000);
  Serial.println(" ");

  Serial.print("Brightness=");
  Serial.println(Brightness);


}
