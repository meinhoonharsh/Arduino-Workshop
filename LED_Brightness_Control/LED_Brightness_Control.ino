
// Write Program for IR Module and printing on Serial Monitor
#define IR_PIN 4

void setup() {
  Serial.begin(9600);
  pinMode(IR_PIN, INPUT);
}

void loop() {
  int irValue = digitalRead(IR_PIN);
  Serial.println(irValue);
  delay(1000);
}
