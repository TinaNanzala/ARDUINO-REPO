int redPin=11; //set red LED pin to 11
int greenPin=10; //set green LED pin 10
int bluePin=6; //setbrightness to 255
int brightness=255; //set brightness
String colorChoice; //Will hold users input of color choice

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //Turn on Serial Port
  pinMode(redPin,OUTPUT); //Set redPin to be an output
  pinMode(greenPin,OUTPUT); //Set greenPin to be an output
  pinMode(bluePin,OUTPUT); //Set bluePin to be an output

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("What color would you like the LED? (yellow,purple,cyan)"); //Prompt user for color
while (Serial.available()==0) {} //Wait for input
colorChoice = Serial.readString();

if (colorChoice=="red"){
  analogWrite(redPin, brightness); //turn on red pin
  analogWrite(greenPin,0); //turn off green pin
  analogWrite(bluePin,brightness); //turn on blue pin
  }
  
  if (colorChoice=="yellow"){
  analogWrite(redPin, brightness); //turn on red pin
  analogWrite(bluePin,0); //turn off blue pin
  analogWrite(greenPin,brightness); //turn on green pin
  }
  if (colorChoice=="purple"){
  analogWrite(redPin, brightness); //turn on red pin
  analogWrite(greenPin,0); //turn off green pin
  analogWrite(bluePin,brightness); //turn on blue pin
  }
if (colorChoice=="cyan"){
  analogWrite(greenPin, brightness); //turn on green pin
  analogWrite(redPin,0); //turn off red pin
  analogWrite(bluePin,brightness); //turn on blue pin
  }


 if (colorChoice=="red"){
  analogWrite(redPin, brightness); //turn on red pin
  analogWrite(greenPin,0); //turn off green pin
  analogWrite(bluePin,brightness); //turn on blue pin
  }
 
if (colorChoice=="blue"){
  analogWrite(redPin, brightness); //turn on red pin
  analogWrite(greenPin,0); //turn off green pin
  analogWrite(bluePin,brightness); //turn on blue pin
  }
if (colorChoice=="green"){
  analogWrite(redPin, brightness); //turn on red pin
  analogWrite(greenPin,0); //turn off green pin
  analogWrite(bluePin,brightness); //turn on blue pin
  }
if (colorChoice!="yellow" && colorChoice!="purple" && colorChoice !="cyan"){
  Serial.println("That is not a valid colorChoice,please try again");
  Serial.println("");
 }
}
