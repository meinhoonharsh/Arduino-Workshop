
// Write Program for Pot Reading and control LED
#define POT_PIN A0
#define LED_PIN 4

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int potValue = analogRead(POT_PIN);
  analogWrite(LED_PIN, potValue/4);
  delay(1000);
}
