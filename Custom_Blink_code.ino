// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(7, 1);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(7, LOW);
  delay(800);
  digitalWrite(7, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);               // wait for a second
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(800);                // wait for a second
  digitalWrite(7, HIGH);
  delay(500);
  digitalWrite(7, LOW);
  delay(800);
  digitalWrite(7, HIGH);
  delay(500);
  digitalWrite(7, LOW);
  delay(800);
  digitalWrite(7, HIGH);
  delay(1000);
}
