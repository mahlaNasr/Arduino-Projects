// Making piano keys

// Initialising the notes on the piano
const int C = 12;
const int D = 11;
const int E = 10;
const int F = 9;
const int G = 8;
const int A = 7;
const int B = 6;

// Buzzer pin
const int Buzz = 13;

void setup()
{
  pinMode(C, INPUT);
  pinMode(D, INPUT);
  pinMode(E, INPUT); 
  pinMode(F, INPUT);
  pinMode(G, INPUT);
  pinMode(A, INPUT);
  pinMode(B, INPUT);
  
  pinMode(Buzz, OUTPUT);
}

void loop()
{
  while(digitalRead(C) == HIGH){
    // tone(pin number, pitch)
    tone(Buzz, 262);
  }
  
  while(digitalRead(D) == HIGH){
    tone(Buzz, 294);
  }
  
  while(digitalRead(E) == HIGH){
    tone(Buzz, 330);
  }
  
  while(digitalRead(F) == HIGH){
    tone(Buzz, 349);
  }
  
  while(digitalRead(G) == HIGH){
    tone(Buzz, 392);
  }
  
  while(digitalRead(A) == HIGH){
    tone(Buzz, 440);
  }
  
  while(digitalRead(B) == HIGH){
    tone(Buzz, 493);
  }
  
  noTone(Buzz);
}