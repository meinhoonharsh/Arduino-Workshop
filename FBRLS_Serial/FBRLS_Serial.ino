
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
