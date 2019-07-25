int  red = 9;
int amber = 8;
int green = 7;
int button = 2;
int buttonValue = 0;


void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(amber, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  buttonValue = digitalRead(button);
  if(buttonValue == HIGH){
    changeLights();
  }
}

void changeLights(){
  digitalWrite(red, HIGH);
  delay(5000);
  digitalWrite(amber, HIGH);
  delay(2000);
  digitalWrite(red, LOW);
  digitalWrite(amber, LOW);
  digitalWrite(green, HIGH);
  delay(5000);
  digitalWrite(green, LOW);
}

