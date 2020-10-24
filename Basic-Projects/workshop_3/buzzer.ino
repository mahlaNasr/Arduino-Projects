void setup()
{
  pinMode(10, OUTPUT);
}

void loop()
{
  // tone(pin number, pitch, sound length)
  tone(10, 200, 100);
  delay(1000); // Wait for 1000 millisecond(s)
}