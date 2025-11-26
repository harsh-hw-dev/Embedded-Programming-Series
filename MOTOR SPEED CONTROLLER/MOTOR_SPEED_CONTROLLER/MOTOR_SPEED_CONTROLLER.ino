// MOTOR_SPEED_CONTROLLER.ino
int m1 = 7;    // direction pin 1
int m2 = 6;    // direction pin 2
int en = 9;    // PWM pin (enable)
int pot = A0;

void setup() {
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(en, OUTPUT);
  digitalWrite(m1, LOW);
  digitalWrite(m2, LOW);
}

void loop() {
  int raw = analogRead(pot);
  int pwm = raw / 4;      // 0..255
  if (pwm < 10) pwm = 0;  // dead zone to avoid buzzing

  digitalWrite(m1, HIGH); // set direction
  digitalWrite(m2, LOW);
  analogWrite(en, pwm);
}
