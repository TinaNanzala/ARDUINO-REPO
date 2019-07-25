 int TRIG=10;
int Echo=8;
float Time;
float distance;   
void setup() {
  pinMode(TRIG,OUTPUT);
  pinMode(Echo,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(TRIG,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG,HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG,LOW);
  Time=pulseIn(Echo,HIGH);
  distance=(Time*0.0343)/2;
  Serial.print(distance);
  Serial.println("cm");
}
  // put your main code here, to run repeatedly:


