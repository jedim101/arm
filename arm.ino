#include <ESP32Servo.h>

Servo shoulder;
const int shoulderPin = 18;
int shoulderCenter = 80;

Servo elbow;
const int elbowPin = 17;
int elbowCenter = 100;


Servo wrist;
const int wristPin = 16;
int wristCenter = 90;

// Servo servo2;
// const int servo2Pin = 17;

void setup() {
  Serial.begin(115200);

  delay(2000);
  Serial.println("Connected");

  shoulder.setPeriodHertz(50);
  shoulder.attach(shoulderPin, 550, 2450);
  shoulder.write(shoulderCenter);
  delay(1000);

  elbow.setPeriodHertz(50);
  elbow.attach(elbowPin, 550, 2450);
  elbow.write(elbowCenter);
  delay(1000);

  wrist.setPeriodHertz(50);
  wrist.attach(elbowPin, 550, 2450);
  wrist.write(elbowCenter);
  delay(1000);
}

bool increase = true;
int maximum = 135;
int minimum = 45;
int position = 90;

void loop() {
  // shoulder.write(position);
  // Serial.println(position);

  // if (position == maximum) increase = false;
  // if (position == minimum) increase = true;

  // if (increase) position++;
  // else position--;

  // delay(50);
}