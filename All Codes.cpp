// Write Arduino Program to Blink an Onboard LED
#define LED_PIN 13
#define BLINK_DELAY 1000

void setup() {
  pinMode(LED_PIN, OUTPUT);
}
void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(BLINK_DELAY);
  digitalWrite(LED_PIN, LOW);
  delay(BLINK_DELAY);
}

// Write Program to Touch to Turn On LED
#define LED_PIN 13
#define BUTTON_PIN 2

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}
void loop() {
  if (digitalRead(BUTTON_PIN) == HIGH) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
}

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

// Write Program for LED Pattern for 6 LEDs 02
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
  delay(1000);
  digitalWrite(LED_PIN_1, LOW);
  digitalWrite(LED_PIN_2, HIGH);
  delay(1000);
  digitalWrite(LED_PIN_2, LOW);
  digitalWrite(LED_PIN_3, HIGH);
  delay(1000);
  digitalWrite(LED_PIN_3, LOW);
  digitalWrite(LED_PIN_4, HIGH);
  delay(1000);
  digitalWrite(LED_PIN_4, LOW);
  digitalWrite(LED_PIN_5, HIGH);
  delay(1000);
  digitalWrite(LED_PIN_5, LOW);
  digitalWrite(LED_PIN_6, HIGH);
  delay(1000);
  digitalWrite(LED_PIN_6, LOW);
}

// Write Program for LED Pattern for 6 LEDs 03
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
  delay(1000);
  digitalWrite(LED_PIN_2, HIGH);
  delay(1000);
    digitalWrite(LED_PIN_3, HIGH);
    delay(1000);
    digitalWrite(LED_PIN_4, HIGH);
    delay(1000);
    digitalWrite(LED_PIN_5, HIGH);
    delay(1000);
    digitalWrite(LED_PIN_6, HIGH);
    delay(1000);
    digitalWrite(LED_PIN_6, LOW);
    delay(1000);
    digitalWrite(LED_PIN_5, LOW);
    delay(1000);
    digitalWrite(LED_PIN_4, LOW);
    delay(1000);
    digitalWrite(LED_PIN_3, LOW);
    delay(1000);
    digitalWrite(LED_PIN_2, LOW);
    delay(1000);
    digitalWrite(LED_PIN_1, LOW);
    delay(1000);
}

// Write Program for RGB LED
#define RED_PIN 4
#define GREEN_PIN 5
#define BLUE_PIN 6

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  digitalWrite(RED_PIN, HIGH);
  delay(1000);
  digitalWrite(RED_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  delay(1000);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(BLUE_PIN, HIGH);
  delay(1000);
  digitalWrite(BLUE_PIN, LOW);
}

// Write Program for RGB LED 02
#define RED_PIN 4
#define GREEN_PIN 5
#define BLUE_PIN 6

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  analogWrite(RED_PIN, 255);
  analogWrite(GREEN_PIN, 0);
  analogWrite(BLUE_PIN, 0);
  delay(1000);
  analogWrite(RED_PIN, 0);
  analogWrite(GREEN_PIN, 255);
  analogWrite(BLUE_PIN, 0);
  delay(1000);
  analogWrite(RED_PIN, 0);
  analogWrite(GREEN_PIN, 0);
  analogWrite(BLUE_PIN, 255);
  delay(1000);
}


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

// Write Program to decode Universal IR Receiver and print on Serial Monitor
#include <IRremote.h>

int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume();
  }
}

// Write Program with Forward Backward Left Right Control from Serial Monitor from Serial Monitor ny creating Separate functions
#define MOTOR_PIN_1 4
#define MOTOR_PIN_2 5
#define MOTOR_PIN_3 6
#define MOTOR_PIN_4 7

void setup() {
  Serial.begin(9600);
  pinMode(MOTOR_PIN_1, OUTPUT);
  pinMode(MOTOR_PIN_2, OUTPUT);
  pinMode(MOTOR_PIN_3, OUTPUT);
  pinMode(MOTOR_PIN_4, OUTPUT);
}

void loop() {
  if(Serial.available() > 0){
    char command = Serial.read();
    if(command == 'F'){
      forward();
    }else if(command == 'B'){
      backward();
    }else if(command == 'L'){
      left();
    }else if(command == 'R'){
      right();
    }else if(command == 'S'){
      stop();
    }
  }
}

void forward(){
  digitalWrite(MOTOR_PIN_1, HIGH);
  digitalWrite(MOTOR_PIN_2, LOW);
  digitalWrite(MOTOR_PIN_3, HIGH);
  digitalWrite(MOTOR_PIN_4, LOW);
  Serial.println("Forward");
}

void backward(){
  digitalWrite(MOTOR_PIN_1, LOW);
  digitalWrite(MOTOR_PIN_2, HIGH);
  digitalWrite(MOTOR_PIN_3, LOW);
  digitalWrite(MOTOR_PIN_4, HIGH);
  Serial.println("Backward");
}

void left(){
  digitalWrite(MOTOR_PIN_1, LOW);
  digitalWrite(MOTOR_PIN_2, HIGH);
  digitalWrite(MOTOR_PIN_3, HIGH);
  digitalWrite(MOTOR_PIN_4, LOW);
  Serial.println("Left");
}

void right(){
  digitalWrite(MOTOR_PIN_1, HIGH);
  digitalWrite(MOTOR_PIN_2, LOW);
  digitalWrite(MOTOR_PIN_3, LOW);
  digitalWrite(MOTOR_PIN_4, HIGH);
  Serial.println("Right");
}

void stop(){
  digitalWrite(MOTOR_PIN_1, LOW);
  digitalWrite(MOTOR_PIN_2, LOW);
  digitalWrite(MOTOR_PIN_3, LOW);
  digitalWrite(MOTOR_PIN_4, LOW);
  Serial.println("Stop");
}

// Write Program with Forward Backward Left Right Control from Serial Monitor from Universal IR Receiver
#include <IRremote.h>

#define MOTOR_PIN_1 4
#define MOTOR_PIN_2 5
#define MOTOR_PIN_3 6
#define MOTOR_PIN_4 7

int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
  pinMode(MOTOR_PIN_1, OUTPUT);
  pinMode(MOTOR_PIN_2, OUTPUT);
  pinMode(MOTOR_PIN_3, OUTPUT);
  pinMode(MOTOR_PIN_4, OUTPUT);
}

void loop() {
  if (irrecv.decode(&results)) {
    if(results.value == 0xFFA25D){
      forward();
    }else if(results.value == 0xFF629D){
      backward();
    }else if(results.value == 0xFFE21D){
      left();
    }else if(results.value == 0xFF22DD){
      right();
    }else if(results.value == 0xFF02FD){
      stop();
    }
    irrecv.resume();
  }
}

void forward(){
  digitalWrite(MOTOR_PIN_1, HIGH);
  digitalWrite(MOTOR_PIN_2, LOW);
  digitalWrite(MOTOR_PIN_3, HIGH);
  digitalWrite(MOTOR_PIN_4, LOW);
  Serial.println("Forward");
}

void backward(){
  digitalWrite(MOTOR_PIN_1, LOW);
  digitalWrite(MOTOR_PIN_2, HIGH);
  digitalWrite(MOTOR_PIN_3, LOW);
  digitalWrite(MOTOR_PIN_4, HIGH);
  Serial.println("Backward");
}

void left(){
  digitalWrite(MOTOR_PIN_1, LOW);
  digitalWrite(MOTOR_PIN_2, HIGH);
  digitalWrite(MOTOR_PIN_3, HIGH);
  digitalWrite(MOTOR_PIN_4, LOW);
  Serial.println("Left");
}

void right(){
  digitalWrite(MOTOR_PIN_1, HIGH);
  digitalWrite(MOTOR_PIN_2, LOW);
  digitalWrite(MOTOR_PIN_3, LOW);
  digitalWrite(MOTOR_PIN_4, HIGH);
  Serial.println("Right");
}

void stop(){
  digitalWrite(MOTOR_PIN_1, LOW);
  digitalWrite(MOTOR_PIN_2, LOW);
  digitalWrite(MOTOR_PIN_3, LOW);
  digitalWrite(MOTOR_PIN_4, LOW);
  Serial.println("Stop");
}










