int LED_PIN1=13;
int LED_PIN2=12;
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_PIN1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);                       // wait for a second
  digitalWrite(LED_PIN1, LOW);    // turn the LED off by making the voltage LOW
  delay(300);                       // wait for a second
  digitalWrite(LED_PIN2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);                       // wait for a second
  digitalWrite(LED_PIN2, LOW);    // turn the LED off by making the voltage LOW
  delay(300);                       // wait for a second
}
