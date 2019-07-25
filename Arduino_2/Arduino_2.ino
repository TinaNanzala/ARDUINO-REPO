int LEDRED=9;
int LEDGREEN=4;
int BLINKRED=5;
int BLINKGREEN=6;

int delayredon=1000;
int delayredoff=1000;
int delaygreenon=1000;
int delaygreenoff=1000;


String message1="This is the ledred Blink #";
String message2="This is the ledred Blink #";
String message3="This is the ledred Blink #";
String message4="This is the ledred Blink #";


void setup () {
  Serial.begin(9600);
  pinMode(LEDRED,OUTPUT);
  pinMode(LEDGREEN,OUTPUT);
  Serial.println ("This is my program");
  Serial.println("");
  int j;  
  
}

void loop(){
  for( int j=1; j<=BLINKRED; j=j+1) {
  Serial.print (message1);
  Serial.println(j);
  digitalWrite(LEDRED,HIGH);
  delay(1000);
  digitalWrite(LEDRED,LOW);
  delay(1000);
  }
  
  Serial.println("");

for (int j=1; j<=BLINKGREEN; j=j+1) {
  Serial.print(message2);
  Serial.println(j);
  digitalWrite(LEDGREEN,HIGH);
  delay(1000);
  digitalWrite(LEDGREEN,LOW);
  delay(1000);
  }
  
  Serial.println("");
  

for (int j=1; j<=BLINKGREEN; j=j+1) {
  Serial.print(message3);
  Serial.println(j);
   digitalWrite(LEDRED,HIGH);
  delay(1000);
  digitalWrite(LEDRED,LOW);
  delay(1000);
}
  Serial.println("");

  
for (int j=1; j<=BLINKGREEN; j=j+1) {
  Serial.print(message4);
  Serial.println(j);

   digitalWrite(LEDGREEN,HIGH);
  delay(1000);
  digitalWrite(LEDGREEN,LOW);
  delay(1000);
}  }
  

