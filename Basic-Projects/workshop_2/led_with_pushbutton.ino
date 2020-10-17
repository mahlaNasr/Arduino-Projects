//constants
const int buttonPin = 2;
const int ledPin = 13;
  
// variable
int buttonState = 0;


void setup()
{
  //led as an input
  pinMode(ledPin, OUTPUT);
  //button as an output
  pinMode(buttonPin, INPUT);
}

void loop()
{
  //read the state of the button
  buttonState = digitalRead(buttonPin);
  
  //check if button is pressed
  if(buttonState == HIGH){
    digitalWrite(ledPin, HIGH);
  }
  else{
  	digitalWrite(ledPin, LOW);
  }
}
