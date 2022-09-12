
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
