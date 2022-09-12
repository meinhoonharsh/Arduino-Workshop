
// Write Program for IR Module and control Buzzer
#define IR_PIN 4
#define LED_PIN 5

void setup() {
  pinMode(IR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int irValue = digitalRead(IR_PIN);
  if(irValue == HIGH){
    digitalWrite(LED_PIN, HIGH);
  }else{
    digitalWrite(LED_PIN, LOW);
  }
}
