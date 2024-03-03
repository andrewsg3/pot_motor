/**
 * PROGRAM TO CONTROL PWM OF AN L298 CONTROLLED MOTOR VIA POTENTIOMETER.
 * @author Andrew Scott-George
 * Created 03/03/24
 * @todo On/off switch
 */

#define IN1 0 // L298 in1 pin
#define IN2 1 // L298 in2 pin
#define PWM 2 // L298 PWM pin
#define POT A0 // Potentiometer signal pin

int potValue;

void on(){
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
}

void off(){
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
}

void loop() {
  potValue = analogRead(POT);
  pwmValue = map(potValue, 0, 1023, 0, 255);
  analogWrite(POT, pwmValue);
}
