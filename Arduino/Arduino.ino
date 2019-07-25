int LEDRED=9;
int LEDGREEN=5; 
int BLINKRED=2;
int BLINKGREEN=3;

void setup(){
  Serial.begin (9600);
  pinMode(LEDRED,OUTPUT);
  pinMode(LEDGREEN,OUTPUT);
  Serial.println("This is my code");
  Serial.println("");
}

void loop() {
  for (int j=1;j<=BLINKRED;j=j+1){
  Serial.println("BLINK #1 is RED");
  digitalWrite (LEDRED,HIGH);
  delay(1000);
  digitalWrite(LEDRED,LOW);
  delay(1000);
  }
  Serial.println("BLINK #2 is GREEN");
  digitalWrite(LEDGREEN,HIGH);
  delay(1000);
  digitalWrite(LEDGREEN,LOW);
  delay(1000);
}
  
  
