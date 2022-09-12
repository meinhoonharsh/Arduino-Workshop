
// Write Program for LED Pattern for 6 LEDs 01
#define LED_PIN_1 4
#define LED_PIN_2 5
#define LED_PIN_3 6
#define LED_PIN_4 7
#define LED_PIN_5 8
#define LED_PIN_6 9

void setup() {
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
  pinMode(LED_PIN_3, OUTPUT);
  pinMode(LED_PIN_4, OUTPUT);
  pinMode(LED_PIN_5, OUTPUT);
  pinMode(LED_PIN_6, OUTPUT);
}
void loop() {
  digitalWrite(LED_PIN_1, HIGH);
  digitalWrite(LED_PIN_2, HIGH);
  digitalWrite(LED_PIN_3, HIGH);
  digitalWrite(LED_PIN_4, LOW);
  digitalWrite(LED_PIN_5, LOW);
  digitalWrite(LED_PIN_6, LOW);
  delay(1000);
  digitalWrite(LED_PIN_1, LOW);
  digitalWrite(LED_PIN_2, LOW);
  digitalWrite(LED_PIN_3, LOW);
  digitalWrite(LED_PIN_4, HIGH);
  digitalWrite(LED_PIN_5, HIGH);
  digitalWrite(LED_PIN_6, HIGH);
  delay(1000);
}
