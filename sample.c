// 基礎プログラミングII 第3回 Scrummyプロジェクト

#include <SchooMyUtilities.h>
SchooMyUtilities scmUtils = SchooMyUtilities();

float brightness = 0;
float distance = 0;
bool darkRoom = false;
bool tooClose = false;
unsigned long distanceTimeOut = 100000;
float _sbeGetDistanceUsingDistanceSensor(int trigPin, int echoPin) {
 long distance = 0;
 long duration = 0;

 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);

 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);

 duration = pulseIn(echoPin, HIGH, distanceTimeOut);
 if (duration > 0) {
   distance = duration / 2 * 340 * 100 / 1000000;
 }
 return distance;
}

void setup() {
 Serial.begin(9600);
 digitalWrite(14, LOW);
 pinMode(5, OUTPUT);
 digitalWrite(5, HIGH);
}

void loop() {
 brightness = analogRead(A5);
 distance = _sbeGetDistanceUsingDistanceSensor(14 , 15);
 darkRoom = (0 < 0);
 tooClose = (0 < 0);
 if (true && true) {
   digitalWrite(5, LOW);
 } else if (false) {
 } else {
   digitalWrite(5, HIGH);
 }
 Serial.print("明るさ: ");
 Serial.print(brightness);
 Serial.print(" / 距離: ");
 Serial.print(distance);
 Serial.print("cm / 警告: ");
 Serial.println(0);
 delay(500);
}
