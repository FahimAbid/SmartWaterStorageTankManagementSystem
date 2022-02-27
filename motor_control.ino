const int SONAR_TRIG = 13;
const int SONAR_ECHO = 12;
const int MOTOR_IN3 = 7;
const int MOTOR_IN4 = 8;
const int MOTOR_PWM = 9;
const int BAUD_RATE = 9600;
int filling = 0;

void setup() {
  pinMode(SONAR_TRIG, OUTPUT);
  pinMode(SONAR_ECHO, INPUT);
  pinMode(MOTOR_IN3, OUTPUT);
  pinMode(MOTOR_IN4, OUTPUT);
  pinMode(MOTOR_PWM, OUTPUT);
  Serial.begin(BAUD_RATE);
}

void loop() {
  digitalWrite(SONAR_TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(SONAR_TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(SONAR_TRIG, LOW);
  digitalWrite(MOTOR_IN4, LOW);
  analogWrite(MOTOR_PWM, 200);

  // SONAR sensor depth calculation
  long duration = pulseIn(SONAR_ECHO, HIGH);
  int distance = duration / 29 / 2;
  if (duration == 0) {
    Serial.println("Warning: no pulse from sensor");
  }
  else {
    Serial.print("distance to nearest object:");
    Serial.println(distance);
    Serial.println(" cm");
  }

  if ()

  
  delay(100);
}
