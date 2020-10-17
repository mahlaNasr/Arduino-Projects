//variable
int buttonPin = 2;

int green = 11;
int yellow = 12;
int red = 13;

void setup()
{
  //green light is on by default
  digitalWrite(green, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);

  //button as an output
  pinMode(buttonPin, INPUT);
}


void changeLights(){

  // green off, yellow on for 3 seconds
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(red, LOW);
  delay(3000);

  // turn off yellow, then turn red on for 5 seconds
  digitalWrite(green, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(4000);

  // red and yellow on for 2 seconds (red is already on though)
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(red, HIGH);
  delay(2000);
  // turn off red and yellow, then turn on green
  digitalWrite(green, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  delay(3000);
}


void loop()
{
  if (digitalRead(buttonPin) == HIGH){
    //delay(15); // software debounce
    if (digitalRead(buttonPin) == HIGH) {
      // if the switch is HIGH, ie. pushed down - change the lights!
      changeLights();
      delay(5000);
    }
  }



}
