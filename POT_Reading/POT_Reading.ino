
// Write Program for Pot Reading and display on Serial Monitor
#define POT_PIN A0

void setup() {
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(POT_PIN);
  Serial.println(potValue);
  delay(1000);
}
